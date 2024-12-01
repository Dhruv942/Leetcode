// Hash Table Soln
// Time: O(N)
// Space: O(N)

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> uset;
        for(int& i:arr){
            if(uset.count(2*i) || (!(i&1) && (uset.count(i/2))))
                return true;
            uset.insert(i);
        }
        return false;
    }
};
