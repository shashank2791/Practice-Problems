/*
hacker rank question

Your goal is to find the number of ways to construct an array such that consecutive positions
contain different values.

Specifically, we want to construct an array with  elements such that each element between  and
 , inclusive. We also want the first and last elements of the array to be  and .

Given ,  and , find the number of ways to construct such an array. Since the answer may be large,
only find it modulo .

For example, for , , , there are  ways, as shown here:

image

Complete the function countArray which takes input ,  and . Return the number of ways to construct
the array such that consecutive elements are distinct.

*/

#include <bits/stdc++.h>

using namespace std;
#define temp 1000000007
vector<string> split_string(string);

// Complete the countArray function below.
long countArray(int n, int k, int x) {
    // Return the number of ways to fill in the array.
    long onecount = 1;
    long nononecount = 0;
    for(int i =1;i<n;i++)
    {
        long prev_one_count = onecount;
        onecount = (nononecount*(k-1))%temp;
        nononecount = (prev_one_count + ((nononecount)*(k-2))%temp)%temp;
    }
    if(x==1)
    {
        return onecount;
    }
    else{
        return nononecount;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nkx_temp;
    getline(cin, nkx_temp);

    vector<string> nkx = split_string(nkx_temp);

    int n = stoi(nkx[0]);

    int k = stoi(nkx[1]);

    int x = stoi(nkx[2]);

    long answer = countArray(n, k, x);

    fout << answer << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

