#include <stdio.h>
int main() {
	int i,j,k;
	int r1,c1,r2,c2;
	printf("Enter Rows and Columns for A:\n");
	scanf("%d %d",&r1,&c1);
	printf("Enter Rows and Columns for B:\n");
	scanf("%d %d",&r2,&c2);
	if(c1!=r2){
		printf("Multiplication not possible");
	}
	else{
    int A[r1][c1];
    for(i=0;i<r1;i++){
    	for(j=0;j<c1;j++){
    		printf("Enter a num:");
    		scanf("%d",&A[i][j]);
		}
	}
	int B[r2][c2];
    for(i=0;i<r2;i++){
    	for(j=0;j<c2;j++){
    		printf("Enter a num:");
    		scanf("%d",&B[i][j]);
		}
	}
	int D[r1][c2];
		for(i =0;i<r1;i++){
			for(j=0;j<c2;j++){
				D[i][j]=0;
				for(k=0;k<c1;k++){
					D[i][j] += A[i][k]*B[k][j];
				}
			}
		}
	
	
	printf("resultant: \n");
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			printf("%d ", D[i][j]);
		}
		printf("\n");
	}
	}
}
	
