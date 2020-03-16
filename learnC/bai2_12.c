//#include<stdio.h>
//
//int main() {
//	unsigned int n;
//	unsigned long long f0 = 1, f1 = 1, fn = 1;
//	printf("Nhap vao so nguyen duong: ");
//	scanf("%d", &n);
//	if (n < 0)
//	{
//		printf("Nhap vao so nguyen duong >= 0");
//	}
//	else {
//		int i;
//		for (i = 2; i <= n; i++)
//		{
//			fn = f0 + f1;
//			f0 = f1;
//			f1 = fn;
//		}
//		printf("So Fibonaci thu %d la: %lld", n, fn);
//	}
//	return 0;
//}