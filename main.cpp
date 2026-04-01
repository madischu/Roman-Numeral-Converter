#include <iostream>
#include "romanType.h"
using namespace std;

int main()
{
    string input;

    cout << "Enter a Roman numeral: ";
    cin >> input;

    romanType roman;
    roman.setRoman(input);
    roman.convertToInt();

    roman.printRoman();
    roman.printInteger();

    return 0;
}
