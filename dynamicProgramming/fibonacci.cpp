#include <iostream>
#include <vector>

#include "fibonacci.hpp"

long long executedRec = 0;
long long fibonacci(int n) {
    std::cout << "Executed: " << ++executedRec << " times" << std::endl;
    if(n <= 2) {
        return 1;
    }
    
    return fibonacci(n - 1) + fibonacci(n - 2);
}

long long fibonacciTabu(int n) {
    if(n <= 2) {
        return 1;
    }
    
    long long *fibNumbers = new long long[n];
    fibNumbers[0] = 0;
    fibNumbers[1] = 1;
    fibNumbers[2] = 1;
    
    for(int i = 3; i <= n; i++) {
       fibNumbers[i] = fibNumbers[i - 1] + fibNumbers[i - 2]; 
    }
    
    long long result = fibNumbers[n];
    delete [] fibNumbers;
    
    return result;
}


long long executed = 0;

long long fibonacciMemo(int n) {
    std::cout << "Executed: " << ++executed << " times" << std::endl;
    static std::vector<long long> cached {0, 1, 1};
    
    if(static_cast<size_t>(n) < cached.size()) {
        return cached.at(n);
    }
    
    long long fib = fibonacciMemo(n - 1) + fibonacciMemo(n - 2);
    cached.push_back(fib);
    
    return cached.at(n);
    
    return 0;
}


