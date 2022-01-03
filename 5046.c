//#include <stdio.h>
//int mincost;
//char Available='N';
//struct First_line{
//	int N;//Number of Participants
//	int B;//Budget
//	int H;//Hotel
//	int W;//Week
//};
//struct Second_line {
//	int p;//Cost per 1
//	int a[1000];//Max population
//};
//
//int main(void) {
//	struct First_line info;
//	struct Second_line hotel;
//
//	scanf("%d %d %d %d", &info.N, &info.B, &info.H, &info.W);
//
//	mincost = info.B;
//	int i;/////////////////////////////-> Input info
//	for (i = 0; i < info.H; i++) {
//		scanf("%d", &hotel.p);
//		int j;
//		for (j = 0; j < info.W; j++) {
//			scanf("%d", &hotel.a[j]);
//		}
//		//Code Here.
//		int k;
//		for (k = 0; k < info.W; k++) {
//
//			if (hotel.a[k] >= info.N && info.N * hotel.p <= info.B) {
//
//				Available = 'Y';
//				if (hotel.p * info.N < mincost) {
//					mincost = hotel.p * info.N;
//				}
//			}
//		}
//	}
//	if (Available == 'Y')
//		printf("%d", mincost);
//	else
//		printf("stay home");
//
//	return 0;
//}