class Solution {
public:
int preIndex=0;

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder,int is,int ie)
{
    if(is>ie)
    return NULL;
    TreeNode* root= new TreeNode(preorder[preIndex]);
    preIndex++;

    int inIndex;
    for(int i=is;i<=ie;i++)
    {
        if(inorder[i]==root->val)
       { inIndex=i;
        break;
       }
    }
   root->left= buildTree(preorder,inorder,is,inIndex-1);
   root->right= buildTree(preorder,inorder,inIndex+1,ie);
   return root;
    
}

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode* ans=buildTree(preorder,inorder,0,inorder.size()-1);
        return ans;
       
        
    }
};
