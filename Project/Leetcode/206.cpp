//
// Created by 彭科 on 2023/3/5.
//
#include<cstdio>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<stack>
#include<algorithm>
using namespace  std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curTail = nullptr;
        ListNode* next = head;
        while(next)
        {
            ListNode* temp = next->next;
            next->next = curTail;
            curTail = next;
            next = temp;
        }
        return curTail;
    }
};