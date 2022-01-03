//#include <stdio.h>	
//
//int num;
//float b;
//char a[100];
//char c[100];
//float score;
//float ans = 0;
//float hak = 0;
//
//int main(void) {
//
//	scanf("%d", &num);
//	for (int i = 0; i < num; i++) {
//		scanf("%s %f %s", a, &b, c);
//
//		if (c[0] == 'A' && c[1] == '+') { score = 4.3; }
//		if (c[0] == 'A' && c[1] == '0') { score = 4.0; }
//		if (c[0] == 'A' && c[1] == '-') { score = 3.7; }
//		if (c[0] == 'B' && c[1] == '+') { score = 3.3; }
//		if (c[0] == 'B' && c[1] == '0') { score = 3.0; }
//		if (c[0] == 'B' && c[1] == '-') { score = 2.7; }
//		if (c[0] == 'C' && c[1] == '+') { score = 2.3; }
//		if (c[0] == 'C' && c[1] == '0') { score = 2.0; }
//		if (c[0] == 'C' && c[1] == '-') { score = 1.7; }
//		if (c[0] == 'D' && c[1] == '+') { score = 1.3; }
//		if (c[0] == 'D' && c[1] == '0') { score = 1.0; }
//		if (c[0] == 'D' && c[1] == '-') { score = 0.7; }
//		if (c[0] == 'F') { score = 0.0; }
//		ans = ans + (b * score);
//		hak += b;
//
//	}
//
//	printf("%.2f", ans / hak);
//	return 0;
//}