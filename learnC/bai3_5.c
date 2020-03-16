//#include<stdio.h>
//#include<stdbool.h>
//
//bool thuanNghich(int n) {
//	int m = n;
//	int tn = 0;
//	while (n > 0)
//	{
//		tn = tn * 10 + n % 10;
//		n /= 10;
//	}
//	return tn == m;
//}
//
//int tongChuSo(int n) {
//	int tn = 0;
//	while (n > 0)
//	{
//		tn = tn + n % 10;
//		n /= 10;
//	}
//	return tn;
//
//}
//
//int main() {
//	int i;
//	for (i = 100000; i <= 999999 ; i++)
//	{
//		if (thuanNghich(i) && tongChuSo(i) % 10 == 0 )
//		{
//			printf("%10d", i);
//		}
//	}
//}