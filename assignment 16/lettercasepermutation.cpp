class Solution {
public:
    vector<string> letterCasePermutation(string S) {
        for (int i = 0; i < S.size(); i++)
        S[i] = tolower(S[i]);
        vector<string> ans;
        func(S, ans, 0, S.size());
        return ans;
    }
    void func(string S, vector<string> &ans, int i, int n) {
        if (i < n) {
           func(S, ans, i+1, n);
            if (isalpha(S[i])) {
                S[i] = toupper(S[i]);
               func(S, ans, i+1, n);
            }
        } else ans.push_back(S);
    }
};