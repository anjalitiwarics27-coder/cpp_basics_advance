#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(5);
    v.push_back(9);
    v.push_back(0);
    v.push_back(2);
    v.push_back(8);
    v.pop_back();
    v.pop_back();
    v.push_back(1);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}
// capacity will not dec if one time it inc .