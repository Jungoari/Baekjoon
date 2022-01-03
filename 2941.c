//#include <stdio.h>
//char input[200];
//int ans = 0;
//int main(void) {
//	scanf("%s", input);
//	int i;
//	for (i = 0; input[i] != '\0'; i++) {
//		if (input[i] == 'c' && input[i + 1] == '=') {
//			ans++; i++; continue;
//		}
//		if (input[i] == 'c' && input[i + 1] == '-') {
//			ans++; i++; continue;
//		}
//		if (input[i] == 'd' && input[i + 1] == 'z' && input[i + 2] == '=') {
//			ans++; i++; i++; continue;
//		}
//		if (input[i] == 'd' && input[i + 1] == '-') {
//			ans++; i++; continue;
//		}
//		if (input[i] == 'l' && input[i + 1] == 'j') {
//			ans++; i++; continue;
//		}
//		if (input[i] == 'n' && input[i + 1] == 'j') {
//			ans++; i++; continue;
//		}
//		if (input[i] == 's' && input[i + 1] == '=') {
//			ans++; i++; continue;
//		}
//		if (input[i] == 'z' && input[i + 1] == '=') {
//			ans++; i++; continue;
//		}
//		
//		else {
//			ans++;
//		}
//	}
//	printf("%d", ans);
//
//	return 0;
//}