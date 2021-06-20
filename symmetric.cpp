// I have used BFS here to check if the treee is symmetric by pushing 2 nodes in the queue at the same time
//Time complexity =O(n)
//space complexity = On(n) space used to store n nodes.
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        
        TreeNode* node=root;
        
        queue<TreeNode*> q;
        q.push(node);
        q.push(node);
        
        while(!q.empty())
        {
            TreeNode* n1=q.front();
            q.pop();
            TreeNode* n2=q.front();  
            q.pop();
            
            if(n1==nullptr and n2==nullptr)
                continue;
            if(n1==nullptr or n2==nullptr)
                return false;
            if(n1->val!=n2->val)
                return false;
            q.push(n1->left);
            q.push(n2->right);
            q.push(n1->right);
            q.push(n2->left);
            
        
        }
        return true;
    }
};
