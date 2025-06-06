#include <bits/stdc++.h> 
#include <vector>
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector <int> common;
	int i=0;
	int j=0;

	while(i < n && j<m){
		if(arr1[i]==arr2[j]){
			common.push_back(arr1[i]);
			i++;
			j++;
	}
		else if (arr1[i]>arr2[j]){
			j=j+1;
		}
		else{
			i=i+1;
		}
		}

	return common;
}
