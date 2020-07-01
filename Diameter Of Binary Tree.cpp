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
    int max(int a,int b) {
       return (a>b)?a:b;
    }
    int height(TreeNode* root, int& ans) 
{ 
    if (root == NULL) 
        return 0; 
  
    int left_height = height(root->left, ans); 
  
    int right_height = height(root->right, ans); 
    ans = max(ans, 1 + left_height + right_height); 
  
    return 1 + max(left_height, right_height); 
} 
 
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) {
            return 0;
        }
        // int hl=height(root->left);
        // int hr=height(root->right);
        // int dl=diameterOfBinaryTree(root->left);
        // int dr=diameterOfBinaryTree(root->right);
        // return max(hl+hr+1,max(dl,dr));
        int ans = INT_MIN;  
        int height_of_tree = height(root, ans); 
        return ans-1;
    }
};
