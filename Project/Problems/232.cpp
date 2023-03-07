//
// Created by 彭科 on 2023/3/6.
//
#include<cstdio>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<stack>
#include<algorithm>
using namespace  std;

class MyQueue {
public:
    stack<int> inS;
    stack<int> outS;

    MyQueue() {

    }

    void push(int x) {
        inS.push(x);
    }

    int pop() {
        full();
        int temp = outS.top();
        outS.pop();
        return temp;
    }

    int peek() {
        full();
        return outS.top();
    }

    bool empty() {
        return inS.empty() && outS.empty();
    }

    void full()
    {
        if(outS.empty() && !inS.empty())
        {
            while(!inS.empty())
            {
                outS.push(inS.top());
                inS.pop();
            }
        }
    }
};
