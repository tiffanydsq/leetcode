/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
    stack<TreeNode *> lefts;
public:
    BSTIterator(TreeNode *root) {
        while(root){
            lefts.push(root);
            root=root->left;
        }
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !lefts.empty();
    }
    
    /** @return the next smallest number */
    int next() {
        TreeNode* sml=lefts.top();
        int res=sml->val;
        lefts.pop();
        sml=sml->right;
        while(sml){
            lefts.push(sml);
            sml=sml->left;
        }
        return res;
    }
};

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */