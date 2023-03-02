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

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //从后面开始，从前面开始会造成覆盖/需要偏移的情况
        int ptrM = m - 1;
        int ptrN = n - 1;
        int ptrAll = nums1.size() - 1;
        while(ptrM >= 0 && ptrN >= 0)
        {
            if(nums1[ptrM] > nums2[ptrN])
            {
                nums1[ptrAll] = nums1[ptrM];
                ptrM--;
            }
            else
            {
                nums1[ptrAll] = nums2[ptrN];
                ptrN--;
            }
            ptrAll--;
        }
        while(ptrM >= 0)
        {
            nums1[ptrAll] = nums1[ptrM];
            ptrM--;
            ptrAll--;
        }

        while(ptrN >= 0)
        {
            nums1[ptrAll] = nums2[ptrN];
            ptrN--;
            ptrAll--;
        }
    }
};