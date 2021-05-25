// Baekjoon_1427_SortInside.cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void){
	string nums;
	cin >> nums;

	sort(nums.begin(), nums.end());
	reverse(nums.begin(), nums.end());
	cout << nums << '\n';

	return 0;

}