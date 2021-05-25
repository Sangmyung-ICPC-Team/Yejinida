// Baekjoon_2744_ChangeBIGsmall.cpp
#include <iostream>
#include <string>
using namespace std;
int main(void){
	string words;

	cin >> words;

	int len = words.size();

	for ( int i = 0; i < len; i++ ){
		if ( words[i] < 97)
			words[i] += 32;

		else if ( words[i] > 96 )
			words[i] -= 32;
	}

	cout << words << '\n';

	return 0;

}