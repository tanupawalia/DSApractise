class Solution {
public:
    void permute(vector<int>&A,vector<vector<int>>&ans,int cid){
        if(cid==A.size()){
            ans.push_back(A);
            return;
        }
        for(int j=cid;j<A.size();j++){
            swap(A[cid],A[j]);
            permute(A,ans,cid+1);
            swap(A[cid],A[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& A) {
        vector<vector<int>> ans;

        permute(A,ans,0);
        return ans;
    }
};