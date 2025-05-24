#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    cin.tie(0)->sync_with_stdio(false);
	int k; k=1;
	cin>>k;
	while(k--){
	    int n,k; cin>>n>>k;
	    int a[n];
	    for(int i;i<n;i++) cin>>a[i];
	    int b=0;
	    for(int i=0;i<k;i++){
	        b+=a[i];
	    }
	    int ans=b;
	    int i=0, j=k;
	    while(j<n){
	        b=b-a[i]+a[j];
	        ans=max(ans,b);
	        i++;
	        j++;
	    }
	    cout<<ans<<endl;
	}
    return 0;
}
