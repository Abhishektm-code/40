#include <stdio.h>

int main()
{
    int i,j,k,l;
	for (i=0;i<5;i++)
	{
		for (j=0;j<2*(5-i)-1;j++)
		{
			printf(" ");
		}
		for (k=0;k<2*i+1;k++)
		{
		    if(k==0||k==2*i||i==5-1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
		}
		printf("\n");
	}

	return 0;
}
