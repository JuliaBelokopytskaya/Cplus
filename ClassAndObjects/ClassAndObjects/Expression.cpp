#include <iostream>
using namespace std;
#include <math.h>

class Expression {
private:
	double x;
	double y;
	double z;
	double t;
public:
	// Объявление и определение методов:
	void Set(double X, double Y, double Z)
	{
		x = X;
		y = Y;
		z = Z;
	}
	void Print(void)
	{
		cout << t<<endl;
	}
	void Run(void)
	{
		t = (y - x) + cos(y) - (z * log(y)) / (y - x);
	}
};

int main()
{
	// Использование прямой операции членства
	Expression exp;
	exp.Set(182.5, 18.225, -0.03298);
	exp.Run();
	exp.Print();
	// Использование косвенной операции членства
	Expression* exp1 = new Expression();
	exp1->Set(182.5, 18.225, -0.03298);
	exp1->Run();
	exp1->Print();
	return 0;
}
