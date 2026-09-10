#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s = "Mohit Kumar Anand";
    int n = s.length();
    int count = 0;
    for(int i=0;i<n;i++){
        char ch = s[i];
        if(ch>=65 and ch <=90) ch+=32;
        if(ch=='a') count++;
        else if(ch=='e') count++;
        else if (ch=='i') count++;
        else if (ch=='o') count++;
        else if (ch=='u') count++;
    }
    cout<<count<<endl;
}