#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    int a = 13;
    double b =0.165000;
    cout.precision(6);
   double c = a * b;
    cout <<a << " * "<<b<<" = "<<c <<endl;
    // 여기에 코드를 작성해주세요.
    return 0;
}