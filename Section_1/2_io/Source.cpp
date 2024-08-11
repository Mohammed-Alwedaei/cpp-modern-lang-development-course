#include <iostream>

int main()
{
    // declare variable
    int age;

    // prompt message
    std::cout << "Please enter your age ";

    // read from the user
    std::cin >> age;

    // display the users value
    std::cout << "Your age is " << age;

    return EXIT_SUCCESS;
}