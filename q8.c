#include <stdio.h>

int decToBinary(int n) 
{ 
    
    int sum = 0;
    while (n > 0) { 
        int dig = n % 2; 
        n = n / 2; 
        sum  = 10*sum + dig;
    } 
    return sum;
}

int onesComplement(int decimalNumber) {
    int mask = 0xFFFFFFFF; 
    return decimalNumber ^ mask;
}


int main()
{
/*
	printf("Enter m\n");
	int n,m;
	scanf("%d",&m);
	printf("Enter n\n");
	scanf("%d",&n);
	int mat[m][n],mat2[m][n],mat3[m][n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&mat[i][j]);
			mat2[i][j] = mat[i][j];
			mat3[i][j] = mat[i][j];
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(!(i==0 || i==m-1 || j == 0 || j == n-1))
			{
				mat2[i][j] = onesComplement(mat[i][j]);
				mat3[i][j] = decToBinary(mat2[i][j]);
			} 
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",mat3[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",mat2[i][j]);
		}
		printf("\n");
	}
*/
	printf("%d",onesComplement(5));
}
