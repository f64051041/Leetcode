#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0)
            return false;
        while(n != 1){
            if(n % 2 == 0){
                n /= 2; 
            }
            else{
                return false;
            }
        }
        return true;
    }
};

int main(){
    Solution A;
    cout << A.isPowerOfTwo(16) << endl;
    return 0;
}