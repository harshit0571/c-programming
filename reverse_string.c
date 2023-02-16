// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    char str[30];
    gets(str);
    int x=strlen(str);
    
    for(int i=0;i<x/2;i++){
        char extra=str[i];
        str[i]=str[x-i-1];
        str[x-i-1]=extra;
    }
    
    printf("%s", str);

    return 0;
}
