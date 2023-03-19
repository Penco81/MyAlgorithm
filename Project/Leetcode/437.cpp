//
// Created by 彭科 on 2023/3/7.
//
#include<cstdio>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<stack>
#include<algorithm>
#include<set>
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
    int sum = 0;
    int pathSum(TreeNode* root, int targetSum) {
        if(!root)
            return 0;
        return search(root, targetSum) + pathSum(root->left, targetSum) + pathSum(root->right, targetSum);
    }

    int search(TreeNode* root, long targetSum)
    {
        if(!root)
            return 0;
        int res = 0;
        if(root->val == targetSum)
            res++;
        res += search(root->left, targetSum - root->val);
        res += search(root->right, targetSum - root->val);
        return res;
    }
};