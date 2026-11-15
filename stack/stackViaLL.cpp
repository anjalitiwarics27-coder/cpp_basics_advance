#include<iostream>
using namespace std;
class MyStack{
public:    
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        next = NULL;
    }
};
class MyStack{ // user defined data structure 
public:
    Node* head;
    Node* tail;
    int length;
    MyStack(){
        head = tail = NULL;
        length = 0;
    }
};
int main(){
    stack<int>
}