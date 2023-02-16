// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int max(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int max_(int arr[], int n){
    int max_=arr[0];
    for(int i=0;i<n;i++){
        max_=max(max_, arr[i]);
    }
    
    return max_;
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int N=max_(arr, n);
    printf("%d", N);
    
    return 0;
    
}
