#include <stdio.h> 

int pascals_triangle(int row);

int main() {
    int degree = 0;
    printf("Введите степень бинома Ньютона: ");
    scanf("%d", &degree);
    pascals_triangle(degree);
    return 0;
}
int pascals_triangle(int row) {
    int i, j, space, k = 1;  
    for(i = 0; i <= row; i++) {

        for(space = 1; space <= (row - i); space++)   // отсупления от начала строки
        printf("  ");

        for(j = 0; j <= i; j++) {

            if(j == 0 || i ==0)
            k = 1;

            else
            k = k*(i - j + 1)/j;
            printf("%4d", k);

        }
        printf("\n");

    }

    return 0;
}