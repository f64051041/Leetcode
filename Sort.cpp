#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

class Sort {
public:
    vector<int> Bubble_Sort(vector<int>& nums) {
        int temp;
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if(nums[i] < nums[j]){
                    temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
        return nums;
    }

    vector<int> Selection_Sort(vector<int>& nums) {
        int min, temp, index;
        for(int i = 0; i < nums.size(); i++){
            min = nums[i];
            index = i;
            for(int j = i; j < nums.size(); j++){
                if(min > nums[j]){
                    min = nums[j];
                    index = j;
                }
            }
            nums[index] = nums[i];
            nums[i] = min;
             
        }
        return nums;
    }

    void Quick_Sort(vector<int>& nums, int left, int right) {
        int i = left + 1, j = right, key = nums[left], temp; 

        if(i >= j)
           return ;
        
        while(i < j){
            while(nums[i] < key && i <= right){
                i++;
            }        
            
            while(nums[j] > key && left + 1 <= j){
                j--;
            }   
            
            if(i < j){
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }    
            // break;
        }

        nums[left] = nums[j];
        nums[j] = key;
        
        cout << "!:" << left << " " << right << endl; 
        for(i = 0; i < nums.size(); i++){
            cout << nums[i] << " ";
        }
        cout << endl;
        Quick_Sort(nums, left, j - 1);
        Quick_Sort(nums, j + 1, right);
        

        // return ;
    }

};

int main(){
    vector<int> nums = {2,1,-1,0,6,3,5,9,8,4,7};
    int i;
    // Input:
    cout << "Input: ";
    for(i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << endl;



    Sort A;
    //nums = A.Bubble_Sort(nums);
    //nums = A.Selection_Sort(nums);
    //A.Quick_Sort(nums, 0, nums.size() - 1);

    // Output:
    cout << "Output: ";
    for(i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}