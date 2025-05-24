#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    cin.tie(0)->sync_with_stdio(false);
	int k; k=1;
	cin>>k;
	while(k--){
	    int n,b; cin>>n>>b;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int ans=0;
	    sort(a,a+n);
	    int i=0,j=0;
	    while(i<n && j<n){
	        int p=abs(a[j]-a[i]);
	        if(p==b){
	            ans=1;
	            break;
	        }
	        else if(p<b) j++;
	        else i++;
	    }
	    cout<<ans<<endl;
	}
    return 0;
}
