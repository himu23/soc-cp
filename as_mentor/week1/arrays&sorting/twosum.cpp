class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};

/*
//using unordered_map
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> noms;
        for(int i=0;i<nums.size();i++){
            int comp=target-nums[i];
            if(noms.count(comp)){
                return {noms[comp],i};
            }
            noms[nums[i]]=i;
        }
        return {};
        
    }
};

*/