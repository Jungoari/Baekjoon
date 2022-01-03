//#include <stdio.h>
//
//
//int N, last_num;
//int i;
//int pow(int a, int b);
//int main(void) {
//
//	scanf("%d", &N);
//
//	for (i = 1;; i++) {
//		last_num = N % pow(10, i);
//		if (last_num > 4) {//¹İ¿Ã¸²
//			N += (pow(10, i) - last_num);
//		}
//		
//	}
//
//
//
//	printf("%d", pow(10, 3));
//	return 0;
//}
//int pow(int a, int b) {//a^b
//	int result = 1;
//	for (int i = 0; b > 0; i++) {
//		result *= a; b--;
//	}
//	return result;
//}