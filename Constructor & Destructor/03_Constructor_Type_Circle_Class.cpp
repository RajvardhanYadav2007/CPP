using namespace std;
#include<iostream>
#include<conio.h>
#define Pi 3.14

class Circle
{
    private :
            float Rad;
    public :
            float Area, Circum;

            Circle();

            Circle(float);
            Circle(Circle &);

            ~Circle();

            void Accept_Radius();

            void Area_Of_Circle();

            void Circumference_Of_Circle();
};

int main()
{
            Circle Obj1;
            Circle Obj2(7.5);

            Obj1.Accept_Radius();
            Obj1.Area_Of_Circle();
            Obj1.Circumference_Of_Circle();

            getch();

            Obj2.Area_Of_Circle();
            Obj2.Circumference_Of_Circle();

            getch();

            Circle Obj3(Obj1);

            Obj3.Accept_Radius();

            cout << "\n Area Of Circle for Copied Object = " << Obj3.Area;
            cout << "\n Circumference Of Circle for Copied Object = " << Obj3.Circum;

            getch();
            return 0;
}

void Calc()
{
    Circle Obj;

    Obj.Accept_Radius();
}

Circle :: Circle()
{
            Rad = Area = Circum = 0.0;

            cout << "\n Inside Default Constructor!!!" << endl;
}

Circle :: Circle(float R)
{
            Rad = R;
            Area = Circum = 0.0;

            cout << "\n Inside Parameterized Constructor!!!" << endl;
}

Circle :: Circle(Circle &Ref)
{
            this -> Rad = Ref.Rad;
            this -> Area = Ref.Area;
            this -> Circum = Ref.Circum;

            cout << "\n Inside Copy Constructor!!!" << endl;
}

Circle :: ~Circle()
{
            cout << "\n Inside Destructor for Circle with Radius -> " << this -> Rad << endl;
}

void Circle :: Accept_Radius()
{
                cout << "\n Enter Radius = ";
                cin >> this -> Rad;
}

void Circle :: Area_Of_Circle()
{
                Area = Pi * Rad * Rad;

                cout << "\n Area for given Circle Calculated by Function as => " << Area ;
}

void Circle :: Circumference_Of_Circle()
{
                Circum = 2 * Pi * Rad;

                cout << "\n Circumference for given Circle Calculated by Function as => " << this -> Circum ;
}
