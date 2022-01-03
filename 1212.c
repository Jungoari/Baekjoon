//#include <stdio.h>
//
//int num;
//int arr[10];
//int main(void) {
//
//	scanf("%d", &num);
//	int i;
//	
//	if (num == 1) { printf("1"); return 0; }
//	if (num == 2) { printf("10"); return 0; }
//	if (num == 3) { printf("11"); return 0; }
//	if (num == 4) { printf("100"); return 0; }
//	if (num == 5) { printf("101"); return 0; }
//	if (num == 6) { printf("110"); return 0; }
//	if (num == 7) { printf("111"); return 0; }
//	
//	for ( i = 0; ; i++) {
//		
//		arr[i] = num % 10;
//		num -= num % 10;
//		num /= 10;
//		if (num == num % 10) {
//			arr[i+1] = num;
//			break;
//		}
//		
//		
//	}
//	switch (arr[i+1]) {
//	case 0:printf("0");
//		return 0;
//	case 1:printf("1");
//		break;
//	case 2:printf("10");
//		break;
//	case 3:printf("11");
//		break;
//	case 4:printf("100");
//		break;
//	case 5:printf("101");
//		break;
//	case 6:printf("110");
//		break;
//	case 7:printf("111");
//		break;
//
//	default:printf("error");
//	}
//	for (int j = i; j >= 0; j--) {
//		switch (arr[j]) {
//		case 0:printf("000"); 
//			break;
//		case 1:printf("001"); 
//			break;
//		case 2:printf("010"); 
//			break;
//		case 3:printf("011");
//			break;
//		case 4:printf("100");
//			break;
//		case 5:printf("101");
//			break;
//		case 6:printf("110");
//			break;
//		case 7:printf("111");
//			break;
//
//		default:printf("error");
//		}
//	}
//	
//	return 0;
//}