/*
Author : Naoki Kishi (KUEE 2T13)
GitHub URL : https://github.com/naoki-kishi/cpro2018
*/
#include <stdio.h>

int main(void){
    int n = 0;
    int factorial = 1;

    printf("n = ");
    scanf("%d",&n);

    int i=1;
    while(i<=n){
        factorial *= i;
        i++;
    }
    printf("n! = %d",factorial);
    return 0;
}