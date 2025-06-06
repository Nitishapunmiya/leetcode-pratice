#include<unordered_set>
#include <vector>

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_set<int> seen;
        vector<int> duparr;
        for(int num : nums){
            if(seen.count(num)){
                duparr.push_back(num);
            }
            else{
                seen.insert(num);
            }
        }
        return duparr;

        
    }
};
