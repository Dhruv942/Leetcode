class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
          int n = people.size();  
 sort(begin(people) ,end (people));
           int boat = 0;
          int i =0;
          int j = n-1;

          while(i<=j){
            if(people[j]+people[i] <= limit){
                i++;
                j--;
               boat+=1;
            }else{
                j--;
                boat+=1;
            }
          }
          return boat;
        
    }
};
