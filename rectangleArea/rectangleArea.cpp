#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
 
class Rectangle {
    public:
        Rectangle () {
            width = 0;
            height = 0;
            area = 0;
        }
        void set_area(int rectArea) {
            area = rectArea;
        }
        void set_width(int rectWidth) {
            width = rectWidth;
        }
        void set_height(int rectHeight) {
            height = rectHeight;
        }
        void display() {
            cout << width << " " << height << endl;
        }
    private:
        int area, width, height;    
};

class RectangleArea : public Rectangle {
    public:
        RectangleArea() {
            width = 0;
            height = 0;
            area = 0;
        }
        void display() {
            cout << area;
        }
        void read_input() {
            cin >> width;
            cin >> height;
            // cout << width << " " << height << endl;
            Rectangle::set_width(width);
            Rectangle::set_height(height);
            calculate_area();
        }
        void calculate_area() {
            area = width * height;
        }
    private:
        int width, height, area;
};


int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}