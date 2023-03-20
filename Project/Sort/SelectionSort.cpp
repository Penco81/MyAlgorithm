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
//是否稳定 不稳定 因为可能需要跨越很长部分交换元素,会把元素交换到尾部 比如 5 8 5 7 11 2，5 与 2交换
//插入，选择最大的或最小的插入已排序的队尾
class SelectionSort {
public:
    void Sort(vector<int>& arrays)
    {
        int len = arrays.size();
        //只需要len-1次，最后一个肯定是最大的
        for(int i = 0; i < len - 1; i++)
        {
            //选择最小的
            int minPos = i;
            for(int j = i + 1; j < len; j++)
            {
                if(arrays[minPos] > arrays[j])
                {
                    minPos = j;
                }
            }
            swap(arrays[i], arrays[minPos]);
        }
    }
};