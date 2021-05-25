// Baekjoon_11721_ten.cpp
#include <iostream>
#include <string>
using namespace std;
int main(void){
	string words;
	int size;

	cin >> words;
	size = words.size();

	for ( int i = 0; i < (size / 10) + 1; i++ ){
		for ( int j = 0; j < 10; j++ ){
			if (words.front() == 0)
				break;
			else {
				cout << words.front();
				words.erase(0, 1);
			}
		}
		cout << '\n';
	}

	return 0;

}