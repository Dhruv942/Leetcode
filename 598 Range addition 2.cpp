class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if(ops.size()==0)
        return m*n;
        int i,j,row=INT_MAX,col=INT_MAX;
        for(i=0;i<ops.size();i++){
            row=min(row,ops[i][0]);
            col=min(col,ops[i][1]);
        }
        return row*col;
    }
};
