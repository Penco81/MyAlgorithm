//
// Created by 彭科 on 2023/3/2.
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
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return check(root->left, root->right);
    }

    bool check(TreeNode* left, TreeNode* right)
    {
        if(!left && !right)
            return true;
        if(!left || !right)
            return false;
        return left->val == right->val && (check(left->left, right->right) && check(left->right, right->left));
    }
};