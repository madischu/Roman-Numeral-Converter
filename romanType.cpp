#include "romanType.h"
#include <iostream>

romanType::romanType()
{
    romanNum = "";
    integerNum = 0;
}

// Assign Roman numeral
void romanType::setRoman(string r)
{
    romanNum = r;
}

// Return integer value of a Roman character
int romanType::value(char r)
{
    switch (r)
    {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

// Convert Roman numeral to integer
void romanType::convertToInt()
{
    int total = 0;
    int n = romanNum.length();

    for (int i = 0; i < n; i++)
    {
        int current = value(romanNum[i]);

        if (i + 1 < n)
        {
            int next = value(romanNum[i + 1]);

            if (current < next)
            {
                total -= current;
            }
            else
            {
                total += current;
            }
        }
        else
        {
            total += current;
        }
    }

    integerNum = total;
}

// Return integer
int romanType::getInteger() const
{
    return integerNum;
}

// Print Roman numeral
void romanType::printRoman() const
{
    cout << "Roman Numeral: " << romanNum << endl;
}

// Print integer value
void romanType::printInteger() const
{
    cout << "Integer Value: " << integerNum << endl;
}
