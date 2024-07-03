#include <iostream>
#include <algorithm>

#include "JobSequencing.hpp"


bool compJobOnProfit(const std::vector<int> &firstJob, const std::vector<int> &secondJob) {
    return firstJob[1] > secondJob[1];
}

int maxProfit(std::vector<std::vector<int>> &jobList) {
    int totalProfit = 0;
    
    // Sort the jobs based on higher profit
    std::sort(jobList.begin(), jobList.end(), compJobOnProfit);
    
    
    int maxDeadLine = 0;
    for(const auto &job:jobList) {
        if(job[0] > maxDeadLine) {
            maxDeadLine = job[0];
        }
    }
    
    std::vector<int> jobSequences(maxDeadLine, -1);
    
    for(int i = 0; i < jobList.size(); i++) {
        int slot = jobList[i][0] - 1;
        
        for(int j = slot; j >= 0; j--) {
            if(jobSequences[j] < 0) {
                jobSequences[j] = i;
                break;    
            }
        }
        
        /*
        // If the required slot is empty. Book the slot
        if(jobSequences[slot] < 0) {
            jobSequences[slot] = i;
        } else {
        // Find any available slot before
        // If found book that slot
            for(int j = slot - 1; j >= 0; j--) {
                if(jobSequences[j] < 0) {
                    jobSequences[j] = i;
                    break;
                }
            }
        }
        */
    }
    
    for(auto index: jobSequences) {
        totalProfit += jobList[index][1];
    }
    
    std::cout << "Total profit: " << totalProfit << std::endl;
    
    

    
    return 0;
}

