class Solution {

    private:

    vector<vector<int>> ways;

    int ncr(int row,int col)
    {
        if(row==col || row==0 || col==0)
        {
            return 1;
        }

        if(ways[row][col]!=-1)
        {
            return ways[row][col];
        }

        return ways[row][col] = ncr(row-1,col-1)+ncr(row-1,col);
    }


public:
    vector<vector<int>> generate(int numRows) {
          ways.assign(numRows,vector<int>(numRows,-1));

          vector<vector<int>> result;

          for(int row=0;row<numRows;row++)
          {
                vector<int> currRow;

                for(int col=0;col<=row;col++)
                {
                    currRow.push_back(ncr(row,col));
                }

                result.push_back(currRow);
          }

          return result;
    }
};