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

class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        vector<vector<int>> res(img.size(), vector<int> (img[0].size()) );
        for(int i = 0; i < img.size(); i ++)
        {
            for(int j = 0; j < img[0].size(); j ++)
            {
                int cnt = 0;
                int sum = 0;
                for(int k = -1; k <= 1; k++)
                {
                    for(int z = -1; z <= 1; z++)
                    {
                        if(i + k < img.size() && i + k >= 0 && j + z < img[0].size() && j + z >= 0)
                        {
                            cnt++;
                            sum += img[i + k][j + z];
                        }
                    }
                }

                int aver = sum / cnt;
                res[i][j] = aver;
            }
        }

        return res;
    }
};