//
// Created by 彭科 on 2022/11/27.
//
#include<vector>
#include<string>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        ListNode* start = head;
        while(start != nullptr and start->next != nullptr)
        {
            if(start->val < start->next->val)
            {
                ListNode* newPre = nullptr;
                ListNode* newStart = head;
                while(newStart != nullptr && newStart != start->next)
                {
                    if(newStart->val < start->next->val)
                    {
                        if(newPre == nullptr)
                        {
                            head = start->next;
                        }
                        else
                        {
                            newPre->next = start->next;
                        }
                        start = start->next;
                        break;
                    }
                    else
                    {
                        newPre = newStart;
                        newStart = newStart->next;
                    }
                }
            }
            else
            {
                start = start->next;
            }
        }
        return head;
    }
};