//#include<stdio.h>
//
//int main() {
//	int n, i, s = 0, s1 = 0, s2 = 0, i1;
//	printf("Nhap vao so nguyen bat ky: ");
//	scanf("%d", &n);
//// Tong
//	for (i = 0; i <= n; i++)
//	{
//		s += i;
//	}
//	printf("\nTong: %d", s);
//// Tong chan
//	for ( i = i1 = 2; i <= n; i = (i1++)*2)
//	{
//		s1 += i;
//	}
//	printf("\nTong chan: %d", s1);
//// Tong le
//	for (i = i1 = 1; i <= n; i = (i1++ * 2)+1)
//	{
//		s2 += i;
//	}
//	printf("\nTong le: %d", s2);
//	return 0;
//}