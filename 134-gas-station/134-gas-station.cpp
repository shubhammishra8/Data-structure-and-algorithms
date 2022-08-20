class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
          int min = numeric_limits<int>::max();
        int total = 0;
        int index = 0;
        for (int i=0; i<gas.size(); i++) {
            total += gas[i] - cost[i];
            if (total < min) {
                min = total;
                index = i;
            }
        }
        return total >= 0 ? (index+1) % gas.size() : -1;
    }
};