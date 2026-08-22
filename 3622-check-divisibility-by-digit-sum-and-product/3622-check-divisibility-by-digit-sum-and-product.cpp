class Solution {
public:
    bool checkDivisibility(int n) {
        int original =n;
        int prod=1;
        int sum=0;
        while(n>0)
        {   
            int dig = n%10;
                sum += dig;
                prod *= dig;
                n = n/10;
        }
        if ( original % ( sum + prod ) == 0)
        return true;

        else
        return false;
    }
};