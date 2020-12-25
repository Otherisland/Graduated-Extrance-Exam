//ex11_20

#include <stdio.h>
//ex_11
/*#define ARR 50
int main()
{
	int s=1,i,j,n;
	int k[ARR];

	for(i=2;i<=1000;i++)
	{
		s=1;n=0;
		for(n=0;n<ARR;n++)
		{
			k[n]=0;
		}
		n=0;
		for(j=2;j<=i-1;j++)
		{
			if(i%j==0)
			{
				s=s+j;
				k[n++]=j;
				//printf("s=%d,i=%d,j=%d,n=%d,k[%d]=%d\n",s,i,j,n-1,n-1,k[n-1]);
			}
		}
		if(s==i)
		{
			printf("%d its factors are ",i);
			printf("1");
			for(j=0;j<ARR;j++)
			{
				if(k[j]!=0)	printf(",%d",k[j]);
			}
			printf(".\n");
		}
	}
	
	return 0;
}*/

//ex_12
/*int main()
{
	int count=1,day=10;//第一天的桃子数，天数 
	while(day>1)
	{
		count=(count+1)*2;
		day--;
	}
	printf("the first day's peaches count is %d\n",count);
	
	return 0;
}*/

//ex_13
/*
#define COUNT 7
int main()
{
	int i,j,k;
	for(i=1,j=COUNT/2;i<=COUNT/2+1;i++,j--)
	{
		for(k=0;k<j;k++) printf(" ");
		for(k=0;k<2*i-1;k++) printf("*");
		for(k=0;k<j;k++) printf(" ");
		printf("\n");
	}
	for(i=1,j=COUNT/2;i<=COUNT/2;j--,i++)
	{
		for(k=0;k<i;k++) printf(" ");
		for(k=0;k<2*j-1;k++) printf("*");
		for(k=0;k<i;k++) printf(" ");
		printf("\n");
	}
	
	return 0;
}*/

//ex_14
/*int main()
{
	int a[101];
	int i,j;
	for(i=1;i<101;i++)
	{
		a[i]=0;
	}
	for(i=2;i<101;i++)
	{
		for(j=2;j<100;j++)
		{
			if(i*j<=100) a[i*j]=-1;
		}
	}
	for(i=2;i<101;i++)
	{
		if(a[i]==0) printf("%d is sushu.\n",i);
	}
	
	return 0;
}*/

//ex_15
/*int main()
{
	int a[10];
	int i,j,p=0,min;
	for(i=0;i<10;i++)
	{
		printf("please input the number of array[%d]\n",i);
		scanf("%d",&a[i]);
	}
	p=0;
	for(i=0;i<10;i++,p++)
	{
		min=p;
		for(j=p+1;j<10;j++)
		{
			if(a[min]>a[j])
			{
				min=j;
			}
		}
		int temp=a[min];
		a[min]=a[p];
		a[p]=temp;
	}
	
	printf("the sort of array is:");
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	
	return 0;
}*/

//ex_16
/*int main()
{
	int array[3][3];
	int i,j,sum;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("input the array[%d][%d]:",i,j);
			scanf("%d",&array[i][j]);
			if(i==j) sum+=array[i][j];
		}
	}
	
	printf("sum=%d",sum);
	
	return 0;
 } */
 
 //ex_17
 /*
 #define ROW 10
 int main()
 {
 	int arr[ROW][ROW];
 	int i,j;
 	for(i=0;i<ROW;i++)
 	{	
 		for(j=0;j<10;j++)
 		{
 			arr[i][j]=0;
		}
		arr[i][i]=1;
 		arr[i][0]=1;
	}
	for(i=1;i<ROW;i++)
	{
		for(j=1;j<ROW;j++)
		{
			arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
		}
	}
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<ROW;j++)
		{
			if(arr[i][j]) printf("%-6d",arr[i][j]);
			else {printf("\n");break;}
		}
	}
 }*/
 
 //ex_18
 /*int main()
 {
 	int i,j,k,n;//n>=1;
 	while(n<1)
 	{
 		printf("please input the n:(n>=3),1~n^2 magic matrix.\n");
		scanf("%d",&n);
	}
	int arr[n][n];
	k=1;
	
	for(i=0;i<n;i++) for(j=0;j<n;j++) arr[i][j]=0;
	
	//1在中间那列，副对角线是连续的，最中间的数是全部和的1/n
	
	//奇数倍:假定阵列的行列下标都从0开始，则魔方阵的生成方法为：在第0行中间置1，对从2开始的其余n2-1个数依次按下列规则存放：
    //(1)假定当前数的下标为(i，j)，则下一个数的放置位置为当前位置的右上方，即下标为(i-1，j+1)的位置。
    //(2)如果当前数在第0行，即i-1小于0，则将下一个数放在最后一行的下一列上，即下标为(n-1，j+1)的位置。
    //(3)如果当前数在最后一列上，即j+1大于n-1，则将下一个数放在上一行的第一列上，即下标为(i-1，0)的位置。
    //(4)如果下一个数的位置上有数，或者是第一行最后一列，就放到当前数的下方。
	//5的魔方阵
	//17  24  1   8   15
	//23  5   7   14  16
	//4   6   13  20  22
	//10  12  19  21  3
	//11  18  25  2   9 
    
    //偶数倍:从1开始填，从左上角开始，遇到对角线不填；从16开始填，从左上角开始，非对角线不填；拼起来。
	//4的魔方阵：
	//16  2   3   13
	//5   11  10  8
	//9   7   6   12
	//4   14  15  1
	
	k=1;
	if(n%2!=0)//如果是奇数
	{
		j=n/2;i=0;//1的初始位置  
		arr[0][j]=k++;
		for(;k<=n*n;k++)
		{
			if(arr[i-1][j+1]==0&&(i-1)>=0&&(j+1)<n) arr[--i][++j]=k;//一般情况 
			else if(((i-1)>=0&&(j+1)<n&&arr[i-1][j+1]!=0)||((i-1<0)&&(j+1)>=n)) arr[++i][j]=k;//第一行最后一列，或有值，下落 
			else if(i-1<0) arr[i=n-1][++j]=k;//第一行非最后一列
			else if(j+1>=n) arr[--i][j=0]=k;//最后一列非第一行 
		}
	} 
	
	if(n%2==0)//如果是偶数 
	{
		i=0;j=0;
		while(k<=n*n)
		{
			if(i==j||(i+j)==(n-1))
			{
				arr[i][j]=n*n-k+1;
			}else{
				arr[i][j]=k;
			}
			j++;
			if(j>=n){j=0;i++;}
			k++;
		} 
	}	

 	for(i=0;i<n;i++)//打印矩阵 
	{
		for(j=0;j<n;j++)
		{
			printf("%-6d",arr[i][j]);
		}
		printf("\n");
	}
 }*/
 
 //ex_18 略
 //ex_19 略
 //ex_20 略 
