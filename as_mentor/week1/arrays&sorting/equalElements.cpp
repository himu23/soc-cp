#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    cin.tie(0)->sync_with_stdio(false);
	int k; k=1;
	cin>>k;
	while(k--){
	    int n; cin>>n;
	    vector<int> a(n);
	    vector<int> b(n,0);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        b[a[i]]++;
	    }
	    int ans=0;
	    for(int i=0;i<n;i++){
	        ans=max(ans,b[i]);
	    }
	    cout<<n-ans<<endl;
	    
	}
    return 0;
}
