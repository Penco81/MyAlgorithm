//
// Created by 彭科 on 2023/3/10.
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

class Solution {
public:
    vector<int> findSquare(vector<vector<int>>& matrix) {
        vector<int> res;
        int len = matrix.size();
        int maxSize = -1;
        int r = -1;
        int c = -1;
        for(int i = 0; i < len; i++)
        {
            for(int j = 0; j < len; j++)
            {
                if(matrix[i][j] == 0)
                {
                    int size = dfs(i, j, matrix, len);
                    if(maxSize < size)
                    {
                        maxSize = size;
                        r = i;
                        c = j;
                    }
                }
            }
        }
        if(maxSize > 0)
        {
            res.push_back(r);
            res.push_back(c);
            res.push_back(maxSize);
        }
        return res;
    }

    int dfs(int x, int y, vector<vector<int>>& matrix, int len)
    {
        int size = -1;
        for(int i = 0;;i++)
        {
            int newX = i + x;
            int newY = i + y;
            if(newX >= len || newY >= len)
            {
                break;
            }
            bool flag = true;
            for(int j = x; j <= newX; j++)
            {
                if(matrix[j][newY] == 1 || matrix[j][y])
                    flag = false;
            }
            for(int j = y; j <= newY; j++)
            {
                if(matrix[newX][j] == 1 || matrix[x][j])
                    flag = false;
            }
            if(flag)
                size = i + 1;
        }
        return size;
    }
};