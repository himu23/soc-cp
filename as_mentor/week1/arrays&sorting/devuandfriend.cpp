#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    cin.tie(0)->sync_with_stdio(false);
	int k; k=1;
	cin>>k;
	while(k--){
	    int n; cin>>n;
	    int b[n];
	    int a[101]={0};
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	        a[b[i]]++;
	    }
	    int ans=0;
	    for(int i=0;i<101;i++){
	        if(a[i]>0) ans++;
	    }
	    cout<<ans<<endl;
	}
    return 0;
}
