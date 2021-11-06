
#include<stdio.h>
int main(){
    int i, j,k,l, n;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i= 1; i<=n; i++){
        for(k=0;k<n-i; k++){
            printf("  ");
        }
        for(j=1; j<=i; j++){
            printf("%d ",j);
        }
         for(l=1; l<i; l++){
            printf("%d ",i-l);
        }
        printf("\n");
       
    }

     for(i= 1; i<=n; i++){
         for(k=0;k<i; k++){
            printf("  ");
        }
        for(j=1; j<=n-i; j++){
            printf("%d ",j);
        }
         for(l=1; l<n-i; l++){
            printf("%d ",n-l-i);
        }
        printf("\n");
    }
    return 0;
}
