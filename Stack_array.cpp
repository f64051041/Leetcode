#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

class MyStack {
public:
    vector<int> s_array;
    int head = -1;
    MyStack() {
        
    }
    
    void push(int x) {
        s_array.push_back(x);
        head++;
    }
    
    int pop() {
        head--;
    }
    
    int top() {
        return s_array[head];
    }
    
    bool empty() {
        if(head == -1){
            return true;
        }
        else{
            return false;
        }

    }
};
int main(){
    vector<int> nums = {-1,0,3,5,9,12};
    int target = 9;
    MyStack A;
    //A.MyStack();
    A.push(1);
    A.push(2);
    cout << A.top() << endl;
    A.pop();
    cout << A.empty() << endl;
    cout << A.top() << endl;
    return 0;
}