#include<stdio.h>
#include<string.h>

int main()
{
    int var=10;
    char v[]="heloo world";
    int var1;
    int var2;
    int a= sizeof(v);
    // /t = 8 spaces
    // printf("chitkara\tuniversity \nharshit \n");
    //input in address of variable
    printf("enter value one ");
    scanf("%d", &var1);
    printf("enter value two ");
    scanf("%d", &var2);
    int var3;
    var3=var1;
    var1=var2;
    var2=var3;

    printf("var1 =  %d \n", var1);
    printf("var2 =  %d", var2);
    


}

//notes
// variable- is a container which holds either data or values
// datatype- which defines the type of data
// 
