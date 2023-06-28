#include<stdio.h>
void main(){
int n,m;
printf("Enter the row size: ");
scanf("%d",&n);
printf("Enter the column size: ");
scanf("%d",&m);
int i,j;
int add=0;
int sum=0;
int a[n][m];
printf("Enter the elements:\n");
 for(i=0;i<n;i++){
	for(j=0;j<m;j++){
	printf("Enter A[%d][%d]:",i,j);
	scanf("%d",&a[i][j]);
	}
}
int x,y;
printf("Enter row number:");
scanf("%d",&x);
printf("\nElements of row are:");
for(j=0;j<=m;j++){
    printf("%d, ",a[x][j]);
	sum=sum+a[x][j];
}
printf("The sum of element are: %d\n",sum);
printf("Enter column number:\n");
scanf("%d",&y);
printf("\nElements of column: ");
  for(i=0;i<=n;i++){
  	printf("%d ,",a[i][y]);
  	add=add+a[i][y];
}
printf("\nThe sum is:%d",add);
}
