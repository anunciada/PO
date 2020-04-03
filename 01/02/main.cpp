#include <stdio.h>
#include "complex.h"

int main(void){
    char op;
    complex a, b, c;

    do{
        printf("Operation: ");
        scanf(" %c", &op);
        if(op == '+' || op == '-' || op == '*' || op == '/'){
            a = ask();
            b = ask();
            switch(op){
                case '+':
                    c = add(a, b);
                    disp(a);
                    printf(" %c ", op);
                    disp(b); 
                    printf(" = ");
                    disp(c);
                    printf("\n");
                    break; 

                case '-':
                    c = sub(a, b);
                    disp(a);
                    printf(" %c ", op);
                    disp(b); 
                    printf(" = ");
                    disp(c);
                    printf("\n");
                    break;

                case '*':
                    c = mul(a, b);
                    disp(a);
                    printf(" %c ", op);
                    disp(b); 
                    printf(" = ");
                    disp(c);
                    printf("\n");
                    break;

                case '/':
                    c = div(a, b);
                    disp(a);
                    printf(" %c ", op);
                    disp(b); 
                    printf(" = ");
                    disp(c);
                    printf("\n");
                    break;
            }
        }else if(op == '='){
            printf("Bye!");
        
        
    }while(op != '=');

    return 0;
}