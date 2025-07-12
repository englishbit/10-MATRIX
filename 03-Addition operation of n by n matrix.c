#include<stdio.h>
int main(){
        int n;

        scanf("%d",&n);
        int mtrx1[n][n];
        int mtrx2[n][n];
        int res_mtrx[n][n];


        

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                scanf("%d",&mtrx1[i][j]);
            }
        }

        for(int x=0;x<n;x++){
            for(int y=0;y<n;y++){
                scanf("%d",&mtrx2[x][y]);
            }
        }
        
        for(int k=0;k<n;k++){
            for(int l=0;l<n;l++){
                res_mtrx[k][l]=mtrx1[k][l]+mtrx2[k][l];
            }
        }
        
        for(int p=0;p<n;p++){
            for(int q=0;q<n;q++){
                printf("%d ",res_mtrx[p][q]);
            }
            printf("\n");
        }











    return 0;
}
