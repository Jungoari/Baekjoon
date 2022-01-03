//#include <stdio.h>
//int arr[27];
//
//int main(void) {
//	int idx = 0;
//
//	char arr[1000000];
//	int ans[27] = { 0 };
//	scanf("%s", arr);
//	while (arr[idx] != '\0') {
//
//		if (64 < arr[idx] && arr[idx] < 91) {//BIG LETTER
//			ans[arr[idx] - 65]++;
//		}
//		else if (96 < arr[idx] && arr[idx] < 123) {//small letter
//			ans[arr[idx] - 97]++;
//		}idx++;
//	}///////
//	int j; int max = 0; int vbn;
//	for (j = 0; j < 26; j++) {
//		if (ans[j] > max) {
//			max = ans[j]; vbn = j;
//		}
//	}int k;
//	for (k = 0; k < 26; k++) {
//		if (ans[k] == max && vbn != k) {
//			printf("?");
//			return 0;
//		}
//	}
//	printf("%C", vbn + 65);
//	return 0;
//}
