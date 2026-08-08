#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={4,3,8,2,9};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "<<endl;
    }
    cout<<"\n";
    cout<<"------------------------------"<<endl;
    cout<<"\n";
    for(int ele :v){
        cout<<ele<<" "<<endl;
    }
}
// its use traversal 
// we cannot change the value using for each loop