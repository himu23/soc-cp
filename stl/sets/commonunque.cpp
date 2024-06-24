//use of push_back with an initialized vector size. can causes the initial elments to be zero.
#include "bits/stdc++.h"
#define int long long
#define uint unsigned long long
#define vi vector<int>
#define pb push_back
#define sc static_cast
#define vsort(v)  sort(v.begin(),v.end())
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
using namespace std;
int32_t main() {
    int n,m;
    cin>>n>>m;
    set<int>s1;
    set<int>s2;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        s1.insert(a);
    }
    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        s2.insert(a);
    }
    set<int>s;
    vi v;
    for(auto it= s1.begin(); it!=s1.end(); ++it){
        v.pb(*it);
    }
    for(auto it= s2.begin(); it!=s2.end(); ++it){
        v.pb(*it);
    }
    vsort(v);
    int a=v[0];
    for(auto it= v.begin()+1; it!=v.end(); ++it){
        if(a==*it){
            cout<<*it<<" ";
        }
        a=*it;
    }
    return 0;
}