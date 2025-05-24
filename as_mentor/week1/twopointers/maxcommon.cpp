#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    cin.tie(0)->sync_with_stdio(false);
	int k; k=1;
	cin>>k;
	while(k--){
	    int n; cin>>n;
	    int a[n], b[n];
	    for(int i=0;i<n;i++) cin>>a[i];
	    for(int i=0;i<n;i++) cin>>b[i];
	    sort(a,a+n);
	    sort(b,b+n);
	    int i=0,j=0;
	    int ans=0;
	    while(i<n && j<n){
	        if(a[i]==b[j]){
	            ans++;
	            i++;
	            j++;
	        }
	        else if(a[i]>b[j]) j++;
	        else i++;
	    }
	    cout<<ans<<endl;
	}
    return 0;
}
