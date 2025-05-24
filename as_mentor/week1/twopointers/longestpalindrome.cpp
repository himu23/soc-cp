// lambda function
/*

[capture](parameters) -> return_type {
    // function body
};

auto add = [](int a, int b) -> int {
    return a + b;
};
cout << add(3, 4); // Output: 7

//we will learn more on this in oop
*/

class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length()<=1) return s;
        auto solve=[&](int l, int r){
            while(l>=0 && r<s.length() && s[l]==s[r]){
                l--;
                r++;
            }
            return s.substr(l+1,r-l-1);
        };
        string ans=s.substr(0,1);
        for(int i=0;i<s.length()-1;i++){
            string odd = solve(i,i);
            string even=solve(i,i+1);
            if(odd.length()>ans.length()) ans=odd;
            if(even.length()>ans.length()) ans=even;
        }
        return ans;
    }
};