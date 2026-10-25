
using namespace std;
#include<iostream>

class Sum
{
        public:
            void Add(int N1,int N2)
            {
                cout<<"\n Addition = "<< N1 + N2;
            }

            void Add(int N1,int N2,int N3)
            {
                cout<<"\n Addition = "<< N1 + N2 + N3;
            }

};

int main()
{
        Sum Obj;

        Obj.Add(2,5);
        Obj.Add(6,2,9);

        return 0;
}
