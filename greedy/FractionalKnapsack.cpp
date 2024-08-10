#include "FractionalKnapsack.hpp"

#include <algorithm>

using namespace std;

bool compareProfit(const pair<int, int> &currItem, const pair<int, int> &nextItem) {
    if((double(currItem.second) / double(currItem.first)) > (double(nextItem.second) / double(nextItem.first))) {
        return true;
    } else {
        return false;
    }
}

double findMaxProfit(vector<int> weight, vector<int> profit, int capacity) {
    vector<pair<int, int>> items;
    
    for(size_t i = 0; i < weight.size(); i++) {
        items.push_back(make_pair(weight[i], profit[i]));
    }
    
    sort(items.begin(), items.end(), compareProfit);
    
    double remainingCapacity = capacity;
    double totalProfit= 0.0;
    
    for(size_t i = 0; i < items.size(); i++) {
        if(remainingCapacity - items[i].first > 0) {
            remainingCapacity -= items[i].first;
            totalProfit += double(items[i].second);
        } else {
            totalProfit += remainingCapacity * ((double(items[i].second)) /  (double(items[i].first)));
            break;
        }
    }
    
    return totalProfit;
}

