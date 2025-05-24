#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    cin.tie(0)->sync_with_stdio(false);
	int k; k=1;
	cin>>k;
	while(k--){
	    int n; cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++) cin>>a[i];
	    vector<int> ans;
	    for(int i=0;i<n;i++){
	        if(i==0){
	            ans.push_back(a[i]);
	            continue;
	        }
	        if(a[i]!=a[i-1]) ans.push_back(a[i]);
	    }
	    cout<<ans.size()<<endl;
	    for(int i=0;i<ans.size();i++){
	        cout<<ans[i]<<" ";
	    }
	    cout<<endl;
	}
    return 0;
}
