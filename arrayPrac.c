#include<stdio.h>
int main(){
	int a[]={10,20,30,4,6,7,8,5,9,10};
	int b=10;
	int *q=&b;
	int *p=a;
	//printf("%d\n",3[a]);
	//printf("%d",*(p+2));
	//printf("\n%p\n",a);
	//printf("%p\n",p);
	//printf("%p\n",&b);
	//printf("%p\n",q);
	//p++;
	//printf("%d\n",*p);
	printf("address of a: %u\n",a);
	printf("address of a+1: %u\n",a+1);
	printf("address of array a +1: %u\n",&a+1);
	printf("address of &a[0]+1: %d\n",&a[0]+1);
	printf("value at address(a+1):%d\n",*(a+1));
	printf("value at address a+1: %d\n",*a+1);
	printf("address of a[0]: %d\n",&a[0]);
	int (*ptr)[10]=&a;
	printf("value in ptr: %d\n",ptr);
	p++;
	printf("value at p after p++ :%d\n",p);
	p=p+2;
	printf("value of p after p++ and then p+=2: %d\n",p);
	printf("value at &q[2]:%d\n",p[2]);
	int array2D[2][3]={{2,3,4},{5,6,7}};
	printf("the second row 2nd element is: %d\n",array2D[1][1]);
	printf("the address of array2D[1][1] is: %u and element is :%d\n",&array2D[1][1],array2D[1][1]);
	printf("the address of array2D[1][2] is: %u and element is: %d\n",&array2D[1][2],array2D[1][2]);
	printf("the address of array2D[1][3] is: %u and element is %d\n",&array2D[1][3],array2D[1][3]);
        printf("the address of array2D[2][0] is: %u and element is %d\n",&array2D[2][0],array2D[2][0]);
	printf("this is the end\n");
	return 0;
}

