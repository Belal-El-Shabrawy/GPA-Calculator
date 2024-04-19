#include <iostream>

using namespace std;

int main() {
    double A1,A2,A3,B1,a1,a2,a3,b1;
    double sum;
    cout << "How Many A+ A A- B+ did you get (3 Credits)";
    cin >> A1 >> A2 >> A3 >> B1;
    cout << "How Many A+ A A- B+ did you get (2 Credits)";
    cin >> a1 >> a2 >> a3 >> b1;
    sum = (3*((A1*4) + (A2*3.7) + (A3*3.4) + (B1*3.2)) + 2*((a1*4) + (a2*3.7) + (a3*3.4) + (b1*3.2)))/(3*(A1+A2+A3+B1) + 2*(a1+a2+a3+b1));
    cout << "Your GPA:" << sum;
}