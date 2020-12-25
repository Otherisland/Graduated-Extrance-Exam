//ex1_10

#include <stdio.h>
//ex_1
/*int main()
{
	printf("*****\n");
	printf(" *****\n");
	printf("  *****\n");
	printf("   *****\n");
	printf("    *****");
	
	return 0;
}*/

//ex_2
/*int main()
{
	int a,b,c,max;
	printf("please input the number of a,b,c\n");
	scanf("%d%d%d",&a,&b,&c);
	max=a;
	if(max<b)
	{
		max=b;
	}
	if(max<c)
	{
		max=c;
	}
	printf("the largest number is %d\n",max);
	
	return 0;
 } */
 
 //ex_3
 /*
 #include <math.h>
 int main()
 {
 	float n=10,p,r=0.07f;
 	p=pow(1+r,n);
 	
 	printf("the p after 10 years is %f\n",p);//pay attention the %f not %d; 
 	
 	return 0;
 }*/
 
 //ex_4
 /*
 int main()
 {
 	int x,y;
 	printf("please input the x.\n");
 	scanf("%d",&x);
 	if(x<1)
 	{
 		y=x;
	 }
	 else if(x>=1&&x<10)
	 {
	 	y=2*x-1;
	 }
	 else if(x>=10)
	 {
	 	y=3*x-11;
	 }
	 printf("the y is %d.\n",y);
	 
	 return 0;
 }*/
 
 //ex_5
 /*int main()
 {
 	char c;
 	float score;
 	printf("please input the score\n");
 	scanf("%f",&score);
 	while(score>100||score<0)
 	{
 		printf("the score is error,please input the score again.\n");
 		scanf("%f",&score);
	 }
 	switch((int)score/10)
 	{
 		case 10:
 		case 9:c='A';break;
 		case 8:c='B';break;
 		case 7:c='C';break;
 		case 6:c='D';break;
 		case 5:
 		case 4:
 		case 3:
 		case 2:
 		case 1:
 		case 0:c='E';break;
	 }
	 printf("the grade is %c",c);
 	return 0;
 }*/
 
 //ex_6
 /*int main()
 {
 	int m,n,p,r;
 	printf("please input m and n.\n");
 	scanf("%d%d",&m,&n);
 	
 	if(m<n)
 	{
 		int x=m;
 		m=n;
 		n=x;
	 }//m is changed the largest number 
	 
	 
	 p=m*n;
	 
	 while(n!=0)
	 {
	 	r=m%n;
	 	m=n;
	 	n=r;
	 }
	 printf("最大公约数:%d\n",m);
	 printf("最小公倍数:%d\n",p/m);
 	
 	return 0;
 }*/
 
 //ex_7
 /*int main()
 {
 	int letters=0,spaces=0,numbers=0,others=0;
 	char c;
 	printf("please input a sentence.\n");
 	while((c=getchar())!='\n')
 	{
 		if((c>='a'&&c<='z')||(c>='A'&&c<='Z')) letters++;
		else if(c==' ') spaces++;
		else if(c>='0'&&c<='9') numbers++;
		else others++;
	}
	printf("the count of letters is %d,\nthe count of spaces is %d,\nthe count of numbers is %d,\nthe count of others is %d.",letters,spaces,numbers,others);
	
	return 0;
 }*/
 
 //ex_8
 /*int main()
 {
 	int a,n;
 	int i,an=0,sn=0;
 	printf("please input the a and n.\n");
 	scanf("%d%d",&a,&n);
 	for(i=0;i<n;i++)
 	{
 		an=a+an*10;
 		sn=an+sn;
	}
	printf("a+aa+aaa+......+=%d\n",sn);
	
	return 0;
 }*/
 
 //ex_9
 /*int main()
 {
 	//int sn=0,tn=1,//int 的话到20就越界了 
 	int n=20,i;
 	double sn=0,tn=1;
 	for(i=1;i<=n;i++)
 	{
 		tn=tn*i;
		sn=sn+tn;  
	}
	printf("the summary from 1 to 20 is %e.\n",sn);
	//printf("the summary from 1 to 20 is %d.\n",sn);
 }*/
 
 //ex_10
 /* 
 int main()
 {
 	int a,b,c,i;
 	for(i=100;i<=999;i++)
 	{
 		a=i/100;
 		b=i/10%10;
 		c=i%10;
 		if((a*a*a+b*b*b+c*c*c)==i) printf("%d ",i);
	}
	printf("\n");
	
	return 0;
 }*/
 
 
