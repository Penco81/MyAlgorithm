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

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int sizeA = getSize(headA);
        int sizeB = getSize(headB);
        int inter = abs(sizeA - sizeB);
        if(sizeA > sizeB)
        {
            while(inter > 0)
            {
                headA = headA->next;
                inter--;
            }
        }
        else
        {
            while(inter > 0)
            {
                headB = headB->next;
                inter--;
            }
        }
        while(headA && headB)
        {
            if(headA == headB)
                return headA;
            headA = headA->next;
            headB = headB->next;
        }
        return nullptr;
    }

    int getSize(ListNode *head)
    {
        int cnt = 0;
        while(head)
        {
            head = head->next;
            cnt++;
        }
        return cnt;
    }
};