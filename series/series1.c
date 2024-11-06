#include<stdio.h>
//1+2+3+4.....+n
int main(){
    int i, N, sum = 0;
    printf("Input N\'th value: ");
    scanf("%d\n", &N);

    for(i=1; i<=N; i++){
        sum = sum + i;
    }
    printf("\nSum is : %d", sum);
    getch();
}
