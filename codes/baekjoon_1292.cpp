// baekjoon_1292.cpp
#include <iostream>
#include <vector>
using namespace std;

int main(void){
	int start, end;
	vector <int> arr;

	for (int i = 1; i <= 1000; i++){
		for (int j = 1; j <=  i; j++){
			arr.push_back(i);
		}
	}

	cin >> start >> end;

	int sum = 0;

	for (int i = start - 1 ; i < end; i++){
		sum += arr[i];
	}

	cout << sum << '\n';

	return 0;
}