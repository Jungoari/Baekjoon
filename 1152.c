//#include <stdio.h>
//
//int main(void) {
//	int i;
//	char arr[1000000];
//	int ans = 0;
//	gets(arr);
//
//	for (i = 0; arr[i] != '\0'; i++) {
//
//		if ((arr[i] == 32) && ((64 < arr[i - 1] && arr[i - 1] < 91) || (96 < arr[i + 1] && arr[i + 1] < 123) || (64 < arr[i + 1] && arr[i + 1] < 91) || (96 < arr[i + 1] && arr[i + 1] < 123))) {
//			ans++;
//		}
//
//	}
//	if (arr[0] == 32) {
//		ans--;
//	}
//	
//	printf("%d", ans+1);
//	return 0;
//}