// baekjoon_9656.cpp
#include <iostream>
using namespace std;

int dp[1001] = {0, };

void solve(int x){
	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 0;
	for (int i = 4; i <= x; i++){
		if (dp[i - 1] == 0 || dp[i - 3] == 0) 
			dp[i] = 1;
        else
			dp[i] = 0;
	}

	if (dp[x] == 1)
		cout << "SK" <<'\n';
	else 
		cout << "CY" << '\n';
}

int main(void){
	int stone;

	cin >> stone;

	solve(stone);

	return 0;
}