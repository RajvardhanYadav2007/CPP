using namespace std;
#include<iostream>
#include<conio.h>

class Circle
{
    public:
            float Rad;
            float Area;

            Circle()
            {
                Rad = 0.0;
                Area = 0.0;

                cout << "\n Circle :: Default Constructor " << endl;
            }

            void Area_Of_Circle()
            {
                const float PI = 3.1416;

                Area = PI * Rad * Rad;

                cout << "\n Circle :: Area of Circle" << endl;
            }

            ~Circle()
            {
                cout << "\n Circle :: Destructor ";
                cout << Rad;
            }
};

int main()
{
    Circle Obj1;

    getch();

    cout << "\n Radius = " << Obj1.Rad << "\n Area = " << Obj1.Area << endl;

    getch();

    Obj1.Rad = 3.6;
    Obj1.Area_Of_Circle();

    getch();

    cout << "\n Area of circle with radius " << Obj1.Rad << " = " << Obj1.Area << ".\n";

    getch();
    return 0;
}
