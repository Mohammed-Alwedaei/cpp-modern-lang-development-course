#include <iostream>
#include "Header Files/math.h"

int main()
{
    using namespace std;
    int num1, num2;

    cout << "Please enter num1 and num2: " << endl;

    cin >> num1 >> num2;

    const int resultOfSum = Add(num1, num2);

    cout << "The sum of num1 and num2 is " << resultOfSum << endl;
}
