#include <iostream>

#include "CountSort.hpp"

using namespace std;

int main()
{
    int size = 10;
    int nums[10] {6, 3, 9, 10, 15, 6, 8, 12, 3, 6};
    
    cout << "Before sorting: ";
    for(int i = 0; i < size; i++) {
        cout << nums[i] << ", ";
    }
    cout << endl;
    
    countSort(nums, size);
    
    cout << "After sorting: ";
    for(int i = 0; i < size; i++) {
        cout << nums[i] << ", ";
    }
    cout << endl;
    
    
	cout << endl;
	return 0;
}
