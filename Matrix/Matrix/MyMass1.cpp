#include <iostream>
using namespace std;

class MyMass1 {
private:
    float** matrix;
    int m;
    int n;
public:
    MyMass1();
    MyMass1(int,int);
    ~MyMass1();
    void init();
    void get();
    void print();
    void solve();
    float max(const MyMass1&);
};

MyMass1::MyMass1()
{
    cout << "Constructor without parametrs";
    m=n = 0;
    matrix = nullptr;
}
MyMass1::MyMass1(int N,int M) {
    cout << "Constructor with parametrs";
    n = N;
    m = M;
    matrix = new float* [n];
    for (int i = 0; i < n; i++)
        matrix[i] = new float[m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            matrix[i][j] = 0;

}

MyMass1::~MyMass1() {
    cout << "Destructor";
    if (m > 0)
    {
        for (int i = 0; i < n; i++)
            delete[] matrix[i];
    }
    if(n>0)
        delete[] matrix;
   
}
void MyMass1::get() {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
}
void MyMass1::init() {
    srand(time(0));
    int max;
    int min;
    cout << "Input random point";
    cin >> max;
    cin >> min;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[i][j] = rand() % max - min;
        }
    }
}
float MyMass1::max(const MyMass1& matrix1) {
    float max = matrix1.matrix[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(max< matrix1.matrix[i][j])
                max= matrix1.matrix[i][j];
        }
    }
    return max;
}
void MyMass1::solve() {
    float maximum = max(*this);
    cout << maximum<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
                matrix[i][j]= matrix[i][j]+ maximum;
        }
    }

}

void MyMass1::print() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "---------------------------" << endl;
}


int main() {
	int n,m;
	cout << "Input size matrix:" << endl;
	cin >> n>>m;
    MyMass1 Matrix1(n,m);
    MyMass1 Matrix2(n, m);
    Matrix1.init();
	cout << "Input matrix:" << endl;
    Matrix2.get();
	cout << "Matrix #1:" << endl;
    Matrix1.print();
	cout << "Matrix #2:" << endl;
    Matrix2.print();
    Matrix1.solve();
    Matrix1.print();
	return 0;
}
