#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    
    string str1 = "";
    string str2 = "";
    
    cin >> str1;
    cin >> str2;
    
    cout << str1.length() << " " << str2.length() << endl;
    cout << str1 + str2 << endl;
    cout << str2.substr(0,1).append(str1.substr(1, str1.length())) << " " << str1.substr(0,1).append(str2.substr(1, str2.length()));
  
    return 0;
}