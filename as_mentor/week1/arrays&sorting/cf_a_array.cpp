#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    cin.tie(0)->sync_with_stdio(false);
    int k; k=1;
    //cin>>k;
    while(k--){
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        vector<int> p,q,r;
        if(a[n-1]>0){
            p.push_back(a[0]);
            q.push_back(a[n-1]);
            for(int i=1;i<n-1;i++){
                r.push_back(a[i]);
            }
            cout<<1<<" "<<a[0]<<endl;
            cout<<1<<" "<<a[n-1]<<endl;
            cout<<r.size()<<" ";
            for(int i=0;i<r.size();i++) cout<<r[i]<<" ";
            cout<<endl;
        }
        else{
            q.push_back(a[0]);
            q.push_back(a[1]);
            p.push_back(a[2]);
            for(int i=3;i<n;i++) r.push_back(a[i]);
            cout<<1<<" "<<a[2]<<endl;
            cout<<2<<" "<<a[0]<<" "<<a[1]<<endl;
            cout<<r.size()<<" ";
            for(int i=0;i<r.size();i++) cout<<r[i]<<" ";
            cout<<endl;
        }
    }

    return 0;
}