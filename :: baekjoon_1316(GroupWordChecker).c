// baekjoon_1316(GroupWordChecker).c
#include <stdio.h>
#include <string.h>
int main(void){
	int N;
	char word[100][101];
	int cnt = 0;

	scanf("%d", &N);

	for ( int i = 0; i < N; i++ ) {
		scanf("%s", word[i]);
		getchar();
	}

	for ( int i = 0; i < N; i++ ) {
		char check[26] = {0, };
		int len = strlen(word[i]);
		int isGroup = 1;
		for ( int j = 0; j < len; j++ ) {
			if ( check[word[i][j] - 'a'] == 0 )
				check[word[i][j] - 'a'] = 1;
			else {
				if ( word[i][j - 1] != word[i][j] ){
					isGroup = 0;
					break;
				}
			}
		}

		if ( isGroup == 1 )
			cnt++;
	}

	printf("%d\n", cnt);

	return 0;

}