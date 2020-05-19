#include<iostream>
using namespace std;

int main() {

    int n = 10;
    cout << "n 的值(n)：" << n << endl
         << "n 位址(&n)：" << &n << endl;

    // *p 必須存取的是位置
    int *p = &n;    //假如 n 為 const 便會出現錯誤
    cout << endl << "*p = &n" << endl;
    cout << "p 的值(*p)：" << *p << endl
         << "p 位址(p)：" << p << endl;

    *p = 20;
    cout << endl << "*p = 20" << endl;
    cout << "p 的值(*p)：" << *p << endl
         << "p 位址(p)：" << p << endl;
    cout << "n 的值(n)：" << n << endl
        << "n 位址(&n)：" << &n << endl;

    cout << endl;

    int arr[5] = { 10,20,30,40,50 };
    cout << "arr[5] = 10, 20, 30, 40, 50" << endl << "*pA = arr" << endl;

    int*pA = arr;
    for (int i = 0; i < 5; i++) {
        cout << "*(pA + " << i << "): " << *(pA + i) << endl;
    }
    cout << "arr 的 位置: " << &arr << endl
        << "*pA 的 位置: " << pA << endl;
    
    cout << "arr[2] = 33" << endl;
    arr[2] = 33;
    for (int i = 0; i < 5; i++) {
        cout << "*(pA + " << i << "): " << *(pA + i) << endl;
    }
    cout << "解: 改了 arr 便會改了 pA" << endl;

    system("pause");
    return 0;
}