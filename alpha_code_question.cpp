/*
Alice and Bob need to send secret messages to each other and are discussing ways to encode their
 messages:
Alice: “Let’s just use a very simple code: We’ll assign ‘A’ the code word 1, ‘B’ will be 2, and so
on down to ‘Z’ being assigned 26.”

Bob: “That’s a stupid code, Alice. Suppose I send you the word ‘BEAN’ encoded as 25114. You could
decode that in many different ways!”

Alice: “Sure you could, but what words would you get? Other than ‘BEAN’, you’d get ‘BEAAD’, ‘YAAD’,

‘YAN’, ‘YKD’ and ‘BEKD’. I think you would be able to figure out the correct decoding. And why would
 you send me the word ‘BEAN’ anyway?”

Bob: “OK, maybe that’s a bad example, but I bet you that if you got a string of length 5000 there would
 be tons of different decodings and with that many you would find at least two different ones that would
  make sense.”

Alice: “How many different decodings?”

Bob: “Jillions!”
For some reason, Alice is still unconvinced by Bob’s argument, so she requires a program that will
 determine how many decodings there can be for a given string using her code.
Input
Input will consist of multiple input sets. Each set will consist of a single line of at most 5000
digits representing a valid encryption (for example, no line will begin with a 0). There will be no
spaces between the digits. An input line of ‘0’ will terminate the input and should not be processed.
Output
For each input set, output the number of possible decodings for the input string. Print your answer
 taking modulo "10^9+7"
Sample Input:
25114
1111111111
3333333333
0
Sample Output:
6
89
1



*/


#include <bits/stdc++.h>
using namespace std;
long long alpha(string str)
{
    int arr[str.length()+1]={0};
    arr[0]=1;
    arr[1]=1;
    int i=2;
        int m=pow(10,9)+7;

    for(;i<=str.length();i++)
    {
        if(str[i-1]=='0')
        {
        }
        else
        {arr[i]+=arr[i-1];
        }
        if(((str[i-2]-'0')*10+(str[i-1]-'0'))<=26&&str[i-2]!='0')
        {
            arr[i]+=arr[i-2];
        }
        // cout<<arr[i]<<" ";
        arr[i]=arr[i]%m;
    }
        return (arr[str.length()]%m);
}
int main()
{
    string str;
    while(true)
    {
        cin>>str;
        if(str=="0")
        {
            break;
        }
        // cout<<str.length();
        int output=alpha(str);
        cout<<output<<endl;
    }
    return 0;
}




