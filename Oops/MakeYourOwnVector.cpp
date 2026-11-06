#include<iostream>
using namespace std;
class Myvector{  // User Defined Data Structure 
private:
    int lenght; // kitne elements hai vector me 
    int * arr ;
    int cap;
public:
    Myvector(int capacity , int default_value){
        cap = capacity;
        lenght = capacity;
        arr = new int [capacity];
        for(int i=0;i<capacity;i++){
            arr[i] = default_value;
        }
    }         
    int size(){
        return length;
    }
    int capacity(){
        return cap ;
    }
    void pop_back(){
        if(lenght==0){
            cout<<"Vector is Empty ! "<<endl;
            return;
        }
        lenght--;
    }
    void push_back(int val){
        if(lengh ==cap){ // arrat is Full 
            // double the capacity & copy paste 
            cap = 2*cap;
            int * temp = new int [cap];
            for(int i =0;i<length;i++){
                temp[i]=arr[i];
            }
            delete[arr];
            arr=temp;
        }
        arr[length++] = val;
    }
    int get(int idx ){
        if(idx<0||idx>=length){
            cout<<"Index out of bound " <<endl;
            return -1;
        }
        return arr[idx];
    }
    void set(int idx, int val){
        if(idx<0||idx>=length){
            cout<<"Index out of bound "<<endl;
            return ;
        }
        arr[idx] = val;
    }
};
int main(){
    Myvector v(5,-1); //vector <int>v(5,1);
    v.print();
    v.pop_back();
    v.print();
    v.push_back(10);
    v.print();
    v.push_back(20);
    v.print();
    // int b[] = {67,21,8,2};
    // int* arr = b;
    // cout<<arr[0]<<endl;
}