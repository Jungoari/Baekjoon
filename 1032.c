//#include <stdio.h>
//
//int n;//ÃÑ °³¼ö
//int i, j;
//char arr[100];
//char arr2[100];
//
//
//int main(void) {
//
//	scanf("%d", &n);
//
//	if (n == 1) {
//		scanf("%s", arr);
//		printf("%s", arr);
//		return 0;
//	}
//	scanf("%s", arr);
//
//	for (i = 0; i < n - 1; i++) {
//
//		scanf("%s", arr2);
//		j = 0;
//		while (arr[j] != '\0') {
//			if (arr[j] != arr2[j]) {
//				arr[j] = '?';
//			}
//			
//			j++;
//		}
//	}
//
//	printf("%s", arr);
//
//	return 0;
//}