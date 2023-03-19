#include<cstdio>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<stack>
#include<algorithm>
#include<set>
using namespace  std;

class MergeSort {
public:
    void Sort(vector<int>& arrays)
    {
        int len = arrays.size();
        vector<int> temp(len);
        Recursion(arrays, temp, 0, len - 1);
    }

    void Recursion(vector<int>& arrays, vector<int>& temp, int s, int e)
    {
        if(s >= e)
            return;
        int mid = (s + e) / 2;
        Recursion(arrays, temp, s, mid);
        Recursion(arrays, temp, mid + 1, e);
        int cnt = 0;
        int i = s;
        int j = mid + 1;
        while(i <= mid && j <= e)
        {
            //这里的= 取决归并是否为稳定排序
            if(arrays[i] <= arrays[j])
            {
                temp[cnt++] = arrays[i];
                i++;
            }
            else
            {
                temp[cnt++] = arrays[j];
                j++;
            }
        }
        while(i <= mid)
        {
            temp[cnt++] = arrays[i];
            i++;
        }
        while(j <= e)
        {
            temp[cnt++] = arrays[j];
            j++;
        }
        for(int i = 0; i < cnt; i++)
        {
            arrays[s + i] = temp[i];
        }
    }
};

int main() {
    MergeSort ms;
    vector<int> vec = {2,3,6,7,9,11,223};
    ms.Sort(vec);
    for(int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << endl;
    }
    return 0;
}
