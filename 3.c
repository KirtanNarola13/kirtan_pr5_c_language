#include<stdio.h>
void main(){
int n,m;
printf("Enter the array row size: ");
scanf("%d",&n);
printf("Enter the array's column size: ");
scanf("%d",&m);
int a[n][m];
int i,j;
printf("Enter the elements are: \n");
for(i=0;i<=n;i++){
 	for(j=0;j<=m;j++){
 	printf("Enter a[%d][%d]: ",i,j);
 	scanf("%d",&a[i][j]);
	}
}
for(i=0;i<=n;i++){
	for(j=0;j<=m;j++){
	if(a[i][j]%2==0){
	printf("The even number: %d\n",a[i][j]);
	}else{
	printf("The odd number: %d\n",a[i][j]);
	}
	}
}
}
