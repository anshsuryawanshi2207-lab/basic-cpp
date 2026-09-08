class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int  n = heights.size();
        vector<int>left(n,0);
        vector<int> right(n,0);
        stack<int>s1;
        stack<int>s2;
        int ans=0;

        // right smaller
        for(int i =n-1;i>=0;i--){
            while(s1.size()>0 && heights[s1.top()]>=heights[i]){
                s1.pop();
            }

            if(s1.empty())
            right[i]=n;
            else{
                right[i]=s1.top();
            }
            s1.push(i);
        }

        // left smaller
        for(int i=0;i<n;i++){
            while(s2.size()>0&&heights[s2.top()]>heights[i]){
                s2.pop();
            }
            if(s2.empty()){
                left[i]=-1;
            }
            else{
                left[i]=s2.top();
            }

            s2.push(i);
            
        }

        for(int i=0;i<n;i++){
            int cur=heights[i]*(right[i]-left[i]-1);
            ans=max(cur,ans);

        }

        return ans;
    }
};