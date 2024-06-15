class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
             sort(begin(seats), end(seats));
        sort(begin(students), end(students));
   int move =  0 ;

                int a  = seats.size();

                for(int i = 0; i<a; i++){
                    move += abs(seats[i]-students[i]);

                }
                return move;

    }
};
