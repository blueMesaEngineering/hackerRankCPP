#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int n = 0;
    string numberString;
    vector<string> numbers = {};
    size_t position = 0;
    string delimiter = " ";

    cin >> n;

    int *arr = new int [n];
    
    cin >> numberString;
    cout << numberString;
    
    while((position = numberString.find(delimiter)) != string::npos) {
        numbers.push_back(numberString.substr(0, position));
        numberString.erase(0, position + delimiter.length());
    }
    
    int i = n - 1;
    for (const auto &number : numbers) {
        // cout << number << " ";
        arr[i] = stoi(number);
        i--;
    }
    
    for(int j = 0; j < n; j++)
        // cout << arr[j] << " ";
    
    arr = NULL;
    
    return 0;
}
