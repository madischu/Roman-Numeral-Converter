#ifndef ROMANTYPE_H
#define ROMANTYPE_H

#include <string>
using namespace std;

class romanType
{
private:
    string romanNum;
    int integerNum;

    int value(char r);

public:
    romanType();
    void setRoman(string r);
    void convertToInt();
    int getInteger() const;
    void printRoman() const;
    void printInteger() const;
};

#endif
