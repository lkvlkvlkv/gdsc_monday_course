#include <bits/stdc++.h>
using namespace std;

// reference
// https://chenhh.gitbooks.io/parallel_processing/content/cython/pointer.html

void p2self(void** p) {
    /* 為了處理所有型別的pointer而使用void* */
    (*p) = (void*)&(*p);
}

int main() {
    void* pi;
    pi = &pi;

    cout << (&pi) << endl;
    cout << pi << endl;


    int* pi1;
    pi1 = &pi1; // error

    int** pi2 = &pi1;
    pi1 = (int*)pi2; // 強制轉型

    pi1 = (int*)&pi1; // 強制轉型
}