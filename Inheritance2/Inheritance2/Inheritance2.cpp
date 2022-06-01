#include <iostream>
using namespace std;

class Base1
{
    int b;
    public:
        Base1(int z) : b(z){ }
        void showBase1()
        {
            cout << "Class Base1 "<<b<<endl;
        }
};
class Base2
{
    int b1;
    public:
        Base2(int z) : b1(z) { }
        void showBase2()
        {
            cout << "Class Base2 "<<b1<<endl;
        }
};
class Proizv1 :public Base1 {
    int p;
    public:
        Proizv1(int m, int n) :Base1(m), p(n) {}
        void showProizv1()
        {
            cout << "Class Proizv1 "<<p<<endl;
            showBase1();
        }
};
class Proizv2 :private Base1 {
    int p1;
    public:
        Proizv2(int m, int n) :Base1(m), p1(n) {}
        void showProizv2()
        {
            cout << "Class Proizv2 "<<p1<<endl;
            showBase1();
        }
};
class Proizv3 :private Base2, public Proizv1, public Proizv2 {
    int p2;
    public:
    Proizv3(int m, int n, int z, int y) :Base2(m), Proizv1(n,m), Proizv2(z,m), p2(y) {}
    void showProizv3()
    {
        cout << "Class Proizv3 "<<p2<<endl;
        showBase2();
        showProizv1();
        showProizv2();
    }
};
void main() {
    Proizv3 P(10,20,30,40);
    cout << "Proizv3 P(10,20,30,40)" << endl;
    P.showProizv3();
}