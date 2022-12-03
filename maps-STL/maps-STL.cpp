#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int queryCount = 0;
    cin >> queryCount;

    map<string, int>m;
    
    for(int i = 0; i < queryCount; i++) {
        int queryType = 0;
        cin >> queryType;
        
        if(queryType == 1) {
            string name = "";
            int marks = 0;
            cin >> name;
            cin >> marks;
            
            map<string, int>::iterator pos = m.find(name);
            if(pos == m.end()) {
                m.insert(make_pair(name, marks));
            }
            else {
                pos->second += marks;
            }
        }
        if(queryType == 2) {
            string name = "";
            cin >> name;
            map<string, int>::iterator pos = m.find(name);
            pos->second = 0;             
        }
        if(queryType == 3) {
            string name = "";
            cin >> name;
            map<string, int>::iterator pos = m.find(name);
            if(pos != m.end())
                cout << pos->second << endl;
            else
                cout << "0" << endl;
        }
    }
    
    return 0;
}



