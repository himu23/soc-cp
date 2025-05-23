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
	    vector<int> b(n,0);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        b[a[i]-1]++;
	    }
	    sort(b.begin(),b.end());
	    if(b[n-1]==b[n-2]) cout<<"no"<<endl;
	    else cout<<"yes"<<endl;
	}
    return 0;
}
