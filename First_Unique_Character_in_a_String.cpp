#include<iostream>
#include<stdio.h>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> table;
        for(int i = 0; i < s.size(); i++){
            if(table.find(s[i]) == table.end()){
                table[s[i]] = 1;
            }
            else{
                table[s[i]]++; 
            }
        }
        for(int i = 0; i < s.size(); i++){
            if(table[s[i]] == 1)
                return i;
        }
        return -1;
    }
};

int main(){
    string s = "leetcode"; 
    Solution A;
    cout <<  A.firstUniqChar(s) << endl;
    return 0;
}