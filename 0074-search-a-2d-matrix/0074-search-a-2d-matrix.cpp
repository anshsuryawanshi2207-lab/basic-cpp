class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
     int m=mat.size();
     int n=mat[0].size();
     // first binary search in the rows then we apply in a particular targeted row

     int strow=0;
     int enrow=m-1;
     while(strow<=enrow){
        int mid_row= strow+(enrow-strow)/2;
        if(mat[mid_row][0] <= target && target <= mat[mid_row][n-1]){
            int i = mid_row;
            int stc=0;
            int enc=n-1;
            while(stc<=enc){
                int mic=stc+(enc-stc)/2;
                if(mat[mid_row][mic]==target)
                return true;
                if(mat[mid_row][mic]<target)
                stc=mic+1;
                else
                enc=mic-1;
            }
        }

        if(mat[mid_row][n-1]<target){
            strow=mid_row+1;
        }
        else{
            enrow=mid_row-1;
        }

        
     }
     
     return false;

    }
};