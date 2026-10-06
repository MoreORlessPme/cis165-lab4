#include <iostream>
using namespace std;


int main()
{
    double value1 = 28;
    double value2 = 32;
    double value3 = 37;
    double value4 = 24;
    double value5 = 33;
// 5 separate variables declared in decimal format and stored whole number values
    double sum = value1 + value2 + value3 + value4 + value5;
    double average = sum / 5;
//equation add all 5 together divide by 5 
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
//display SUM and AVERAGE variables set by equations
    return 0;
}