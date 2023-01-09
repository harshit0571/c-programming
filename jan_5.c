#include<stdio.h>
#include<string.h>

int main()
{
    // int a;
    // printf("enter output: ");
    // scanf("%d", &a);
    // if(a>=18){
    //     printf("you are eligible to vote at age  %d", a);
    // }
    // else{
    //     printf("not eligible");
    // }

    char ch;
    printf("enter any character ");
    scanf("%c" , &ch);
    int val=ch;
  
    if(val>=65 && val<=91){
        ch+=32;
    } 
    else{
        ch-=32;
    }
    printf("%c", ch);

}

// notes
// datatype- > two types;
// predifined and user defined;

// predifined-> fundamental - int char float
//           -> derived- long string double

// User Defined-> structure     

// arthematic- + - * /
// assignment (=)
// arthematic operator- += -= *= /=
// relational operator - >,<,<=,>=,==
// conditional - !
//                    unary
//         pre                       post
// increment  decrement     increment  decrement
//    ++a       --a            a++        a--

                //       logical

                //   -AND        -&&
                //   -OR         -|    
                //   -NOT        -!
