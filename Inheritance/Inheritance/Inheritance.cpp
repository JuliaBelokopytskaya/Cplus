#include<iostream>
#include<math.h>
using namespace std;
class Square
{
protected:
	int side;
public:
	Square() { side = 0; }
	Square(int n) { side = n; }
	int GetCount() { 
		cout << "Square side"; 
		return side; 
	}
	void SetCount(int n) { side = n; }
	int SolveSquare(){ return (side * side); }
	int PerimeterSquare() { return (4 * side); }
	int DiagonalSquera() { return sqrt(2 * (side * side)); }
};
class Cube :public Square
{
public:

	Cube() :Square() {};
	Cube(int n) :Square(n) {};
	int Volume() { return side ^ 3; }
	int SolveSquare() { return 6*side^2; }
	int GetCount() { 
		cout << "Cube side";
		return side;
	}
	void Set(int n) { Square::SetCount(n); }

};
int main()
{
	const int N1 = 3;
	const int N2 = 3;
	Square s[N1];
	int sum=0, count = 0;
	int S[N2];
	for (int i = 0; i < N1; i++)
		s[i].SetCount(i + N1);
	for (int i = 0; i < N1; i++) 
		sum += s[i].SolveSquare();
	cout << "Square mean=" << float(1.0*sum /N1)<<endl;
	Cube d[N2];
	for (int i = 0; i < N2; i++)
		d[i].Set(i + N2);
	for (int i = 0; i < N2; i++)
		S[i] = d[i].SolveSquare();
	int max = S[0];
	for (int i = 0; i < N2; i++) {
		if (S[i] > max)
			max = S[i];
	}
	for (int i = 0; i < N2; i++) {
		if (S[i] == max)
			count++;
	}
	cout << "Count max square cube=" << count;
	return 0;
}