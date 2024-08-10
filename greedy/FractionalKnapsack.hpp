#ifndef _FRACTIONAL_KNAPSACK_H_
#define _FRACTIONAL_KNAPSACK_H_

#include <vector>
#include <utility>

bool compareProfit(const std::pair<int, int> &currItem, const std::pair<int, int> &nextItem);
double findMaxProfit(std::vector<int> weight, std::vector<int> profit, int capacity);


#endif // _FRACTIONAL_KNAPSACK_H_
