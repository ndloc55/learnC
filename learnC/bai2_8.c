//#include<stdio.h>
//
//int main() {
//	int a, b;
//	printf("Nhap vao 2 so nguyen duong: ");
//	scanf("%d%d", &a, &b);
//	if (a < 0 || b < 0)
//	{
//		printf("Nhap vao 2 so nguyen duong");
//	}
//	else
//	{
//		if (a == 0 && b == 0)
//		{
//			printf("Khong co UCLN va BCNN");
//		}
//		if (a == 0 && b > 0)
//		{
//			printf("UCLN la %d, khong co BCNN", b);
//		}
//		if (a > 0 && b == 0)
//		{
//			printf("UCLN la %d, khong co BCNN", a);
//		}
//		if (a > 0 && b > 0)
//		{
//			int i = a * b;
//			/*while (a != b)
//			{
//				if (a > b)
//				{
//					a -= b;
//				}
//				else
//				{
//					b -= a;
//				}
//			}*/
//			while (a*b != 0)
//			{
//				if (a > b)
//				{
//					a %= b;
//				}
//				else
//				{
//					b %= a;
//				}
//			}
//			printf("UCLN %d, BCNN %d", a, i / a);
//		}
//	}
//	return 0;
//}