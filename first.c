# include <stdio.h>

int fact(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }

}

void main(){
    int a;
    printf("Hello, Enter number: ");
    scanf("%d", &a);
    int fac = fact(a);

    printf("Factorial is %d", fac);

}