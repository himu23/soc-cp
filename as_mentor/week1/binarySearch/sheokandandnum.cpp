#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    cin.tie(0)->sync_with_stdio(false);
    int k; k=1;
    //first we will generate all posible values of 2^x+2^y seeing the constraints
    cin>>k;
    set<int> s; //set is used to avoid repetitions
    for (int i = 0; i < 32; ++i) {
        for (int j = 0; j < 32; ++j) {
            if(i!=j){
                s.insert((1 << i) + (1 << j));
            }
        }
    }
    vector<int> good(s.begin(), s.end()); //convert s to sorted vector
    while(k--){
        int n; cin>>n;
        int lb=lower_bound(good.begin(), good.end(), n)- good.begin();
        int ans = INT_MAX;
        if(lb<good.size()) ans=min(ans,abs(good[lb]-n));
        if (lb > 0) ans = min(ans, abs(good[lb - 1] - n));
        cout<<ans<<endl;
    }
    return 0;
}