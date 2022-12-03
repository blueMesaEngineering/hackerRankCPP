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
    
    int eraseOne;
    cin >> eraseOne;
    v.erase(v.begin() + eraseOne - 1);
    
    int erase1, erase2;
    cin >> erase1;
    cin >> erase2;
    v.erase(v.begin() + erase1 - 1, v.begin() + erase2 - 1);

    cout << v.size() << endl;
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    return 0;
}
