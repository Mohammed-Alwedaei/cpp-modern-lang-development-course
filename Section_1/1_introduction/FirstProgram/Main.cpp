// this is my first c++ program

#include <iostream>

// entry point
int main() {
	using namespace std;

	cout << "Hello from" << " My first c++ program" << endl;

	// uniform intialization
	int age { 18 };
	double balance { 192.25 };
	float tuition { 19.25f };

	char prefix { 'd' };

	int my_arr[5] { 1,2, 3, 5 };

	cout << age;

	return EXIT_SUCCESS;
}