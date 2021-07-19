// Baekjoon_10709.cpp
#include <iostream>
#include <string>
using namespace std;
int main(void){
	int h, w; // H: 남북방향 W : 동서방향
	int res [100][100];
	string clouds[100];
	char word = 'c';

	cin >> h >> w ;

	for (int i = 0; i < h; i++){
			cin >> clouds[i];
	}

	for (int i = 0; i < h; i++){
		int j = -1;
		for (j = 0; j < w; j++){
			if (clouds[i][j] == word)
				res[i][j] = 0;

			else if (j >= 1 && res[i][j - 1] >= 0)
					res[i][j] = res[i][j - 1] + 1;

			else 
				res[i][j] = -1;
		}
	}

	for (int i = 0; i < h; i++){
		for (int j = 0; j < w; j++){
			cout << res[i][j] << ' ';
		}
		cout << '\n';
	}
		
	return 0;
}