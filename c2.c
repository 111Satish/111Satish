
#include<stdio.h>
int main(){
    int i, j, n=10;
   // char get, alpha = 'A';
    for(i=1; i<n; i++){
        for(j=0; j<i; j++){
            printf("%c",'A'+j);
        }
        printf("\n");
    }
    return 0;
}