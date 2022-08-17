#include<iostream>
#include<stdio.h>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> code = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        map<string, int> table;
        for(int i = 0; i < words.size(); i++){
            string temp;
            for(int j = 0; j < words[i].size(); j++){
                temp.append(code[int(words[i][j]) - 97]);
            }
            table[temp] = 0;
        }
        
        return table.size();
    }
};

int main(){
    vector<string> words = {"gin","zen","gig","msg"};
    Solution A;
    int ans;
    ans = A.uniqueMorseRepresentations(words);
    cout << ans << endl;
    return 0;
}