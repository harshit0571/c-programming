// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int check(int a){
    int flag=1;
    if(a<2){
        return 0;
    }
    for(int i=2;i<=a/2;i++){
        if(a%i==0){
            flag=0;
        }
    }
    return flag;
}
int main() {
    int m,n;
    printf("enter row:\n");
    scanf("%d", &m);
    printf("enter column:\n");
    scanf("%d", &n);
    int arr[m][n];
    
    for(int i=0;i<m;i++){
        printf("enter new row");
        for(int j=0;j<n;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           int a =check(arr[i][j]);
           if(a){
               printf(" %d ", arr[i][j]);
           }
        }
    }
    
    
    
    
}
