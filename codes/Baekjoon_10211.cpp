// Baekjoon_10211.cpp
#include <iostream>
#include <vector>
using namespace std;
int maxSubArr(vector<int>& nums){
	int sum = nums[0];
	int max = nums[0];

	for (int i = 1; i < nums.size(); i++){
		if (sum + nums[i] < nums[i]){
			sum = nums[i];
			if (sum > max)
				max = sum;
		}

		else {
			sum += nums[i];
			if (sum > max)
				max = sum;
		}
	}

	return max;
}

int main(void){
	int TestCase;
	int nums;
	vector<int> n;

	cin >> TestCase;

	for (int i = 0; i < TestCase; i++){
		cin >> nums;
		n.clear();
		for (int j = 0; j < nums; j++){
			int temp;

			cin >> temp;
			n.push_back(temp);
			
		}	
		cout << maxSubArr(n) <<'\n';
	}

	return 0;

}