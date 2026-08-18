class Solution {
public:
    void shiftleft(vector <int> &nums,int indx){
        int n = nums.size();
        for(int i=indx;i<n-1;i++){
            nums[i]=nums[i+1];

        }
        nums.pop_back();
    }
    void mergepairs(vector<int> &nums){
        int n = nums.size();
        int minsum =INT_MAX;
        int minindx=-1;
        for(int i=0;i<n-1;i++){
            if(nums[i]+nums[i+1]<minsum){
                minsum= nums[i]+nums[i+1];
                minindx=i;
            }

        }

        if(minindx==-1){
            return;
        }
        nums[minindx]=minsum;
        shiftleft(nums,minindx+1);
    }

    bool issorted(vector<int> &nums){
        int n = nums.size();
        for(int i =0;i<n-1;i++){
            if(nums[i+1]<nums[i]){
                return false;
            }
        }
        return true;
    }
    int minimumPairRemoval(vector<int>& nums) {
        int result=0;
        while(!issorted(nums)){
            mergepairs(nums);
            result++;
        }
        return result;
    }
};