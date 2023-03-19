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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* newHead = new ListNode();
        newHead->next = head;

        ListNode* last = newHead;
        ListNode* cur = newHead->next;
        while(cur)
        {
            if(cur->val == val)
            {
                last->next = cur->next;
                cur = last->next;
            }
            else
            {
                last = cur;
                cur = cur->next;
            }
        }
        return newHead->next;
    }
};