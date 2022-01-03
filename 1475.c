//#include <stdio.h>
//int number;
//int num[1000000];
//int arr[10];
//int i;
//
//int main(void) {
//	scanf("%d", &number);
//	for (i = 0;; i++) {
//		num[i] = number % 10;
//		number = number / 10;
//		if (0 == number) {
//			break;
//		}
//	}
//	
//	while (i >= 0){
//
//		switch (num[i]) {
//			case 0: arr[0]++; break;
//			case 1: arr[1]++; break;
//			case 2: arr[2]++; break;
//			case 3: arr[3]++; break;
//			case 4: arr[4]++; break;
//			case 5: arr[5]++; break;
//			case 6: arr[6]++; break;
//			case 7: arr[7]++; break;
//			case 8: arr[8]++; break;
//			case 9: arr[9]++; break;
//			default: printf("\a");
//		}
//		
//		i--;
//	}
//	int sn;
//	
//	if (((arr[6] + arr[9]) % 2) != 0) {
//		sn = (arr[6] + arr[9] + 1) / 2;
//	}
//	else {
//		sn = (arr[6] + arr[9]) / 2;
//	}
//
//	int j, max=0;
//	for (j = 0; j < 10; j++) {
//		if (j == 6 || j == 9) {
//			continue;
//		}
//		if (arr[j] >= max) {
//			max = arr[j];
//		}
//	}
//	if (max < sn) {
//		printf("%d", sn);
//		return 0;
//	}
//	else {
//		printf("%d", max);
//		return 0;
//	}
//
//}