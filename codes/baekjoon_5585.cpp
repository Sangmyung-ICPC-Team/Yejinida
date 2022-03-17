// baekjoon_5585.cpp
#include <iostream>
using namespace std;
int main(void){
	int money;
	int cnt = 0;
	int rest;
	int type[6] = {500, 100, 50, 10, 5, 1};
	int temp;
	cin >> money;

	rest = 1000 - money;

	for (int i = 0; i < 6; i++){
		if(rest / type[i] != 0){
			cnt += rest / type[i];
			temp = rest / type[i];
			rest -= temp * type[i];
		}
	}

	cout << cnt << '\n';

	return 0;
}