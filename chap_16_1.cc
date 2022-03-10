#include <iostream>
#include <string>

using namespace std;

double divide(double numerator, double denomiator);

int main (int argc, char* argv[]) {
    int num1, num2;
    double quotient;
    
    cout << "Enter two numbers:";
    cin >> num1 >> num2;
    try {
        quotient = divide(num1, num2);
        cout << "the quotient is " << quotient << endl;
    } catch (string exString) {
        cout << exString;
    }
    cout << "End of the program" << endl;
    return 0;

}

double divide(double numerator, double denomiator) {
    if (denomiator == 0) {
        throw string ("ERROR: Cannot divide by zero.\n");
    } else {
        return numerator/denomiator;
    }

}

