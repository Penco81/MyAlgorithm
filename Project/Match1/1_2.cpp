//
// Created by 彭科 on 2022/11/26.
//
#include<vector>
using namespace  std;

class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> onesRow = vector<int>(m);
        vector<int> onesCol = vector<int>(n);
        vector<int> zerosRow = vector<int>(m);
        vector<int> zerosCol = vector<int>(n);
        vector<vector<int>> res = vector<vector<int>>(m, vector<int>(n));

        for(int i = 0; i < m; i++)
        {
            int zeroCnt = 0;
            int oneCnt = 0;
            for(int j = 0; j < n; j++)
            {
                if(grid[i][j] == 0)
                {
                    zeroCnt++;
                }
                else if(grid[i][j] == 1)
                {
                    oneCnt++;
                }
            }
            onesRow[i] = oneCnt;
            zerosRow[i] = zeroCnt;
        }

        for(int i = 0; i < n; i++)
        {
            int zeroCnt = 0;
            int oneCnt = 0;
            for(int j = 0; j < m; j++)
            {
                if(grid[j][i] == 0)
                {
                    zeroCnt++;
                }
                else if(grid[j][i] == 1)
                {
                    oneCnt++;
                }
            }
            onesCol[i] = oneCnt;
            zerosCol[i] = zeroCnt;
        }

        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                res[i][j] = onesRow[i] + onesCol[j] - zerosRow[i] - zerosCol[j];
            }
        }

        return res;
    }
};