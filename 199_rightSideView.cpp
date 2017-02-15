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
    vector<int> rightSideView(TreeNode* root) {
        if(!root) return vector<int>(0);
        queue<TreeNode*> plist;
        queue<TreeNode*> clist;
        TreeNode *p;
        vector<int> res;
        plist.push(root);
        bool isRight=true;
        while(!plist.empty()){
            p=plist.front();
            plist.pop();
            if(isRight) res.push_back(p->val);
            isRight=false;
            if(p->right) clist.push(p->right);
            if(p->left) clist.push(p->left);
            if(plist.empty()&&!clist.empty()) {
                plist=clist;
                while (!clist.empty()) clist.pop();
                isRight=true;
            }
        }
        return res;
    }
};