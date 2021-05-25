// Baekjoon_1181_WordSort.cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Compare( string a, string b ){
	if ( a.size() == b.size())
		return a < b;
	else 
		return a.size() < b.size();

}

int main(void){
	vector<string> words;
	int wordNum; // Number of Testcase

	cin >> wordNum;

	for ( int i = 0; i < wordNum; i++ ) {
		string temp;
		cin >> temp;
		words.push_back(temp);
	}

	sort(words.begin(), words.end(), Compare);
	words.erase(unique(words.begin(), words.end()), words.end());

	int len = words.size();

	for ( int i = 0; i < len; i++ ){
		cout << words[i] << '\n';	
	}
	
	return 0;

}