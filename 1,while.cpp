/* lam phep toan cong ma khong thoat man hinh */
#include<stdio.h>
#include<stdlib.h>
int main ()
{
	while (1)
	{
		int a ;
		printf ("nhap a:");
		scanf ("%d", &a);
		int b ;
		printf ("nhap b:");
		scanf ("%d", &b);
		printf ("a+b:%d \n", a+b );
//		getchar();
		int x;
		printf("xoa hay ko:");
		scanf( "%d", &x);
		if(x=0)
		{
				system("cls");
		}
        
	}
	
	return 0;
}
