class Solution {
public:
    void recursion(int j, vector<int> nums, vector<vector<int>> &ans){
        if(j>=nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=j;i<nums.size();i++){
            swap(nums[j],nums[i]);
            recursion(j+1,nums,ans);
            swap(nums[j],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index=0;
        recursion(index,nums,ans);
        return ans;
    }
};