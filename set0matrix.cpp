class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> row;
        vector<int> column;
        unsigned int m=matrix.size();
        unsigned int n=matrix[0].size();
        row.resize(m);
        column.resize(n);
        for(unsigned i=0;i<m;++i){
            row[i]=1;
        }
        for(unsigned j=0;j<n;++j){
            column[j]=1;
        }
        for(unsigned i=0;i<m;++i){
            for(unsigned j=0;j<n;++j){
                if(matrix[i][j]==0){
                    row[i]=0;
                    column[j]=0;
                }
            }
        }
        vector<int> zerorow(n,0);
        for(unsigned i=0;i<m;++i){
                if(row[i]==0){
                    matrix[i]=zerorow;
                }
        }
        for(unsigned i=0;i<m;++i){ 
             for(unsigned j=0;j<n;++j){
                 if(column[j]==0){
                     matrix[i][j]=0;
                } 
             }     
        } 

    }
};
