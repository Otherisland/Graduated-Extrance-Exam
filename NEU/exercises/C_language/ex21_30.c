//ex21_30

#include <stdio.h>
//ex_21 略
//ex_22 略
//ex_23 略
//ex_24 略
//ex_25 略
//ex_26 略
//ex_27
/**/
#include <stdlib.h>
#define N 10

struct employee{
	char *name;
	int num;	
} employeeList[N];

int main()
{
	input();
	print();
	return 0;
} 

void input()//输入职工的姓名和职工号 
{
	int num,i;
		
	for(i=0;i<1;i++)
	{
		printf("please input the name and number of employee:\n");
		scanf("%s %d",&employeeList[i].name,&employeeList[i].num);
//		scanf("%s",&employeeList[i].name);
//		scanf("%d",&employeeList[i].num);
	}
}

void sort()//从小到大排序，姓名顺序也随之调整 
{
	
}

void print()//打印职工表 
{
	int i;
	printf("职工号       职工名\n");
	for(i=0;i<1;i++)
	{
		printf("%-12d %s\n",employeeList[i].num,employeeList[i].name);
	}
}

void search()//按照折半查找法查找 
{
	
}
