/*
Given an integer n, using phone keypad find out and print all the possible strings
 that can be made using digits of input n.
Note : The order of strings are not important. Just print different strings in new lines.
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
cf
*/


#include <iostream>
#include <string>


using namespace std;

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
void printkeypad(int num,string output)
{
    if(num==0)
    {
        cout<<output<<endl;
        return;
    }
    string s=helper(num%10);
    for(int i=0;i<s.size();i++)
    {
        printkeypad(num/10,s[i]+output);
    }
}
void printKeypad(int num){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */
    printkeypad(num,"");

}
int main(){
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}
