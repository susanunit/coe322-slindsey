/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2016-2024 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** pascal2.cxx : pascal triangle program with dynamicstorage
 ****
 ****************************************************************/

#include <cmath>

#include <iostream>
using std::cin, std::cout;
#include <iomanip>
using std::setw;
#include <sstream>
using std::stringstream;

#include <string>
using std::string;

#include <vector>
using std::vector;

//answersnippet pascalstore
class dynamic_storage {
private:
  // data can stay private
  // because all we need are the methods
  int nrows;
  vector<int> array;
public:
  // bonus points for delegating constructor
  dynamic_storage()
    : dynamic_storage(1) {};
  dynamic_storage( int n ) 
    : nrows(n), array( space_for_rows(n) ) {};
  int space_for_rows(int i) { return i*(i+1)/2; };
  int get(int row,int col) {
    return array.at( space_for_rows(row-1) + (col-1) );
  };
  void set(int row,int col,int value) {
    if (row>nrows)
      array.resize( space_for_rows(row) );
    array.at( space_for_rows(row-1) + (col-1) ) = value;
  };
};

class pascal : private dynamic_storage {
private:
  int last_filled_row{0};
public:
  pascal( int n )
    : dynamic_storage(n) {
    for ( int row=last_filled_row+1; row<=n; ++row )
      fill_row(row);
    last_filled_row = n;
  };
  // everything 1-based
  void fill_row(int row) {
    for (int col=1; col<=row; ++col) {
      int value;
      if (col==1 || col==row)
	value = 1;
      else
	value = get(row-1,col-1)+get(row-1,col);
      set(row,col,value);
    }
  }
  int get_value( int row,int col ) {
    if (row>last_filled_row)
      for ( int fill=last_filled_row+1; fill<=row; ++fill )
	fill_row(fill);
    return get(row,col);
  };
  string stringify() {
    stringstream ss;
    for ( int row=1; row<=last_filled_row; ++row )
      ss << row_as_string(row) << '\n';
    return ss.str();
  };
  string row_as_string( int row ) {
    stringstream ss;
    for ( int col=1; col<=row; ++col ) {
      ss << get(row,col);
      if (col<row) ss << " ";
    }
    return ss.str();
  };
};

int main() {
  int size;
  cout << "What size?";
  cin >> size; cout << '\n';
  pascal triangle(size);
  cout << triangle.stringify() << '\n';
  
  while ( true ) {
    if ( int row=[]() { int row; cin >> row; return row; }();  row!=0 ) {
      cout << triangle.get_value( row,row/2 ) << '\n';
    } else break;
  }
		 

  return 0;
}

