#include<iostream>
#include<string>
using namespace std;

int main(){
    // Correct C-style character array with single quotes
    char X[] = {'R', 'A', 'G', 'H', 'A', 'V', '\0'};
    cout << X << endl;

    // Standard C++ string
    string x = "Raghav Garg is a Teacher";
    cout << x << endl;

    return 0;
}