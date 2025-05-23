#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    cin.tie(0)->sync_with_stdio(false);
    int k; k=1;
    cin>>k;
    vector<int> triangle;
    for(int i=1;i<45000;i++){
        triangle.push_back(i*(i+1)/2);
    }
    while(k--){
        int n; cin>>n;
        int l=0,r=45000;
        while(l<r){
            int m=(l+r)/2;
            if(triangle[m]<=n){
                l=m+1;
            }
            else{
                r=m;
            }
        }
        cout<<l<<endl;
    }
    return 0;
}