int main(){
	int m,n,i,j;
	int num,temp;
	scanf("%d %d",&m,&n);
	int A[m][n];
	int min = A[0][0];	
	for(i = 1;i <= m;i++){
		for(j = 1;j <= n;j++){
			scanf("%d",&A[i][j]);
			}
		}
	for(i = 1;i <= m;i++){
		for(j = 1;j <= n;j++){
			if(A[i][j]<min){
				min = A[i][j];
		    }
	 	
		}
		printf("%d",min);
		printf("\n");
	}
}
