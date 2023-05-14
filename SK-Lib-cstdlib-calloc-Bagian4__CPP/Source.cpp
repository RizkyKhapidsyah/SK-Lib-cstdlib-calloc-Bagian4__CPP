#include <cstdlib>
#include <iostream>
#include <conio.h>

/*
    Source by Programiz (https://www.programiz.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main() {
    int* ptr = (int*)calloc(0, 0);

    if (ptr == NULL) {
        cout << "Null pointer";
    } else {
        cout << "Address = " << ptr << endl;
    }

    free(ptr);

    _getch();
    return 0;
}