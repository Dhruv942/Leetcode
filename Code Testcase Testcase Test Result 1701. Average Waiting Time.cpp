class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int total = customers[0][0];
        double wait  = 0;
        for (int i  = 0 ;i < customers.size();i++){
            if(customers[i][0]<total){
                total += customers[i][1];
                wait +=total - customers[i][0];
            }
            else{
                total = customers[i][0] + customers[i][1];
                wait += customers[i][1];
            }
        }
        return wait/(customers.size());
    }
};
