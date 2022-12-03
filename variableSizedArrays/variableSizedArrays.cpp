#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n;  // Number of variable length arrays
    int q;  // Number of queries
    
    cin >> n;
    cin >> q;

    int **arr;
    arr = new int*[n];
    for(int i = 0; i < n; i++) {
        int innerArrayLength;
        cin >> innerArrayLength;
        arr[i] = new int [innerArrayLength];
        for(int j = 0; j < innerArrayLength; j++) {
            cin >> arr[i][j];
        }
    }
    
    for(int i = 0; i < q; i++) {
        int xIndex, yIndex;
        cin >> xIndex;
        cin >> yIndex;
        
        cout << arr[xIndex][yIndex];
        cout << endl;
    }
    
    delete [] arr;

    return 0;
}