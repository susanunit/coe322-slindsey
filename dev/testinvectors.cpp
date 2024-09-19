#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

int main ( void ) {

	vector<int> numbers = {1,4}; 

	numbers[-1] += 3;
	numbers[2] = 8;

	cout << numbers[0] << "," << numbers[1] << '\n';

	return (0);

}

