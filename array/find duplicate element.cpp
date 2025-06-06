#include <unordered_set>
int findDuplicate(vector<int> &arr) 
{
    unordered_set<int> seen;
    for(int num :arr){
        if(seen.count(num)) return num;
        seen.insert(num);
    }
    return -1;
}
