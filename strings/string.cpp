#include <iostream>
#include<vector>
#include <cstring>
using namespace std;

int main() {
    // char str[]={'a','b','c','\0'};
    // int arr []= {1,2,30};
    // cout<< arr << endl;
    // cout << strlen(str) << endl;

    char str[100];
    
    cout<<"enter the string value"<<endl;

    // cin>>str;    this will store one single word 
    cin.getline(str,100)//  last wala hai delimiter this is a delimiter symbol agar ye character dikha too khatam ho jayegi input);


    cout<<"output : "<< str <<endl;

    //  concatenation
    string str1= "dsa ";
    string str2= " in cpp ";

    string str3 = str1+ str2;
    cout<<str3<< endl;
    return 0;
}