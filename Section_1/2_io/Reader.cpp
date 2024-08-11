// read text from the user
#include <iostream>

int main()
{
    char text[512];

    // method 1
    // std::cout << "Please type";

    // std::cin >> text;

    // std::cout << text;

    // method 2
    std::cout << "Please type";

    std::cin.getline(text, 64, '\n');

    std::cout << text;

    return EXIT_SUCCESS;
}