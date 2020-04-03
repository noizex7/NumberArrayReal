#pragma once
#include <iostream> 
#include <cstdlib> 
using namespace std;
class NumberArray
{
private:
    double* list;
    int numElements;
    bool isValid(int) const;
public:
    NumberArray(int);
    NumberArray(const NumberArray&);
    ~NumberArray();
    void setElement(int, int);
    double getElement(int) const;
    int getNNumElements() const;
    double getLowest()const;
    double getHighest() const;
    double getAverage() const;
    void displayData()const;

};

