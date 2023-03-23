//4. Program to Reverse a String Using Recursion


#include <stdio.h>
#include <string.h>

void reverse(char s[], int index, int n){
    if(index>n-1){
        return;
    }

    reverse(s, index+1, n);
    printf("%c", s[index]);
}
int main() {
    char s[1000];
    scanf("%s", &s);
    int x=strlen(s);
    reverse(s, 0, x);
    return 0;
}
