//#include<stdio.h>
//
//int main() {
//	int luaChon;
//	printf("\n======MENU======\n1. Tinh tong hai so nguyen.\n2. Tinh hieu hai so nguyen.\n3. Tinh tich hai so nguyen.\n");
//	printf("4. Tinh thuong nguyen hai so nguyen.\n5. Tinh thuong du hai so nguyen.\n 0. Thoat");
//	printf("Ban chon ?\n");
//	scanf("%d", &luaChon);
//	switch (luaChon)
//	{
//	case 0: break;
//	case 1: {
//		int a, b;
//		scanf("%d%d", &a, &b);
//		printf("%d + %d = %d", a, b, a + b);
//	} break;
//	case 2: {
//		int a, b;
//		scanf("%d%d", &a, &b);
//		printf("%d - %d = %d", a, b, a - b);
//	} break;
//	case 3: {
//		int a, b;
//		scanf("%d%d", &a, &b);
//		printf("%d * %d = %d", a, b, a * b);
//	} break;
//	case 4: {
//		int a, b;
//		scanf("%d%d", &a, &b);
//		printf("%d / %d = %d", a, b, a / b);
//	} break;
//	case 5: {
//		char c = '\%';
//		int a, b;
//		scanf("%d%d", &a, &b);
//		printf("%d %c %d = %d", a, c, b, a + b);
//	} break;
//	}
//
//	return 0;
//}