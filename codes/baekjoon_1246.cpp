// baekjoon_1246.cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void){
	int egg, customer;
	vector<int> p;
	vector<int> res;

	cin >> egg >> customer;
	for (int i = 0; i < customer; i++){
		int temp;
		cin >> temp;
		p.push_back(temp);
	} 

	sort(p.begin(), p.end());

	for (int i = 0; i < customer; i++){
		int cnt = 0;
		for (int j = 0; j < customer; j++){
			if (p[i] <= p[j])
				cnt ++;
		}
		if (cnt > egg)
			cnt = egg;
		res.push_back(p[i] * cnt);	
		
	}

	int max_index = max_element(res.begin(), res.end()) - res.begin();
	int max = *max_element(res.begin(), res.end());

	cout << p[max_index] << " " << max << '\n';

	return 0;

}