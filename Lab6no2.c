int main(){
	int m,n,i,j;
	int num;
	scanf("%d %d",&m,&n);
	int arr[m][n];
	for(i = 1;i <= m;i++){
		for(j = 1;j <= n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(i = 1;i <= m;i++){
		for(j = 1;j <= n;j++){
			printf("%d ",arr[i][j]+1);
		}
		printf("\n");
	}
}
