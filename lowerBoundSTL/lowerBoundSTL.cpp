#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int arraySize = 0;
    cin >> arraySize;
    int arr[arraySize];
    
    for(int i = 0; i < arraySize; i++)
        cin >> arr[i];
        
    int queryCount = 0;
    cin >> queryCount;

    int temp;
    for(int i = 0; i < queryCount; i++) {
        cin >> temp;
        for(int j = 0; j < arraySize; j++) {
            if(temp < arr[j]) {
                cout << "No " << j + 1 << endl;
                break;
            }
            if(arr[j] == temp) {
                cout << "Yes " << j + 1 << endl;
                break;
            }
        }
    }
    
    return 0;
}
