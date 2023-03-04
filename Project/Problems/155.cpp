//
// Created by 彭科 on 2023/3/4.
//
#include<cstdio>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<stack>
#include<algorithm>
using namespace  std;

class MinStack {
public:
    stack<int> s;
    stack<int> minS;
    MinStack() {

    }

    void push(int val) {
        s.push(val);
        if(minS.empty())
        {
            minS.push(val);
        }
        else
        {
            int top = minS.top();
            if(top >= val)
            {
                minS.push(val);
            }
        }
    }

    void pop() {
        int val = s.top();
        s.pop();
        if(val == minS.top())
        {
            minS.pop();
        }
    }

    int top() {
        return s.top();
    }

    int getMin() {
        return minS.top();
    }
};