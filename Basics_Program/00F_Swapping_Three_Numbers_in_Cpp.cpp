```cpp
#include <iostream>
#include <conio.h>
using namespace std;

void swapNumbers(int& N1, int& N2, int& N3);

int main()
{
    int N1 = 0, N2 = 0, N3 = 0;

    cout << "\nEnter First Number: ";
    cin >> N1;

    cout << "\nEnter Second Number: ";
    cin >> N2;

    cout << "\nEnter Third Number: ";
    cin >> N3;

    cout << "\nBefore Swapping: " << N1 << " " << N2 << " " << N3;

    swapNumbers(N1, N2, N3);

    cout << "\nAfter Swapping: " << N1 << " " << N2 << " " << N3;

    getch();
    return 0;
}

void swapNumbers(int& N1, int& N2, int& N3)
{
    int Temp = 0;

    cout << "\nInside Swap Function....\n";

    Temp = N1;
    N1 = N3;
    N3 = Temp;
}
```
