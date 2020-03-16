//#include<stdio.h>
//
//int main() {
//	int n;
//	printf("Nhap vao mot so tu nhien: ");
//	scanf("%d", &n);
//	if (n < 0)
//	{
//		printf("Nhap vao so tu nhien > 0: ");
//	}
//	else
//	{
//		if (n == 0)
//		{
//			printf("0 co vo so uoc so");
//		}
//		else
//		{
//			int i =1, count = 0;
//			printf("Uoc so cua %d la: ", n);
//			while(i <=n)
//			{
//				if (n % i == 0)
//				{
//					count++;
//					printf(" %d ", i);
//					i++;
//				}
//				else
//				{
//					i++;
//				}
//			}
//			printf("\n %d co %d uoc so", n, count);
//		}
//	}
//
//	return 0;
//}