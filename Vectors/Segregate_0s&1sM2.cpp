#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> arr = {0, 1, 0, 1, 0, 0, 1, 1, 0};

    int n = arr.size();

    int i = 0;
    int j = n - 1;

    while(i < j){

        if(arr[i] == 0){
            i++;
        }
        else if(arr[j] == 1){
            j--;
        }
        else{
            // arr[i] = 1 and arr[j] = 0
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

            i++;
            j--;
        }
    }

    // Print array
    for(int num : arr){
        cout << num << " ";
    }

    cout << endl;

    return 0;
}