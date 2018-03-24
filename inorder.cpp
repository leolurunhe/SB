/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        stack<TreeNode*> mystack;
        TreeNode* temp=root;
        while(!mystack.empty() || temp!=nullptr){
            while(temp!=nullptr){
                mystack.push(temp); 
                temp=temp->left;
            }
            temp=mystack.top()->right;
            result.push_back(mystack.top()->val);
            mystack.pop();
        }
        return result;
    }
};
