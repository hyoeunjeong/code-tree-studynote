#include <iostream>
#include <iomanip> // setprecision과 fixed를 사용하기 위해 필요
using namespace std;

int main() {
    double a = 5.26;
    double b = 8.27;

    double c = a * b;

    cout << fixed << setprecision(3); // 소수점 셋째 자리까지 고정 소수점 표기법으로 출력
    cout << c << endl; // 결과 출력

    return 0;
}