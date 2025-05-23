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
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int ans=0;
	    for(int i=0;i<n;i++){
	        ans ^= a[i];
	    }
	    cout<<ans<<endl;
	}
    return 0;
}


/*
Key Property of XOR:
x ^ x = 0 → A number XORed with itself is 0

x ^ 0 = x → A number XORed with 0 is itself

XOR is associative and commutative: order doesn't matter
*/