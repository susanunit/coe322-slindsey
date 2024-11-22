/*
Exercise 3
A perfect number is the sum of its own divisors: 6=1+2+3
Output the perfect numbers.
(at least 4 of them)
Use only ranges and algorithms, no explicit loops.
1. Write a lambda expression to compute the sum of the factors of a number
2. Use iota to iterate over numbers: if one is equal to the sum of its factors, print it out.
3. Use filter to pick out these numbers.
*/

#include <ranges>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

// namespace rng = std::ranges;

int main () {

	std::vector<float> elements{.5f,1.f,1.5f}; 

	auto sum_of_elts = std::accumulate( elements.begin(), elements.end(), 0.f ); 

	std::cout << "Sum of elements: " << sum_of_elts << '\n';

	return 1;

}



