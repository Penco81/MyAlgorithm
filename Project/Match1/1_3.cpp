//
// Created by 彭科 on 2022/11/26.
//
#include<string>
#include<vector>
using namespace  std;

class Solution {
public:
    int bestClosingTime(string customers) {
        int len = customers.size();
        vector<int> openCost = vector<int>(len + 1);
        vector<int> closeCost = vector<int>(len + 1);
        vector<int> res = vector<int>(len + 1);

        int temp = 0;
        for(int i = 0; i < len; i++)
        {
            if(customers[i] == 'N')
            {
                temp++;
            }
            openCost[i + 1] = temp;
        }

        temp = 0;
        for(int i = len - 1; i >= 0; i--)
        {
            if(customers[i] == 'Y')
            {
                temp++;
            }
            closeCost[i] = temp;
        }

        for(int i = 0; i < len + 1; i++)
        {
            res[i] = openCost[i] + closeCost[i];
        }

        int minCost = res[0];
        int minTime = 0;
        for(int  i = 1; i < len + 1; i++)
        {
            if(minCost > res[i])
            {
                minCost = res[i];
                minTime = i;
            }
        }

        return minTime;
    }
};