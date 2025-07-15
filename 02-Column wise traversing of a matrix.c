
    #include<stdio.h>
    int main(){

        //logic for taking input
                int n;
                scanf("%d",&n);
                int matrix[n][n];
                

        //logic for taking the input matrix
                for(int k=0;k<n;k++){
                    for(int l=0;l<n;l++){
                        scanf("%d", &matrix[k][l]);
                    }
                }


        //logic for output
                for(int i=0;i<n;i++){
                    for(int j=0;j<n;j++){
                        printf("%d ",matrix[j][i]);
                    }
                    printf("\n");
                }
    
    

        return 0;
    }
    
