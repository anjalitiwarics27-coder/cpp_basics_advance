#include<iostream>
#include<string>
using namespace std;
class Node{ // user defined data type
public:    
    int val;
    Node * next;
    Node (int val ){
        this->val= val;
    }
};
int main(){
    Node a(7); //head 
    Node b(0);
    Node c(1);
    Node d(8);
    Node e (2);
    //attaching nodes 
    a.next = & b;
    b.next=&c;
    c.next = &d;
    d.next = &e;
    cout<<((a.next))->val<<endl;
    cout<<(b.next)->val<<endl;
    cout<<(c.val)<<endl;
    // int  x =10;
    // int * ptr = & x;
    // cout<<*ptr<<endl;
}
 