#include <iostream>
using namespace std;


int main()
{
    system("chcp 1251>null");
    //n1
    /*const int size = 5;
    int ar1[size] = { 1,2,3,4,5 };
    int insertar[size];
    for (int i = 0; i < size; i++) {
        *(insertar + i) = *(ar1 + i);
    }

    cout << "coppied: " << endl;
    for (int i = 0; i < size; i++) {
        cout << insertar[i] << " ";
    }*/

    //n2
    /*const int size = 5;
    int array[size] = { 1,2,3,4,5 };
    int* start = array;
    int* end = array + size - 1;
    while (start < end) {
        swap(*start, *end);
        start++;
        end--;
    }
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }*/


    //n3
    const int size = 5;
    int array[size] = { 1,2,3,4,5 };
    int insertar[size];
    int* end = array + size - 1;
    for (int i = 0; i < size; i++) {
        *(insertar + i) = *(end - i);
    }
    for (int i = 0; i < size; i++) {
        cout << insertar[i] << " ";
    }

    return 0;
}

