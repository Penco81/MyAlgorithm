//
// Created by 彭科 on 2023/3/8.
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
    string tree2str(TreeNode* root) {
        string res = "";
        search(root, res);
        return res.substr(1, res.size() - 2);
    }

    void search(TreeNode* root, string& str)
    {
        if(root == nullptr)
            return;
        str += "(";
        str += to_string(root->val);
        if(root->left)
        {
            search(root->left, str);
        }
        else if(!root->left && root->right)
        {
            str += "()";
        }
        search(root->right, str);
        str += ")";
    }
};