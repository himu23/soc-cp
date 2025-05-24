// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main() {
//     cin.tie(0)->sync_with_stdio(false);
//     int k; k=1;
//     cin>>k;
//     while(k--){
//         int n,h; cin>>n>>h;
//         int a[n];
//         int gra=0;
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//             gra=max(gra,a[i]);
//         }
//         vector<int> ans;
//         for(int i=gra;i>=1;i--){
//             int temp=0;
//             for(int j=0;j<n;j++){
//                 temp+=(a[j]+i-1)/i;
//             }
//             ans.push_back(temp);
//         }
//         int it=upper_bound(ans.begin(),ans.end(),h)-ans.begin();
//         cout<<gra-it+1<<endl;
//     }
//     return 0;
// }

// the above solution is valid but it gives tle for the original constriants
//in above we were calculating everything then binary search
//now we will *only* calculate at the binary search locations

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool canComplete(const vector<int>& a,int h, int speed){
    int total=0;
    for(int i=0;i<a.size();i++){
        total+=(a[i]+speed-1)/speed;
        if(total>h) return false; //early exit
    }
    return total <= h;
}

int main() {
    cin.tie(0)->sync_with_stdio(false);
    int k; k=1;
    cin>>k;
    while(k--){
        int n,h; cin>>n>>h;
        vector<int> a(n);
        int gra=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            gra=max(gra,a[i]);
        }
        int l=1,r=gra,ans=gra;
        while(l<=r){
            int m=(l+r)/2;
            if(canComplete(a,h,m)){
                ans=m;
                r=m-1;
            }
            else l=m+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}