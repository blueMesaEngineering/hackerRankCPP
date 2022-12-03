#include <iostream>
#include <sstream>
#include <string>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student {
    public:
        Student () {
            age = 0;
            first_name = "";
            last_name = "";
            standard = 0;
        }
        
        // setters
        void set_age(int newAge) {
            age = newAge;
        }
        void set_standard(int newStandard) {
            standard = newStandard;
        }
        void set_first_name(string new_first_name) {
            first_name = new_first_name;
        }
        void set_last_name(string new_last_name) {
            last_name = new_last_name;
        }
        
        // getters
        int get_age() {
            return age;
        }
        int get_standard() {
            return standard;
        }
        string get_first_name() {
            return first_name;
        }
        string get_last_name() {
            return last_name;
        }
        
        string to_string() {
            string output = std::to_string(age) + "," + first_name + "," + last_name + "," + std::to_string(standard);
            return output;
        }
        
    private:
        int age, standard;
        string first_name, last_name;
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}