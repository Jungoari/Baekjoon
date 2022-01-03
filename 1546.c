//#include <stdio.h>
//
//int num;
//double arr[1000];
//
//int main(void) {
//	scanf("%d", &num);
//	int i;
//	for (i = 0; i < num; i++) {
//		scanf("%lf", &arr[i]);
//	}
//	int j;
//	double max = 0;
//	for (j = 0; j < num; j++) {
//		if (max < arr[j]) {
//			max = arr[j];
//		}
//	}
//	int k;
//	for (k = 0; k < num; k++) {
//		arr[k] = arr[k] / max * 100;
//	}
//	int l;
//	double sum = 0;
//	for (l = 0; l < num; l++) {
//		sum += arr[l];
//	}
//
//	printf("%lf", sum/(double)num);
//	return 0;
//}