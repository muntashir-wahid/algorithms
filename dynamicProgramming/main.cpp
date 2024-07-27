#include <iostream>

#include "fibonacci.hpp"

using namespace std;



int main()
{
    int number = 30;
    
//    cout << "Fibonacci of " << number << " is (using resursion): " << fibonacci(number) << endl;
    cout << "Fibonacci of " << number << " is (using memoization): " << fibonacciMemo(number) << endl;
//    cout << "Fibonacci of " << number << " is (using tabulation): " << fibonacciTabu(number) << endl;

	cout << endl;
	return 0;
}
