#include<stdio.h>
int main(){

        //here m<n

        int m,n;
        scanf("%d %d",&m,&n);
        int mtrx1[m][n];
        int mtrx2[n][m];

        int res_mtrx[m][m];


        // logic for taking input of two matrix
        for(int a=0;a<m;a++){
            for(int b=0;b<n;b++){
                scanf("%d",&mtrx1[a][b]);
            }
        }

        for(int c=0;c<n;c++){
            for(int d=0;d<m;d++){
                scanf("%d",&mtrx2[c][d]);
            }
            
        }

        //logic for multiplication

          int j;
        for(int i=0;i<m;i++ ){
            
            for(j=0;j<m;j++){
                int res=0;
                for(int k=0;k<n;k++){
                   res=res+mtrx1[i][k]*mtrx2[k][j];
                }
                res_mtrx[i][j]=res;
                printf("%d ",res_mtrx[i][j]);
            }
            
            printf("\n");
        }


 










    return 0;
}
