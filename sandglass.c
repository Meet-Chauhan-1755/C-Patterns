#include<stdio.h>
int main(){
    int i,n,j;
    printf("Enter NUM:-");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 || i==n || i==j || i+j==n+1)
            printf("* ");
            else 
            printf("  ");
        }
        printf("\n");
    
    }
    return 0;
}