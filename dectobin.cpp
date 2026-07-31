#include <iostream>
using namespace std;
int dectobin(int num)
{   int ans=0;
    int pow=1;
    while(num>0){
        int rem =num%2;
        num=num/2 ;
         ans += rem * pow ;
        pow=pow*10;
}
return ans;

}
int main() {
    int num;
    cout<<"enter the decimal number";
    cin>>num;

    int res = dectobin(num);
    cout<<res;

    return 0;

}