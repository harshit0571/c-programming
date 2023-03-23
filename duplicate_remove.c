// Online C compiler to run C program online
//1.Remove Duplicate Elements from an Array in C

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int count=0;
    for(int i=0;i<n-1;i++){
        count=0;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                arr[j]=-100;
            }
        }
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]!=-100){
            printf(" %d ", arr[i]);
        }
    }
    

    return 0;
}
