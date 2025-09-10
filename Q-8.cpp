#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);  
    int last_digit = N % 10;
    printf("%d", last_digit);
    return 0;
}
