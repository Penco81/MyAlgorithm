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
class BubbleSort {
public:
    void Sort(vector<int>& arrays)
    {
        int len = arrays.size();
        for(int i = 0; i < len - 1; i++)
        {
            bool flag = false;
            for(int j = 0; j < len - i - 1; j++)
            {
                if(arrays[j + 1] < arrays[j])
                {
                    flag = true;
                    swap(arrays[j + 1], arrays[j]);
                }
            }

            //如果本次遍历没有进行交换，说明已经有序，无须再遍历
            if(!flag)
                break;
        }
    }
};

