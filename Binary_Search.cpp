#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int head = 0, tail = nums.size() - 1, mid;
        while(head < tail){
            mid = (head + tail) / 2;
            if(target == nums[mid]){
                return mid;
            }
            else if(target > nums[mid]){
                head = mid + 1;
            }
            else{
                tail = mid - 1;
            }
        }
        return -1;
    }
};

int main(){
    vector<int> nums = {-1,0,3,5,9,12};
    int target = 9;
    Solution A;
    cout << A.search(nums, target) << endl;
    return 0;
}