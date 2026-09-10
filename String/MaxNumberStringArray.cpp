#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

string biggerNumber(string s1, string s2){

    int i = 0;

    while(i < s1.length() && s1[i] == '0')
        i++;

    int s1_Real_Length = s1.length() - i;


    int j = 0;

    while(j < s2.length() && s2[j] == '0')
        j++;

    int s2_Real_Length = s2.length() - j;


    // Length compare
    if(s1_Real_Length > s2_Real_Length)
        return s1;

    if(s2_Real_Length > s1_Real_Length)
        return s2;


    // Same length
    while(i < s1.length() && j < s2.length()
          && s1[i] == s2[j]){
        i++;
        j++;
    }


    // Dono numbers exactly same
    if(i == s1.length())
        return s1;


    // Digit compare
    if(s1[i] > s2[j])
        return s1;

    return s2;
}

int main(){

    vector<string> arr = {
        "0123",
        "0023",
        "456",
        "00182",
        "940",
        "2901"
    };

    string max = arr[0];

    int m = arr.size();

    for(int i = 1; i < m; i++){
        max = biggerNumber(arr[i], max);
    }

    cout << max << endl;

    return 0;
}