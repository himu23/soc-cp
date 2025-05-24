#include <bits/stdc++.h>
using namespace std;
#define int long long int

int solve(vector<int>& prf, int b, int it){
    int l=0, r=it-1;
    int ans=0;
    while(l<=r){
        int md=(l+r)/2;
        if(prf[it-1]-(md > 0 ? prf[md - 1] : 0)+md>=b*(it-md)){
            ans=it-md;
            r=md-1;
        }
        else l=md+1;
    }
    return ans;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(false);
	int k; k=1;
	cin>>k;
	while(k--){
	    int n,m; cin>>n>>m;
	    vector<int> a(n);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a.begin(),a.end());
        vector<int> prf(n);
        prf[0]=a[0];
        for(int i=1;i<n;i++){
            prf[i]=a[i]+prf[i-1];
        }
        for(int i=0;i<m;i++){
            int count=0;
            int b; cin>>b;
            int it= lower_bound(a.begin(),a.end(),b)-a.begin();
            //cout<<it<<endl;
            count+=n-it;
            count+=solve(prf,b,it);
            cout<<count<<endl;
        }
        
	}
    return 0;
}