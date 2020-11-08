/*
A thief wants to loot houses. He knows the amount of money in each house.
He cannot loot two consecutive houses. Find the maximum amount of money he can loot.
Input Format
Line 1 : An integer N
Line 2 : N spaced integers denoting money in each house
Output Format
 Line 1 : Maximum amount of money looted
Input Constraints
1 <= n <= 10^4
1 <= A[i] < 10^4
Sample Input :
6
5 5 10 100 10 5
Sample Output 1 :
110
*/

#include <iostream>
#include "solution.h"
using namespace std;

int getMaxMoney(int arr[], int n){

  int incl = arr[0];
  int excl = 0;
  int excl_new;
  int i;

  for (i = 1; i < n; i++)
  {

     excl_new = (incl > excl)? incl: excl;


     incl = excl + arr[i];
     excl = excl_new;
  }


   return ((incl > excl)? incl : excl);

}

int main(){
    int n;
    cin >> n;
    int arr[10000];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << getMaxMoney(arr, n);
}

