#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x, y;
};

void print_point(Point *p) {
    cout << p->x << " " << p->y << endl;
}

int main() {
    Point p = {1, 2};
    print_point(&p);
    return 0;
}