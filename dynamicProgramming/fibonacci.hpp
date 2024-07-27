#ifndef _FIBONACCI_H_
#define _FIBONACCI_H_

/*
 
Fibonacci


0   1   1   2   3   5   8   13  21  34  55  .   .   .   .   .   .   .

|   |   |   |   |   |   |   |   |   |   |   .   .   .   .   .   .   .

0   1   2   3   4   5   6   7   8   9   10  .   .   .   .   .   .   .   

  
*/



// Fibonacci using normal resucsion O(2^n)
long long fibonacci(int n);

// Fibonacci using memoization O(n)
long long fibonacciMemo(int n);

// Fibonacci using tabulation O(n)
long long fibonacciTabu(int n);




#endif // _FIBONACCI_H_
