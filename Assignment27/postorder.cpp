class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
     if (!root)
      return {};

    vector<int> res;
    stack<TreeNode*> stack{{root}};

    while (!stack.empty()) {
      root = stack.top(), stack.pop();
      res.push_back(root->val);
        
      if (root->left)
        stack.push(root->left);
        
      if (root->right)
        stack.push(root->right);
    }

    reverse(begin(res), end(res));
    return res;  
    }
};
