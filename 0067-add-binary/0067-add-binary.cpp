class Solution {
public:
    string addBinary(string a, string b) {
        // if length of a is greater
        if(a.length()>b.length()){

            int num0s=a.length()-b.length();
            for(int i=0;i<num0s;i++) 
            b='0'+b;
        }

        // if length of b is greater than a
        if(b.length()>a.length()){

            int numm0s=b.length()-a.length();
            for(int i =0;i<numm0s;i++)
            a='0'+a;

        }

        string sum="";
        int carry=0;

        for(int i=a.length()-1;i>=0;i--){
            int dig1=b[i]-'0';
            int dig2=a[i]-'0';
            int d=0;


            // 4 cases 
            // 0+0
            if(dig1==0&&dig2==0){
                if(carry==0)
                {
                    d=0;
                    carry=0;
                }
                else{
                    // 0+0+1
                    d=1;
                    carry=0;
                }
            }

            //  0 and 1

            if(dig1==0&&dig2==1){
                if(carry==0){
                    d=1;
                    carry=0;
                }

                else{
                    // 0+1+1
                    d=0;
                    carry=1;
                }
                }

                if(dig1==1&&dig2==0){


                    if(carry==0){
                        d=1;
                        carry=0;
                    }
                    else{
                        d=0;
                        carry=1;
                    }

                }

                if(dig1==1&&dig2==1){
                    if(carry==0){
                        d=0;
                        carry=1;
                    }
                    else{
                        d=1;
                        carry=1;
                    }
                }

                sum =(char)('0'+d) +sum;
        
            



        }
        if(carry==1) sum = '1'+ sum;


                return sum;
    }
};