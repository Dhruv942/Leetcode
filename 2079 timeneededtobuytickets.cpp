class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
          int time =0;
          int i = 0;
          while(true){
            for(i =0; i<tickets.size(); i++){
                if(tickets[k]==0){
                    return time;
                }
                else if(tickets[i]>0){
                    tickets[i]--;
                    time++;
                }
            }
            i =0;
          }
          return time;
    }
};
