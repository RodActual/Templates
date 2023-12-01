// Anthony Rodriguez
// CIS 1202 101
// 11/30/2023

#include <iostream>
#include <cmath>

using namespace std;

template <typename T>
T half(T value) {
    return value / 2;
}

template <>
float half<float>(float value) {
    return value / 2.0f;
}

template <>
double half<double>(double value) {
    return value / 2.0;
}

template <>
int half<int>(int value) {
    return static_cast<int>(round(value / 2.0));
}

int main() {
    double a;
    float b;
    int c;

    cout << "Please enter numerical values for the following: " << endl << endl;

    cout << "a. (double value): ";  cin >> a;
    cout << "b. (float value): "; cin >> b;
    cout << "c. (int value): "; cin >> c;

    cout << endl;

    cout << "Half of " << a << " is " << half(a) << endl;
    cout << "Half of " << b << " is " << half(b) << endl;
    cout << "Half of " << c << " is " << half(c) << endl;

    return 0;
}