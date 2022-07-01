class Solution {
public:
    void recursion(int i,vector<int> A, vector<vector<int>> &ans){
        if(i>=A.size()){
            ans.push_back(A);
            return;
        }
        for(int j=i;j<A.size();j++){
           swap(A[i],A[j]);
            recursion(i+1,A,ans);
            swap(A[i],A[j]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& A) {
        vector<vector<int>> ans;

        recursion(0,A,ans);
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(),ans.end()),ans.end());
        return ans;
    }
};