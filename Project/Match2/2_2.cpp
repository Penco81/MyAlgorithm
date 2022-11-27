//
// Created by 彭科 on 2022/11/27.
//
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    int appendCharacters(string s, string t) {
        int ans = 0;
        int i = 0;
        int j = 0;
        for(; i < t.size(); i++)
        {
            int charT = t[i] - 'a';
            bool flag = false;
            for(; j < s.size(); j++)
            {
                int charS = s[j] - 'a';
                if(charT == charS)
                {
                    j++;
                    flag = true;
                    break;
                }
            }
            if(!flag)
                break;
        }

        ans = t.size() - i;
        return ans;
    }
};