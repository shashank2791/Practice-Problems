/*
Given an integer n, using phone keypad find out all the possible strings that can be
 made using digits of input n.
Return empty string for numbers 0 and 1.
Note : 1. The order of strings are not important.
2. Input and output has already been managed for you. You just have to populate
 the output array and return the count of elements populated in the output array.
Input Format :
Integer n
Output Format :
All possible strings in different lines
Constraints :
1 <= n <= 10^6
Sample Input:
23
Sample Output:
ad
ae
af
bd
be
bf
cd
ce
cf*/

#include <iostream>
#include <string>
using namespace std;
string helper(int i)
{
    string st="";
    if(i==2)
    {
        st="abc";
        return st;
    }
    if(i==3)
    {
        st="def";
                return st;

    }
    if(i==4)
    {
        st="ghi";
            return st;

    }
    if(i==5)
    {
        st="jkl";
                return st;

    }
    if(i==6)
    {
        st="mno";
                return st;

    }
    if(i==7)
    {
        st="pqrs";
                return st;

    }
    if(i==8)
    {
        st="tuv";
                return st;

    }

        st="wxyz";
                return st;


}

int keypad(int num, string output[]){
    if(num==0||num==1)
    {
        output[0]="";
        return 1;
    }
    int smalloutputsize=keypad(num/10,output);
    string s=helper(num%10);
    int k=0;
    string smalloutput[smalloutputsize];
    for(int i=0;i<smalloutputsize;i++)
    {
        smalloutput[i]=output[i];
    }
   for(int i=0;i<s.size();i++)
   {
       for(int j=0;j<smalloutputsize;j++)
       {
           output[k]=smalloutput[j]+s[i];
           k++;
       }
   }
    return k;
}

int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
