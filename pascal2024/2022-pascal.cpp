// Write a class pascal so that pascal(n) is the object containing n rows of the above coefficients. 
//
// Write a method get(i,j) that returns the (i,j) coefficient.
// Write a method print that prints the above display.
// Write a method print(int m) that prints a star if the coefficient
// modulo m is nonzero, and a space otherwise.
// *
// **
// ** **** **
// ** ** **** ******** ** ** **
//
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
		vector<vector<int>> coeffs;

	public:
		Pascal (int n) { // begin constructor
			rows = n; 
			coeffs = vector<vector<int>> (n, vector<int>(n, 0));  // 

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

		int get(int i, int j)	{  return (coeffs[i][j]); };

		// print out the coeffecient array
		void print() { 
			for (int r=0; r<rows; r++ )  {
				// cout << r << string(((rows-r)),' '); // leading spaces per row 
				cout << string(((rows-r)),' '); // leading spaces per row 
				for (int c=0; c<=r; c++) {
					cout << get(r,c) << " "; 
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
					if ((get(r,c)%m)) 
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

	//cout << "Triangle rows & modulus: "; cin >> rows >> m; cout << endl; 
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
