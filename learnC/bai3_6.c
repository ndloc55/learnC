//#include<stdio.h>
//#include<stdbool.h>
//
//bool ntcn(int a, int b) {
//	while (a !=b)
//	{
//		if (a > b)
//		{
//			a -= b;
//		}
//		else
//		{
//			b -= a;
//		}
//	}
//	return a == 1;
//}
//
//int main() {
//	int a, b;
//	printf("Nhap 2 so nguyen duong a > b: ");
//	scanf("%d%d", &a, &b);
//	if (a < 0 || b < 0)
//	{
//		printf("Nhap 2so nguyen duong");
//	}
//	if (a > b)
//	{
//		printf("Nhap a > b");
//	}
//	if (a > 0, a <= b)
//	{
//		for (int i =a ; i <= b; i++)
//		{
//			for (int k = a; k <= b; k++)
//			{
//				if (ntcn(i, k)) {
//					printf("  %d,%d  ", i, k);
//				}
//			}
//		}
//	}
//	return 0;
//}