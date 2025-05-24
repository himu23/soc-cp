#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    cin.tie(0)->sync_with_stdio(false);
    int k; k=1;
    //cin>>k;
    while(k--){
        int n,m; cin>>n>>m;
        int a[n],b[m];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<m;i++){
            cin>>b[i];
            int c=b[i];
            int l=0,r=n-1;
            bool flag=false;
            while(l<=r){
                int md=(l+r)/2;
                if(a[md]== c){
                    flag=true;
                    break;
                }
                else if(c<a[md]){
                    r=md-1;
                }
                else{
                    l=md+1;
                }
            }
            if(flag){
                cout<<"0"<<endl;
            }
            else{
                if(r==-1){
                    if(n%2==1) cout<<"NEGATIVE"<<endl;
                    else cout<<"POSITIVE"<<endl;
                }
                else if(l==n) cout<<"POSITIVE"<<endl;
                else{
                    if((n-r-1)%2==1) cout<<"NEGATIVE"<<endl;
                    else cout<<"POSITIVE"<<endl;
                }
            }
        }

    }
    return 0;
}