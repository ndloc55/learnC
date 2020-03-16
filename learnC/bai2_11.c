//#include<stdio.h>
//#include<math.h>
//
//int main() {
//	int n;
//	printf("Nhap vao so nguyen duong: ");
//	scanf("%d", &n);
//	if (n <= 0)
//	{
//		printf("Nhap vao so > 0");
//	}
//	else
//	{
//		printf("%d so nguyen to dau tien la: ", n);
//		int m = 2, i = 0;
//		while (1)
//		{
//			int a, mark = 1;
//			for (a = 2; a <= sqrt(m); a++)
//			{
//				if (m % a == 0)
//				{
//					mark = 0;
//					break;
//				}
//			}
//			if (mark == 1) 
//			{
//				i++;
//				printf(" %d ", m);
//			}
//			if (i >= n)
//			{
//				break;
//			}
//			m++;
//		}
//	}
//	return 0;
//}