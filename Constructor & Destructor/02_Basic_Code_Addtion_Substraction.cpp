
#include<iostream>
#include<conio.h>
using namespace std;

class Calc
{
        private :

                int N1 , N2;

        public   :
                    int Sum,Sub;

            Calc();

            Calc(int No1,int No2);

            Calc(Calc &Ref);

            ~Calc();

            void Set_Values();

            void Addition();

            void Substraction();
};

int main()
{
        Calc obj1;

        obj1.Set_Values();

        obj1.Addition();
        obj1.Substraction();

        cout<< "\n Addition Of obj1 :" <<obj1.Sum <<endl;
        cout<< "\n substraction of obj2 :" << obj1.Sub <<endl;

         Calc obj2(21,50);

        obj2.Addition();
        obj2.Substraction();

        cout<< "\n Addtion Of obj2 :" << obj2.Sum <<endl;
        cout<< "\n substraction Of obj2 :" << obj2.Sub << endl;

        getch();

         Calc obj3(obj2);

         cout<< "\n Addtion Of obj3 :" << obj3.Sum <<endl;
        cout<< "\n substraction Of obj3:" << obj3.Sub << endl;

        getch();

        obj3.Set_Values();

         cout<< "\n Addtion Of obj3 :" << obj3.Sum <<endl;
        cout<< "\n substraction Of obj3:" << obj3.Sub << endl;

        getch();

         obj3.Addition();
        obj3.Substraction();

        cout<< "\n Addtion Of obj3 :" << obj3.Sum <<endl;
        cout<< "\n substraction Of obj3 :" << obj3.Sub << endl;


        getch();

        return 0;
}

Calc :: Calc()
{
        N1 = N2 = Sum = Sub = 0;

        cout<<"\n Inside Default Constructor :"<<endl;

}
Calc :: Calc(int No1, int No2)
{
        N1 = No1;
        N2 = No2;
        Sum = Sub = 0;

        cout<<"\n Inside Parametrized Construtor :"<<endl;
}
Calc :: ~Calc()
{
        cout<<"Inside Destructor :"<< endl;

}
Calc :: Calc( Calc &Ref)
{
    this -> N1 = Ref.N1;
    this -> N2 = Ref.N2;

    this -> Sum = 0;
    this -> Sub = 0;
}
 void Calc :: Set_Values()
{
            cout<< "\n Enter Two Numbers :"<<endl;
            cin>>N1 >> N2;
}
void Calc :: Addition()
{
    Sum  = N1 + N2;
}
void Calc :: Substraction()
{
        Sub = N1 - N2;
}
