// Baekjoon_11726.cpp
#include <iostream>
using namespace std;
int tiling(int x, int* data){
	if (x == 0)
		return data[x] = 0;

	else if (data[x] == 0)
		return data[x] = (tiling(x - 1, data) + tiling(x - 2, data)) % 10007;

	else 
		return data[x];
} 

int main(void){
	int num;
	int data[10001] = {0, 1, 2, };

	cin >> num;

	cout << tiling(num, data) << '\n';

	return 0;

}