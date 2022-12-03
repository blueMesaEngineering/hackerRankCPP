#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    vector<int>v;
    int vectorSize = 0;
    cin >> vectorSize;
    
    for(int i = 0; i < vectorSize; i++) {
        int tempInt = 0;
        cin >> tempInt;
        v.push_back(tempInt);
    }
    
    sort(v.begin(), v.end());
    
    for(int i = 0; i < vectorSize; i++)
        cout << v[i] << " ";
    
    return 0;
}
