//
// Created by 彭科 on 2023/2/27.
//
#include<cstdio>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<stack>
#include<algorithm>
using namespace  std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };


class Solution {
public:
    TreeNode* minNode;
    void inorder(TreeNode* root)
    {
        if(root == nullptr)
            return;
        inorder(root->left);
        minNode->right = root;
        root->left = nullptr;
        minNode = root;
        inorder(root->right);
    }

    TreeNode* convertBiNode(TreeNode* root) {
        TreeNode* ans = new TreeNode(-1);
        minNode = ans;
        inorder(root);
        return ans->right;
    }
};
