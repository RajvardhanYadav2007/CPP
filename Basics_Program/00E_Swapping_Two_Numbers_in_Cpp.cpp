#include <iostream>
#include <conio.h>
using namespace std;

void swap(int&, int&);

int main()
{
    int N1 = 0, N2 = 0;

    cout << "\nEnter First Number: ";
    cin >> N1;

    cout << "\nEnter Second Number: ";
    cin >> N2;

    cout << "\nBefore Swapping: " << N1 << " " << N2;

    swap(N1, N2);

    cout << "\nAfter Swapping: " << N1 << " " << N2;

    getch();
    return 0;
}

void swap(int& No1, int& No2)
{
    int Temp = 0;

    cout << "\nInside Swap Function....\n";

    Temp = No1;
    No1 = No2;
    No2 = Temp;
}
