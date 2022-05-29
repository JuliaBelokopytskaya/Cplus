#include <iostream>
using namespace std;

class Dish {

private:
	int number;
	string title;
	double countGram;
	double cost;
public:
	void Set(int num, string name, double gram, double price)
	{
		number = num;
		title = name;
		countGram = gram;
		cost = price;
	}
	void Print(void);
};
void Dish::Print(void)
{
	if (countGram >= 100 && title == "dessert") {
		cout << number << endl << title << endl << countGram << endl << cost << endl;
	}
}
int main()
{
	int n = 4;
	Dish* dish;
	dish = new Dish[n];
	dish[0].Set(1, "dessert", 150, 15);
	dish[1].Set(2, "meat", 150, 1.5);
	dish[2].Set(3, "dessert", 90, 10);
	dish[3].Set(4, "dessert", 200, 20);
	for (int i = 0; i < n; i++) {
		dish[i].Print();
	}

}