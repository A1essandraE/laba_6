#include <stdio.h> 
#include <stdlib.h> 

int search(int array[], int num);
int i = 0;
int j = 0;

int main() {
    int matrix[2][5] = { {3, 24, 23, 65, 98},
                         {56, 45, 2, 5, 0} };

    int num_choice;
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("Which element's position you want to find?: ");
    scanf("%d", &num_choice);

    search(matrix, num_choice);
    return 0;
}

int search(int array[], int num) {
    int result_i;
    int result_j;
    for (int i = 0; i < 2; i++) {
        for(int j = 0; j < 5; j++) {
            if (array[result_i = i][result_j = j] == num) {
            printf("Element's position: %d row and %d column", result_i, result_j);
            }
        }

    return 0;
}
}