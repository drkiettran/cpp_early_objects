#include <iostream>
#include "IntRange2.h"

using namespace std;

int main () {
    IntRange2 range(5,10);
    int userValue;
    
    cout << "Enter a value in the range of 5 - 10: ";
    try {
        userValue = range.getInput();
        cout << "You entered " << userValue << endl;
    } catch (IntRange2::TooLow) {
        cout << "That value is too low.\n";
    } catch (IntRange2::TooHigh) {
        cout << "That value is too high.\n";
    }
    cout << "End of the program." << endl;
    return 0;
}