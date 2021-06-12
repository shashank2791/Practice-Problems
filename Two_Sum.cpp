/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.*/

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> m;
	vector<int> v1;
        int n = nums.size();
	for (int i=0;i<n;i++) {
		int t = target - nums[i];
	if (m.find(t)!=m.end()) {
            v1.push_back(m[t]);
			v1.push_back(i);			
			return v1;
		}
		m[nums[i]] = i;
	}
	return v1;
 }

int main(){
	vector<int> nums;
	int target;
	int n;
	cin>>n>>target;
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		nums.push_back(t);
	}
	vector<int> res = twoSum(nums,target);
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<" ";
	}

	return 0;
}