#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    cin.tie(0)->sync_with_stdio(false);
	int k; k=1;
	cin>>k;
	while(k--){
	    int n; cin>>n;
	    int ans=0;
	    for(int i=0;i<n;i++){
	        int temp;
	        cin>>temp;
	        ans=max(ans,temp);
	    }
	    cout<<ans<<endl;
	}
    return 0;
}
