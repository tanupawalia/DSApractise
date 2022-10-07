int height(Node* root) {
        if(!root){
            return 1;
        }
        queue<Node*>Q;
        Q.push(root);
        int level=0;
        while(!Q.empty()){
            int size=Q.size();
            while(size--){
                 Node*temp=Q.front();
          // cout<<temp->data<<" ";

           if(temp->left){
               Q.push(temp->left);
            }
            if(temp->right){
                Q.push(temp->right);
            }
            Q.pop(); 
        }
        level++;
        } 

    return level-1;
    }

};
