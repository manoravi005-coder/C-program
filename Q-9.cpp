#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int number_without_last_digit = N / 10;
    printf("%d", number_without_last_digit);
    return 0;
}
