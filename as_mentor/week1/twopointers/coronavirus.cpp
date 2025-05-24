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
	    //infected onlu if distance between them is atleast 2
	    sort(a,a+n);
	    int ana=n, anb=0;
	    int temp=1;
	    for(int i=0;i<n-1;i++){
	        if(a[i+1]-a[i]<=2) temp++;
	        else{
	            ana=min(ana,temp);
	            anb=max(anb,temp);
	            temp=1;
	        }
	    }
	    ana=min(ana,temp);
	    anb=max(anb,temp);
	    cout<<ana<<" "<<anb<<endl;
	}
    return 0;
}
