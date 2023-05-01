#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
 int val;
 TreeNode *left;
      TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
    void solve(TreeNode* root, vector<int> &ans, int level)
    {
        // base case
        if (root == NULL)
        {
            return ; 
        }

        // we entered a new level 
        if (level == ans.size())
        {
            ans.push_back(root -> val) ; 
        }

        solve(root -> right, ans, level + 1) ; 
        solve(root -> left, ans, level + 1 ) ; 
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans ; 
        int level = 0 ; 

        solve(root, ans, level) ;
        
        return ans ; 
    }
};
int main() {
	
	TreeNode *root=new TreeNode(10);
	root->left=new TreeNode(20);
	root->right=new TreeNode(30);
	root->left->left=new TreeNode(40);
	root->left->right=new TreeNode(50);
	root->right->left=new TreeNode(60);
	root->right->right=new TreeNode(70);
}
