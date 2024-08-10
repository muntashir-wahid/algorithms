#include <iostream>
#include <vector>


//#include "JobSequencing.hpp"
#include "FractionalKnapsack.hpp"

using namespace std;


int main()
{
    vector<int> weight {45, 30, 65, 15, 40};
    vector<int> profit {180, 210, 315, 95, 210};
    
    cout << findMaxProfit(weight, profit, 135) << endl;

	cout << endl;
	return 0;
}
