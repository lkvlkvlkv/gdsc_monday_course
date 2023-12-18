#include <bits/stdc++.h>
using namespace std;

int main() {
    array<int, 3> arr = {1, 2, 3};
    pair<int, string> p = {1, "hello"};
    tuple<int, double, string, double> t = {1, 2.3, "hello", 4.5};
    cout << "Array: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Pair: " << p.first << " " << p.second << endl;
    cout << "Tuple: " << get<0>(t) << " " << get<1>(t) << " " 
                      << get<2>(t) << " " << get<3>(t) << endl;

    return 0;
}