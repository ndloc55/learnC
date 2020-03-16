//#include<stdio.h>
//
//int main() {
//	int n;
//	printf("Nhap vao so nguyen duong: ");
//	scanf("%d", &n);
//	if (n < 1)
//	{
//		printf("Nhap vao so nguyen duong");
//	}
//	else
//	{
//		if (n == 1)
//		{
//			printf("1 = 2^0");
//		}
//		else
//		{
//			printf("%d = ", n);
//			int i = 2, mu = 0;
//			while (n > 1)
//			{
//				if (n % i == 0)
//				{
//					mu++;
//					if (n == i)
//					{
//						printf("%d^%d", i, mu);
//					}
//					n /= i;
//				}
//				else
//				{
//					if (mu > 0)
//					{
//						printf("%d^%d x ", i, mu);
//						mu = 0;
//					}
//					i++;
//				}
//			}
//		}
//	}
//	return 0;
//}