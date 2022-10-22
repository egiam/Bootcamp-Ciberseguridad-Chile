#include <stdio.h>

int square(int x) {
    return x * x;
}

int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Hello, world!\n"); // Print "Hello, world!"
    if (square(num) >= 25){
        printf("Ingrese al flujo 1\n");
    }
    else {
        printf("Ingrese al flujo 2\n");
    }
    return 0;
}

// 