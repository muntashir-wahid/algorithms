#include <iostream>
#include <vector>

#include "JobSequencing.hpp"

using namespace std;


int main()
{
    vector<vector<int>> jobList {{3, 5}, {3, 1}, {2, 20}, {2, 15}, {1, 10}};
    
    maxProfit(jobList);
    
    
    
	cout << endl;
	return 0;
}
