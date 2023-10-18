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
void stor(TreeNode* root,vector<int> &v)
{
    if(root==NULL)
    return;

    stor(root->left, v);
    v.push_back(root->val);
     stor(root->right, v);


}
    bool findTarget(TreeNode* root, int k) {
        vector<int>v;
        stor(root,v);

          int s=0;
          int n=v.size();
          int e=n-1;
          while(s<e)
          {
              
              int sum=v[s]+v[e];
              if(sum>k)
              e--;
              else if(sum==k)
              return true;
              else
              s++;


          }

            return false;

        
    }
};
