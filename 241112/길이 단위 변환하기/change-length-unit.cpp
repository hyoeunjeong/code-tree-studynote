#include <iostream>
using namespace std;

int main() {
    double a =30.48;
    int b =160934;
    cout << fixed ;
    cout.precision(1);
    
    double c = a * 9.2 ;
    double d = b * 1.3;
    
    cout << "9.2ft = " <<c<<"cm"<<endl;
    cout << "1.3mi = " <<d<<"cm"<<endl; //여기에 코드를 작성해주세요.
    return 0;
}