#include<stdio.h>
int main(){
    int a, b, num1, num2, rem, GCD, LCM ;
    printf("Input 2 Numbers:\t");
    scanf("%d %d", &a, &b);

    num1 = a;
    num2 = b;

    while(num2!=0){
        rem = num1 % num2;
        num1= num2;
        num2 = rem;
    }

    GCD = num1;
    LCM = a * b / GCD ;

    printf("GCD is : %d\n", GCD);
    printf("LCM is: %d\n", LCM);
}
