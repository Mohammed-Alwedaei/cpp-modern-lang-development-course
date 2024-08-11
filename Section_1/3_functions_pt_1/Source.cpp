#include <iostream>

int Add(int num1, int num2);

int main()
{
    int num1, num2;

    std::cout << "Please enter num1 and num2: ";

    std::cin >> num1 >> num2;

    int resultOfSum = Add(num1, num2);

    std::cout << "The sum of num1 and num2 is " << resultOfSum;
}

int Add(int num1, int num2)
{
    return num1 + num2;
}