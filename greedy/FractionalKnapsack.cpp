#include <algorithm>

#include "FractionalKnapsack.hpp"



bool compareProfit(const std::vector<int> &firstItem, const std::vector<int> &secondItem) {
    if(double(firstItem[0] / firstItem[1]) > double(secondItem[0] / secondItem[1])) {
        return true;
    } else {
        return false;
    }
}


double knapSack(std::vector<std::vector<int>> &items, int capacity) {
    std::sort(items.begin(), items.end(), compareProfit);
    
    int remainingCapacity = capacity;
    double profit = 0;
    
    for(size_t i = 0; i < items.size(); i++) {
        if(remainingCapacity < items[i][1]) {
            profit += double(remainingCapacity) * (double(items[i][0] / items[i][1]));
            break;
        } else {
            profit += items[i][0];
            remainingCapacity -= items[i][1];
            
        }
    }
        
    return profit;
}


