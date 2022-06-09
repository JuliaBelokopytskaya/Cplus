#include<iostream>
using namespace std;
int arithmetic_mean(int* mas,int n) {
    int s = 0;
    for (int i = 0; i < n; i++){
        s += mas[i];
    }
    return s/n;
}
float arithmetic_mean(float* mas, int n) {
    float s = 0;
    for (int i = 0; i < n; i++) {
        s += mas[i];
    }
    return s / n;
}
double arithmetic_mean(double* mas, int n) {
    double s = 0;
    for (int i = 0; i < n; i++) {
        s += mas[i];
    }
    return s / n;
}
template <class T> T arithmetic_mean(T* mas, int n){
    T s = 0;
    for (int i = 0; i < n; i++) {
        s += mas[i];
    }
    return s / n;
}

int main() {
    int n;
    cout << "Input size array:" << endl;
    cin >> n;
    int* mas1;
    mas1 = new int[n];
    float* mas2;
    mas2 = new float[n];
    double* mas3;
    mas3 = new double[n];
    cout << "Input array 1:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> mas1[i];
    }
    cout << "Input  array 2:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> mas2[i];
    }
    cout << "Input array 3:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> mas3[i];
    }
    cout << arithmetic_mean(mas1, n)<<endl;
    cout << arithmetic_mean(mas2, n)<<endl;
    cout << arithmetic_mean(mas3, n)<<endl;
    return 0;
}
