// leetcode_1217.cpp
class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int even = 0;
        int odd = 0;
        
        int len = position.size();
        
        for (int i = 0; i < len; i++){
            if (position[i] % 2 == 0)
                even += 1;
            else 
                odd += 1;
        }
        
        return min(even, odd);
        
    }
};