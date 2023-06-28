#include<stdio.h>
void main(){
int n,i;
printf("Enter the size of array:");
scanf("%d",&n);
int a[n];
printf("Enter the element of array:\n");
for(i=0;i<n;i++){
	printf("a[%d]",i);
	scanf("%d",&a[i]);
}
printf("Negative element are:\n");
for(i=0;i<n;i++){
	if(a[i]<0){
	printf("%d\n",a[i]);
	}
}
}
