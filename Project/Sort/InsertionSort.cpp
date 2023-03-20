//
// Created by 彭科 on 2023/3/20.
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

//空间复杂度 O(1)
//时间复杂度 O(n2)
//是否稳定 是
//插入，当前未排序的元素，插入已排序的部分
class InsertionSort {
public:
    void Sort(vector<int>& arrays)
    {
        int len = arrays.size();
        for(int i = 1; i < len; i++)
        {
            //保存当前的值
            int temp = arrays[i];
            int j = i - 1;
            //找出值比temp小的元素的位置
            //值比temp小的说明在temp的后面，需要移动位置
            for(; j >= 0 && arrays[j] > temp; j--)
            {
                arrays[j + 1] = arrays[j];
            }
            arrays[j + 1] = temp;
        }
    }
};