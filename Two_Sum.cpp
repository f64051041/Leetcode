#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i = 0; i < nums.size() - 1; i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    ans = {i , j};
                    break;
                }
            }
        }
        return ans;
    }
};

int main(){
    vector<int> nums = {2,7,11,15}, ans;
    int target = 9;
    Solution A;
    ans = A.twoSum(nums, target);
    cout << ans[0] << " " << ans[1];
    return 0;
}