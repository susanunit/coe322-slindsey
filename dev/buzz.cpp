#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// Read in an integer. 
// If it’s a multiple of three print ‘Fizz!’; 
// if it’s a multiple of five print ‘Buzz’!. 
// It it is a multiple of both three and five print ‘Fizzbuzz!’. 
// Otherwise print nothing. (Note: your program should display at most one output.)

/* COE 322 Fall 2024 
Write a function `int read_number()` and use it to rewrite your fizzbuzz solution.
Make sure to use an initializer; the number you are testing should be limited in scope to the conditional.
*/

using std::cout;
using std::endl;

int main() {

	int mynum;

	cout << "enter a number: ";
	cin >> mynum;
	cout << endl;

	if (((mynum%3)==0) && ((mynum%5) == 0))
		cout << "fizz buzz" << endl;

	else if ((mynum % 3) == 0 ) 
		cout << "fizz";

	else if ((mynum%5)==0)
		cout << "buzz";

	bool divby3 = !(mynum%3);
	bool divby5 = !(mynum%5);


	if (divby3) {
		if (divby5) {
			cout << "fizz buzz"; }
		else 
			cout << "fizz";
	} else if (divby5)
		cout << "buzz";


	for (int i=0; i<10; i++)


	cout << endl;

	return 0;
}
