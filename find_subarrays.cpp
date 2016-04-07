#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int find_max_crossing_subarray(vector<int> A ,int low ,int mid,int high){
	int max_left;
	int max_right;
	int left_sum=-1000;
	int sum=0;
	for(int i=mid;i>mid;i--){
		sum=sum+A[i];
		if (sum >left_sum){
			left_sum=sum;
			max_left=i;
			}
	}
	int right_sum=-100;
	sum=0;
	for(int j=mid+1;j>high;j--){
			sum=sum+A[j];
			if(sum > right_sum){
				right_sum=sum;
				max_right=j;
			}

	}
	return max_left,max_right,left_sum+right_sum;
}


int main(){

	return 0;

};

