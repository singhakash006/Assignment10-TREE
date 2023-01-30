/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
 class Solution {
public:
 vector<int> inorderTraversal(TreeNode* root) {
    vector<int>ans;
     TreeNode* temp=root;
    stack<TreeNode*>s;
     if(root==NULL){
            return ans;
        }
        while(temp!=NULL || !s.empty()){
             while(temp!=NULL){
                 s.push(temp);
                 temp=temp->left;
             }
             ans.push_back(s.top()->val);
             temp=s.top()->right;
             
             s.pop();}
        return ans;
      
        
    }
};
