//#include <stdio.h>
//
//int num;
//char arr[100];
//int score=0;
//int score2=0;
//int ans;
//int main(void) {
//
//	scanf("%d", &num);
//	for (int i = 0; i < num; i++) {
//		
//		scanf("%s", arr);
//		for (int j = 0; arr[j] != '\0'; j++) {
//			if (arr[j] == 'O') {//O일때
//				score = 1; if (j != 0 && arr[j - 1] == 'O') {
//					score2++;
//				}
//				
//			}
//			else {// X일때
//				score = 0; score2 = 0;
//			}
//
//			ans = ans + score + score2;
//			
//		}
//		score = 0; score2 = 0;
//
//		printf("%d", ans);
//			
//		ans = 0;
//	}
//
//	return 0;
//}