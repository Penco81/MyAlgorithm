//
// Created by 彭科 on 2023/3/9.
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
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        for(int i = 0; i < k; i++)
        {
            opOnce(grid);
        }
        return grid;
    }

    void opOnce(vector<vector<int>>& grid)
    {
        int row = grid.size();
        int col = grid[0].size();
        vector<int> tempCol(row);

        for(int i = 0; i < row; i++)
        {
            tempCol[i] = grid[i][col - 1];
        }
        int temp = tempCol[row - 1];
        for(int i = row - 1; i > 0; i--)
        {
            tempCol[i] = tempCol[i - 1];
        }
        tempCol[0] = temp;

        for(int i = 0; i < row; i++)
        {
            for(int j = col - 1; j > 0; j--)
            {
                grid[i][j] = grid[i][j - 1];
            }
        }

        for(int i = 0; i < row; i++)
        {
            grid[i][0] = tempCol[i];
        }
    }
};