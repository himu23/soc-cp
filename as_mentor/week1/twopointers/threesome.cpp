class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //return all
        int n=nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int l=i+1, r=n-1;
            while(l<r){
                int temp=nums[i]+nums[l]+nums[r];
                if(temp >0) r--;
                else if(temp <0) l++;
                else{
                    ans.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    while(nums[l]==nums[l-1] && l<r) l++;
                }
            }
        }
        return ans;
    }
};