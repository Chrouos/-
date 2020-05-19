#include<iostream>
#include<vector>
using namespace std;

template<typename T>
void reverse(const T list[], T newList[], int size)
{
    for (int i = 0, j = size - 1; i < size; i++, j--)
    {
        newList[j] = list[i];
    }
}

template<typename T>
void reverse(const vector<T> list, vector<T> newList, int size)
{
    for (int i = 0, j = size - 1; i < size; i++, j--)
    {
        newList[j] = list[i];
    }
}

template<typename T>
void change(vector<T> list, string value) {
    list[2] = value;
}


int main() {

    string strArray[5] = { "a", "b", "c", "d", "e" };
    string newList[5];
    reverse(strArray, newList, 5);

    vector<string> strVector(5);
    for (int i = 0; i < 5; i++) {
        strVector[i] = strArray[i];
    }
    vector<string> newVector(5);
    reverse(strVector, newVector, 5);
    change(newVector, "C");



}