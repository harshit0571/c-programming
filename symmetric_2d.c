// Online C compiler to run C program online
    // 1 2 0
    // 2 1 4
    // 0 4 1

#include <stdio.h>

int main() {
    
    int n,m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int flag=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]!=arr[j][i]){
                flag=0;
            }
        }
    }
    
    if(flag){
        printf("symmetric");
    }
    else{
        printf("not");
    }
    
    return 0;
}
