// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int check(int a){
    int x=a;
    
    int sum=0;
    while(x>0){
        int i=x%10;
        sum=sum*10+i;
        x=x/10;
    }
    if(sum==a){
        return 1;
    }
    else{
        return 0;
    }
}
int main() {
    int n;
    scanf("%d", &n);
    
    int x=check(n);
    if(x){
        printf("true");
    }
    else{
        printf("false");
    }
    
    
}
