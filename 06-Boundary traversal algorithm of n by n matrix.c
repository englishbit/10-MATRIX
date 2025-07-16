#include<stdio.h>
int main(){ 
        int n;

        //logic for taking the input
        scanf(" %d",&n);
        int arr[n][n];

        //logic for taking the input matrix
        for (int k=0;k<n;k++){
            for(int l=0;l<n;l++){
                scanf(" %d",&arr[k][l]);
            }
        }



        if(n==1){
            printf("%d",arr[0][0]);
        }else{ 

            
        for (int i=0;i<n;i++){
            printf("%d ",arr[0][i]);
        }


        for(int j=1;j<n;j++){
            printf("%d ",arr[j][n-1]);
        }


        for(int i=n-2;i>=0;i--){
            printf("%d ",arr[n-1][i]);
        }


        for(int j=n-2;j>0;j--){
            printf("%d ",arr[j][0]);
        }

        }

    return 0;
}
