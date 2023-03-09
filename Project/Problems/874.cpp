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
    //上，左，下，右
    int dir[4][2] = {
            {0, 1},
            {-1, 0},
            {0, -1},
            {1, 0},
    };
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        int curX = 0;
        int curY = 0;
        int curDir = 0;
        int res = 0;
        map<pair<int, int>, bool> ob;
        for(int i = 0; i < obstacles.size(); i++)
        {
            ob[make_pair(obstacles[i][0], obstacles[i][1])] = true;
        }

        for(int i = 0; i < commands.size(); i++)
        {
            if(commands[i] == -2)
            {
                curDir = (curDir + 1) % 4;
            }
            else if(commands[i] == -1)
            {
                curDir = (curDir - 1 + 4) % 4;
            }
            else
            {
                for(int j = 1; j <= 9 && j <= commands[i]; j++)
                {
                    curX += dir[curDir][0];
                    curY += dir[curDir][1];
                    if(ob[make_pair(curX, curY)])
                    {
                        curX -= dir[curDir][0];
                        curY -= dir[curDir][1];
                        break;
                    }
                }
                res = max(res, curX * curX + curY * curY);
            }
        }

        return res;
    }
};