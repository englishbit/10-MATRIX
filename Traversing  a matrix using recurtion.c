#include<stdio.h>
int n;
void mtrx_trvrs(int l,int k,int  mtrx[n][n]){
    if(l==n){
        return;

    }
    
        printf("%d ",mtrx[l][k]);
    
        
        if (k==n-1){
            mtrx_trvrs(l+1,0,mtrx);
        }else{
            mtrx_trvrs(l,k+1,mtrx);
        }
    
}


int main(){
        
          scanf("%d",&n);
          int mtrx[n][n];

          for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    scanf("%d",&mtrx[i][j]);
                }
          }

       mtrx_trvrs(0,0,mtrx);          





    return 0;
}