class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> freq;

        for(int x:nums)
    {
        if(x%2==0){
            freq[x]++;
        }
    }
    int ans=-1;
    int max_freq=0;
    for(auto it:freq){
        int num =it.first;
        int count = it.second;

        if(count>max_freq||(count==max_freq&&(ans==-1||num<ans))){
            max_freq=count;
            ans=num;
        }

    }
    return ans;
     }
};