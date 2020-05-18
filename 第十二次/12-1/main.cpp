#include <iostream>
using namespace std;

//在做整理
template<typename T >
void InsertionSort(T list[], int listSize)
{
    for (int i = 1; i < listSize; i++)
    {
        T currentElement = list[i];
        int k;
        for (k = i - 1; k >= 0 && list[k] > currentElement; k--)
        {
            list[k + 1] = list[k];
        }
        list[k + 1] = currentElement;
    }
}


//查字典一樣
template<typename T >
int BinarySearch(const T list[], T key, int listSize)
{
    int low = 0;
    int high = listSize - 1;

    while (high >= low)
    {
        int mid = (low + high) / 2;
        if (key < list[mid])
            high = mid - 1;
        else if (key == list[mid])
            return mid;
        else
            low = mid + 1;
    }

    return -1;
}

int main()
{

    int list1[] = { 1,5,6,2,3,7,9,8,4 };
    double list2[] = { 1.1,5.5,6.6,2.2,3.3,7.7,9.9,8.8,4.4 };

    //大小為9
    const int listSize = 9;

    int i1, i2, i3;
    double d1, d2, d3;

    cin >> i1 >> i2 >> i3 >> d1 >> d2 >> d3;


    ///////// list1 /////////
    cout << "From: ";
    for (int i = 0; i < listSize; i++) {
        if (i != listSize - 1)
            cout << list1[i] << ",";
        else
            cout << list1[i] << endl;
    }


    InsertionSort(list1, listSize);

    cout << "To: ";
    for (int i = 0; i < listSize; i++) {
        if (i != listSize - 1)
            cout << list1[i] << ",";
        else
            cout << list1[i] << endl;
    }

    cout << i1 << " at " << BinarySearch(list1, i1, listSize) << endl
        << i2 << " at " << BinarySearch(list1, i2, listSize) << endl
        << i3 << " at " << BinarySearch(list1, i3, listSize) << endl;
    
    ///////// list2 /////////
    cout << endl << endl;

    cout << "From: ";
    for (int i = 0; i < listSize; i++) {
        if (i != listSize - 1)
            cout << list2[i] << ",";
        else
            cout << list2[i] << endl;
    }


    InsertionSort(list2, listSize);

    cout << "To: ";
    for (int i = 0; i < listSize; i++) {
        if (i != listSize - 1)
            cout << list2[i] << ",";
        else
            cout << list2[i] << endl;
    }


    cout << d1 << " at " << BinarySearch(list2, d1, listSize) << endl
        << d2 << " at " << BinarySearch(list2, d2, listSize) << endl
        << d3 << " at " << BinarySearch(list2, d3, listSize) << endl;

    system("pause");
    return 0;
}