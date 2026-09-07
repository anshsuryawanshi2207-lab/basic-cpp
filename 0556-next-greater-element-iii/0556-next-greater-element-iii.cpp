class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);
        int i = s.size()-2;
    // finding  the pivot element
    while(i>=0&&s[i]>=s[i+1]){
        i--;
    }
    //No greater permutation exists
    if(i<0){
        return -1;
    }
    int j = s.size()-1;

    while(s[j]<=s[i]){
        j--;
    }
    swap(s[i],s[j]);//  swapping of the element has been completed 
    reverse(s.begin()+i+1,s.end());

    // convert back to integer
    long long ans=stoll(s);
    if(ans>INT_MAX){
        return -1;
    }

    return (int) ans;
    }
};