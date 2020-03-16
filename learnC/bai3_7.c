//#include<stdio.h>
//
//int tong(int n) {
//	int tong = 0;
//	while (n > 0)
//	{
//		tong = tong + n % 10;
//		n /= 10;
//	}
//	return tong;
//}
//
//void ptts(int n) {
//	printf("%d = ", n);
//	int i = 2;
//	while (n > 1)
//	{
//		if (n % i == 0)
//		{
//			printf("%d", i);
//			if (n != i)
//			{
//				printf(" x ");
//			}
//			n /= i;
//		}
//		else
//		{
//			i++;
//		}
//	}
//}
//
//int main() {
//	int n, chon;
//	printf("Nhap vao so n: ");
//	scanf("%d", &n);
//	printf("1. Tinh tong cac chu so cua %d:\n", n);
//	printf("2. Phan tich %d thanh cac thua so nguyen to:\n", n);
//	printf("0. Thoat!\n");
//	printf(" Ban chon: ");
//	scanf("%d", &chon);
//	switch (chon)
//	{
//	case 1: printf("Tong cac chu so cua %d la: %d", n, tong(n));
//		break;
//	case 2:ptts(n);
//		break;
//	case 0: break;
//	}
//	return 0;
//}