/*
Hasan has finally finished his final exams and he decided to go in a trip among cities in Syria.
There are N cities in Syria and they are numbered from 1 to N, each city has coordinates on plane,
 i-th city is in (Xi, Yi).
Hasan is in first city and he wants to visit some cities by his car in the trip but the final
destination should be N-th city and the sequence of cities he will visit should be increasing in index
(i.e. if he is in city i he can move to city j if and only if i < j ).
Visiting i-th city will increase Hasan's happiness by Fi units (including first and last cities),
 also Hasan doesn't like traveling too much, so his happiness will decrease by total distance traveled
  by him.
Help Hasan by choosing a sequence of cities to visit which maximizes his happiness.
Input format:
First line contain integer N.
Next N lines contains three integers each, i-th line contains coordinates of i-th city Xi, Yi and Fi.
Output format:
Output one number rounded to 6 digits after floating point, the maximum possible happiness Hasan can get.
 Note: If answer is 2 print 2.000000
Constraints:
1 <= N <= 3,000
0 <= Xi, Yi, Fi <= 100,000
Sample Input
3
0 0 1
3 1 1
6 0 9
Sample Output
4.675445
*/

#include <stdio.h>
#include <math.h>

int main()
{
	double n,i,j,k,l,m;
	double *arrx, *arry, *arrs, *res;
	scanf(" %lf ", &n);
	arrx = new double [3000];
	arry = new double [3000];
	arrs = new double [3000];
	res =new double [3000];
	for(i=0; i<n; i++){
		scanf(" %lf %lf %lf", &k, &l, &m);
		arrx[(int)i] = k;
		arry[(int)i] = l;
		arrs[(int)i] = m;
	}

	//printf("n=%lf\n", n);

//	for(i=0; i<n; i++){
//
//		printf(" %lf %lf %lf\n", arrx[(int)i], arry[(int)i], arrs[(int)i]);
//
//	}

	res[0] = arrs[0];
	double max, dist, t;
	for(i=1; i<n; i++){
		max = -100000000;
		for(j=0; j<i; j++){

			dist = sqrt(pow(arrx[(int)i]-arrx[(int)j], 2) + pow(arry[(int)i]-arry[(int)j], 2));
			if(res[(int)j]-dist > max){
				max = res[(int)j]-dist;
				//t = arrs[(int)j];
			}
			//printf("x = %lf %lf %lf\n", dist, res[(int)j]-dist, max);
		}
		res[(int)i] = max + arrs[(int)i];
		//printf("x = %lf %lf %lf\n", dist, res[(int)i], max);
	}
	printf("%.6f\n", res[(int)n-1]);
    delete [] arrx  ;
    delete [] arry  ;
    delete [] arrs  ;
    delete []  res ;
    return 0;
}
