#include<iostream>
using namespace std;
class Student{
public: 
      string name;
      int rno;
      float cgpa;
};
int main(){
    Student x;
    x.name="Sumit";
    x.rno=39;
    x.cgpa=8.7;

    Student y;
    y.name = "Manish";
    y.rno = 1049;
    y.cgpa=9.75;

    Student z ;
    z.name = "Ikram ";
    z.rno=42;
    z.cgpa = 8.1;
    
    cout<<x.name<<" "<<x.rno<<" "<<x.cgpa<< endl;
    cout<<y.name<<" "<<y.rno<<" "<<y.cgpa<< endl;
    cout<<z.name<<" "<<z.rno<<" "<<z.cgpa<< endl;

}