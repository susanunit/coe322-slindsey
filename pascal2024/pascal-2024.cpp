/* 
10/14/2024 Exercise 5

* Write a class pascal so that pascal(n) is the object containing n rows of the above coefficients. 
* Write a method getvalue(i,j) that returns the (i, j) coefficient.
* Write a method print that prints the above display.

 Pascal implementation
 The object needs to have an array internally. The easiest solution is to make an array of size n×n.
* Optimize your code to use precisely enough space for the coefficients.  Write a class "storage" that provides get\set methods that only read from the data structure. The "pascal" class can then inherit from it, and do the coefficient calculation. Do you use public or private inheritance?

Extend the storage class:

• If a coefficient outside the initial triangle is asked, the triangle should dynamically be extended to the row of that coefficient.
• This requires the storage class to extend the space for the coefficients.
• It also requires the pascal class to track how many rows have been filled in, and possibly compute some missing coefficients.

Exercise 7

• First print out the whole pascal triangle; then:
• Write a method print(int m) that prints a star if the coeﬀicient modulo m is nonzero, and a space otherwise.
*
*
**
** **** **
** ** **** ******** ** ** **
• Accept any number of integers; for each, print out the triangle module that number. On zero: stop.
*/
#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <climits>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::setw;
using std::string;

class Pascal {

	private:
		int rows;
		vector<vector<int> > coeffs;

	public:
		Pascal (int n) { // begin constructor
			rows = n; 
			coeffs = vector<vector<int> > (n, vector<int>(n, 0)); 

			// calculate the coeffecient array
			bool done=false;
			for (int r=0; r<rows; r++ ) {  
				for (int c=0; c<=r; c++) {
					if ((c==0) || (c==r))   
						// coeffs[r][c] = 1;	
						// coeffs.at(r,c) = 1;
						coeffs.at(r).at(c) = 1;

					else 
						coeffs[r][c] = coeffs[r-1][c-1] + coeffs[r-1][c]; 

				}
				if (done) break;
			}
		} // end constructor

		int getvalue(int i, int j)	{  return (coeffs[i][j]); };

		// print out the coeffecient array
		void print() { 
			for (int r=0; r<rows; r++ )  {
				// cout << r << string(((rows-r)),' '); // leading spaces per row 
				cout << string(((rows-r)),' '); // leading spaces per row 
				for (int c=0; c<=r; c++) {
					cout << getvalue(r,c) << " "; 
				}
				cout << endl;
			}
		};

		// prints out pretty star patterns
		void print(int m) 	{ 
			for (int r=0; r<rows; r++ )  {
				// cout << r << string(((rows-r)),' '); // leading spaces per row 
				cout << string(((rows-r)),' '); // leading spaces per row 
				for (int c=0; c<=r; c++) {
					if ((getvalue(r,c)%m)) 
						cout << "* "; 
					else	
						cout << "  ";
				}
				cout << endl;
			}
		};
};

int main () {

	int rows,modulus;

	cout << "Triangle rows : "; cin >> rows; cout << endl;
	cout << "Modulus: "; cin >> modulus; cout << endl; 

	while ( modulus != 0 ) {

		Pascal	triangle(rows);	// create the coeffecients triangle
		// triangle.print();	// print the coeffecients triangle
		triangle.print(modulus);		// print Pascal's triangle

		cout << "Next m : " ; cin >> modulus ; cout << endl;

	}

	return 1;
}
