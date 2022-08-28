#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
// }
struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(NULL){};
};

class MyStack {
public:
    ListNode* head = new ListNode(0);
    ListNode* curr = head;  
    MyStack() {
        
    }
    void push(int x) {
        curr -> next = new ListNode(x);     
        curr = curr -> next;    
    }
    
    void pop() {
        ListNode* temp = head;
        while(temp -> next){
            if(temp -> next == curr){
                temp -> next = NULL;
                curr = temp;
            }
            else{
                temp = temp -> next;
            }
        }
    }
    
    int top() {
        if(head == curr){
            return -1;
        }
        return curr -> val; 
    }
    
    bool empty() {
        if(head == curr){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
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