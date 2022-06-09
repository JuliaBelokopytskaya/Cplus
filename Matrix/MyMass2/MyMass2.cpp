#include <iostream>
using namespace std;

class MyMass2 {
private:
    float** matrix;
    int n;
public:
    MyMass2();
    MyMass2(int);
    ~MyMass2();
    void init();
    void print();

};

MyMass2::MyMass2()
{
    cout << "Constructor without parametrs";
    n = 0;
    matrix = nullptr;
}
MyMass2::MyMass2(int N) {
    cout << "Constructor with parametrs" << endl;
    n = N;
    matrix = new float* [n];
    for (int i = 0; i < n; i++)
        matrix[i] = new float[n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            matrix[i][j] = 0;

}

MyMass2::~MyMass2() {
    cout << "Destructor";
    if (n > 0)
    {
        for (int i = 0; i < n; i++)
            delete[] matrix[i];
    }
    if (n > 0)
        delete[] matrix;

}

void MyMass2::init() {
    matrix[0][0] = n;
    matrix[0][n - 1] = n;
    matrix[n - 1][0] = 1;
    matrix[n - 1][n - 1] = 1;
    for (int i = 1; i < n - 1; i++)
    {
        matrix[i][0] = 0;
        matrix[i][n - 1] = 0;

    }

    for (int j = 1; j < n - 1; j++)
    {
        int k = n - 1;
        for (int i = 0; i < n; i++)
        {
            if (i == 0 || i == n - 1)
                matrix[i][j] = 0;
            else {
                matrix[i][j] = k;
                k--;
            }
        }
    }
}

void MyMass2::print() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "---------------------------" << endl;
}


int main() {
    int n;
    cout << "Input size square matrix:" << endl;
    cin >> n;
    MyMass2 Matrix1(n);
    Matrix1.init();
    Matrix1.print();
    return 0;
}
