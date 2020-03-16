//#include<stdio.h>
//
//int main() {
//	unsigned long long n;
//	unsigned long long f0 = 1;
//	unsigned long long f1 = 1;
//	unsigned long long fn = 1;
//	unsigned long long a = 0;
//	printf("Nhap vao so n > 0: ");
//	scanf("%lld", &n);
//	if (n <0)
//	{
//		printf("Nhap vao so n > 0");
//	}
//	else
//	{
//		if (n == 1)
//		{
//			printf("so fibo thu %lld la: %lld", n, f0);
//		}
//		else {
//			if (n == 2)
//			{
//				printf("%lld so fibo dau tien la: %lld, %lld", n, f0, f1);
//			}
//			else
//			{
//				int i;
//				printf("%lld so fibo dau tien la: 1, 1,", n);
//				for (i = 3; i <= n ; i++)
//				{
//					fn = f0 + f1;
//					printf(" %lld ", fn);
//					f0 = f1;
//					f1 = fn;
//				}
//				
//			}
//		}
//	}
//	return 0;
//}