#include <bits/stdc++.h>
using namespace std;

struct BigData {
    int arr[100000];
};

BigData* get_data() {
    BigData* data = new BigData();
    for (int i = 0; i < 100000; i++) {
        data->arr[i] = i;
    }
    return data;
}

int main() {
    BigData* data = get_data();
    for (int i = 0; i < 100000; i++) {
        cout << data->arr[i] << " ";
    }
    cout << endl;
    delete data;
    return 0;
}