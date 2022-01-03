//#include <stdio.h>
//float C, N;
//int i, j, k, l;
//float avg = 0;
//float up = 0.0;
//int arr[1000];
//
//int main(void){
//
//	scanf("%f", &C);
//	for (i = 0; i < C; i++) {
//		scanf("%f", &N);
//		for (j = 0; j < N; j++) {
//			scanf("%d", &arr[j]);
//		}
//		for (k = 0; k < N; k++) {
//			avg += arr[k] / N;
//		}
//		for (l = 0; l < N; l++) {
//			if (arr[l] > avg) {
//				up++;
//			}
//		}
//
//		printf("%.3f%%\n", (up / N) * 100);
//		avg = 0; up = 0; j = 0; k = 0; l = 0; N = 0;
//	}
//
//
//	return 0;
//}