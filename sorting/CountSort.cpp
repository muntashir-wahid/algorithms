#include "CountSort.hpp"

using namespace std;

void countSort(int* arr, int size) {
    int max = arr[0];
    const int INITIAL_VALUE = 0;
    
    // Find the maximun element in the array
    for(int i = 0; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    
    // Create an array with the max element size with value 0;
    int *count = new int[max + 1] {INITIAL_VALUE};
    
    for(int i = 0; i < size; i++) { 
        count[arr[i]]++;
    }
    
    int j = 0;
    int k = 0;
    
    while(j <= max) {
        if(count[j] > INITIAL_VALUE) {
            arr[k] = j;
            k++;
            count[j]--;
        } else {
            j++;
        }
    }
    
    delete [] count;
    
}