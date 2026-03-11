class Solution {
public:
   void setZeroes(vector<vector<int>>& matrix) {

    set<int> zeroes1, zeroes2;
    int m = matrix.size();
int n = matrix[0].size();

    for(int i = 0; i < matrix.size(); i++)
    { for(int j = 0; j < matrix[0].size(); j++)
        { if(matrix[i][j] == 0)
            {zeroes1.insert(i);
            zeroes2.insert(j);}}}
            for( int i=0;i<m;i++)
            {for( int j=0;j<n;j++)
            {
                if( zeroes1.count(i)||zeroes2.count(j))
                { matrix[i][j]=0;}

            }
            }
}
};