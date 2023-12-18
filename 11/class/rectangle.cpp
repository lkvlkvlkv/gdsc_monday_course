#include <bits/stdc++.h>
using namespace std;

class Rectangle {
private:
    int width;
    int height;
public:
    Rectangle(int width, int height) {
        this->width = width;
        this->height = height;
    }
    ~Rectangle() {
        // Destructor
    }
    int get_width() {
        return width;
    }
    int get_height() {
        return height;
    }
    int get_area() {
        return width * height;
    }
};

int main() {
    Rectangle rectangle(10, 20);
    cout << "Width: " << rectangle.get_width() << endl;
    cout << "Height: " << rectangle.get_height() << endl;
    cout << "Area: " << rectangle.get_area() << endl;
    return 0;
}