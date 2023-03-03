//
// Created by 彭科 on 2023/3/3.
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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return toBST(nums, 0, nums.size() - 1);
    }

    TreeNode* toBST(vector<int>& nums, int s, int e)
    {
        if(s > e)
            return nullptr;
        TreeNode* root = new TreeNode();
        int mid = (s + e) / 2;
        root->val = nums[mid];
        root->left = toBST(nums, s, mid - 1);
        root->right = toBST(nums, mid + 1, e);
        return root;
    }
};