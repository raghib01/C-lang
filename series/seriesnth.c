#include<stdio.h>
int main(){
int i, N, sum=0;
printf("Input N\'th Value: ");
scanf("%d", &N);

for(i=1; i<=N; i++){
    sum = sum+i;
};

printf("Series sum is: %d", sum);
getch();

}
