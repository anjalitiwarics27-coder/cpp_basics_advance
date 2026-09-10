#include<iostream>
#include<string>
using namespace std;

int main(){

    string s = "Arjun is the smartest body  ";

    int n = s.length();

    int i = 0;
    int j = 0;
    int maxlen = 0;

    while(j < n){

        if(s[j] != ' '){
            j++;
        }
        else{

            // word ki length
            int len = j - i;

            if(len > maxlen)
                maxlen = len;

            // next word ke starting point par jao
            i = j;

            while(i < n && s[i] == ' ')
                i++;

            j = i;
        }
    }

    // Last word check
    if(i < n){
        int len = n - i;

        if(len > maxlen)
            maxlen = len;
    }

    cout << maxlen << endl;

    return 0;
}