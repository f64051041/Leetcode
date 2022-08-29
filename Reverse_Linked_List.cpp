#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

struct Listnode{
    int val;
    Listnode* next;
    Listnode(int x): val(x), next(NULL){} 
};

class Solution {
public:
    Listnode* reverseList(Listnode* head) {
        Listnode* curr = NULL;
        
        while(head){
            Listnode* temp =  new Listnode(head -> val);
            temp -> next = curr;
            curr = temp;
            head = head -> next;  
        }
        return curr;

    }
};

int main(){
    Listnode* head = new Listnode(1);
    Listnode* curr = head;
    Listnode* ans;
    Listnode* head1 = head;
    curr -> next = new Listnode(2);
    curr = curr -> next;
    curr -> next = new Listnode(3);
    curr = curr -> next;
    curr -> next = new Listnode(4);
    curr = curr -> next;
    curr -> next = new Listnode(5);
    curr = curr -> next;

    //Input
    cout << "Input: " ;
    while(head1){
        cout << head1 -> val << " ";
        head1 = head1 -> next;
    }
    cout << endl;

    Solution A;
    ans = A.reverseList(head);

    //Output
    cout << "Output: " ;
    while(ans){
        cout << ans -> val << " ";
        ans = ans -> next;
    }
    // cout << ans -> val << " ";
    // cout << ans -> next -> val << " ";
    // cout << ans -> next-> next -> val << " ";
    // cout << ans -> next-> next-> next -> val << " ";
    // cout << ans -> next-> next-> next-> next -> val << " ";

    cout << endl;

    return 0;
}