#include<iostream>
#include<ctime>
#include<math.h>
#include <cstdlib>
using namespace std;
class MyClass {
	float x, y;
	static int count;
	public:

		static int printCount() {
			return count;
		}
		MyClass() {
			x = 1+rand()%20;
			y = 1+rand()%20;
			count++;
		}
		~MyClass() {
			count--;
		}
		float solve() {
			float z;
			z = (1 + cos(x)) / (sqrt(pow(y, x)) + 5);
			return z;
		}
		int set() const {
			int n;
			cout << "Input N"<<endl;
			cin >> n;
			return n;
		}


};
int MyClass::count = 0;

int main() {
	MyClass obj;
	const int N = obj.set();
	obj.~MyClass();
	MyClass* pMC = new MyClass[N];
	for (int i = 0; i < N; i++)
	{
			cout<<pMC[i].solve()<<endl;
	}
	cout << MyClass::printCount();
	delete[] pMC;
	return 0;
}