#include <stdio.h>

int main() {
    int n;
    double fact=1;

    
    printf("Enter a number: ");
    scanf("%d", &n);

    
    for(int i = 1; i <= n; i++) {

     fact = fact*i;

}
printf("The factorial is = %f",fact);

}

