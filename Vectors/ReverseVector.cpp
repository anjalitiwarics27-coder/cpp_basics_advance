#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={4,3,8,2,9};
    cout<<"Reverse number "<<endl;
    for(int i=v.size()-1;i>=0;i--){
        cout<<v[i]<<" ";
    }
}