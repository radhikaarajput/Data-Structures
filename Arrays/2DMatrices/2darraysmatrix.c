#include<stdio.h>
#define MAX 100
int i,j;
void display(int,int);
void matrix_multiply(int,int,int,int);
void matrix_add(int,int,int,int);
void check_sym(int,int);
int main()
{
	int re =0, ar,ac,br,bc, a[MAX][MAX], b[MAX][MAX];	 
	
	printf("Enter no. of rows of the first matrix:\t");
	scanf("%d",&ar);
	printf("\nEnter no. of columns of the first matrix\t");
	sacnf("%d",&ac);
	printf("\nEnter the elements of the first matrix(row-wise):\n");
	for(i=0;i<ar;i++)
	{
		for(j=0;j<ac;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("Enter no. of rows of the second matrix:\t");
	scanf("%d",&br);
	printf("\nEnter no. of columns of the second matrix\t");
	sacnf("%d",&bc);
	printf("\nEnter the elements of the second matrix(row-wise):\n");
	for(i=0;i<br;i++)
	{
		for(j=0;j<bc;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	
	while(re==0)
	{
		printf("\nChoose the operation that you want to perform:\n1.Add two matrices\n2. Multiply two matrices\3. Check if a matrix is symmetric or not\n");
		scanf("%d",&o);
		if(o==1)
		{
			if(ar==br && ac==bc)
			{
				matrix_add(a,b,ar,ac);
			}
			re = 0;
		}
		else if(o==2)
		{
			if(ac==br)
			{
				matrix_multiply(a,b,ar,ac,bc);
			}
			re = 0;
		}
		else if(o==3)
		{
			printf("\nChoose matrix: first(1) or second(2)?\t");
			scanf("%d",&mat);
			if(mat == 1)
			{
				check_sym(a,ar,ac);
				re = 0;
			}	
			else if(mat == 2)
			{
				check_sym(b,br,bc);
				re = 0;
			}
			else
			{
				printf("\nNo such matrix exists!");
				re = 0;
			}
		}
		else
		{
			printf("\nINCORRECT OPTION NUMBER CHOSEN. TRY AGAIN!");
			re = 0;
		}
	}
	
	return 0;
}
void matrix_add(int a[][],int b[][], int ar, int ac)
{
	int c[MAX][MAX];
	for(i=0;i<ar;i++)
	{
		for(j=0;j<ac;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	display(c,ar,ac);
}
void matrix_multiply(int a[][],int b[][], int ar, int ac, int bc)
{
	int k,l,c[ar][bc],temp;
	for(k=0;k<ar;k++)
	{
		for(i=0;i<k;)
		{
			for(j=0;j<ac,i<ar;j++)
			{
				temp += a[i][j] * b[j][i];
				i++;
			}
			c[i][i] = temp;
			
		}

	}
	display(c,ar,bc);
}
