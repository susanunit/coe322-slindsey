/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2018-2024 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** actuple.cpp : abc formula
 ****
 ****************************************************************/

#include <iostream>
using std::cout;
#include <cmath>
#include <string>
using std::string;

#include <optional>
using std::optional;

#include <tuple>
using std::pair, std::make_pair, std::tuple, std::make_tuple;
#include <variant>
using std::variant, std::monostate;

using quadratic = tuple<double,double,double>;

double discriminant ( quadratic q ) {
  auto [a,b,c] = q;
  return b*b-4*a*c;
}

// say either "one" or "two", or say nothing
optional<string> how_many_roots( quadratic q ) {

	auto d = discriminant ( q );
	if (d<0) // no solution
		return {};
	else if ( d>0 ) // two solutions
		return "two";
	else 
		return "one";
};

variant<monostate, double, pair<double, double>> abc_cases ( quadratic q ) {

	auto d = discriminant(q); 

	if (d<0)
		return monostate{}; 
	else {
		auto [a,b,c] = q; 
		if (d==0)
			return -b/(2*a); 
		else
			return make_pair( (-b+std::sqrt(d))/(2*a), (-b-std::sqrt(d))/(2*a) ); }
};



// assuming there are two roots, return as pair
pair<double,double> abc_roots( quadratic q ) {
	auto [a,b,c] = q;
	auto d = discriminant(q);

	return make_pair( (-b+std::sqrt(d))/(2*a), (-b-std::sqrt(d))/(2*a) );
};


int main() {

  // polynomial: x^2 - 2
  auto sunk = tuple<double,double,double>{1.,0.,-2};
  // auto sunk = quadratic(1.,0.,-2);

  auto [a,b,c] = sunk;
  cout << "coefficients: " << a << "," << b << ',' << c << '\n';

  auto d = discriminant( sunk );
  cout << "discriminant: " << d << '\n';

  auto num_solutions = how_many_roots(sunk);
  if ( not num_solutions.has_value() )
    cout << "none\n";
  else
    cout << num_solutions.value() << '\n';

  auto roots = abc_roots( sunk );
  auto [xplus,xminus] = roots;
  cout << xplus << "," << xminus << '\n';

  auto root_cases = abc_cases( sunk );
  switch (root_cases.index()) {
	case 0 : cout << "No roots\n"; break;
	case 1 : cout << "Single root: " << std::get<1>(root_cases); break;
	case 2 : {
    	auto xs = std::get<2>(root_cases);
    	auto [xp,xm] = xs;
    	cout << "Roots: " << xp << "," << xm << '\n';
  	} ; break;
  }

  return 0;
}


