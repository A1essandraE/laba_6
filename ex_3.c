#include <stdio.h> 
#include <stdlib.h> 
#define MAX_CAP 50

void print(int arr);
void append(int arr);
void insert(int arr);

int main () {
    int dimensione, total;
    int arr[dimensione];
    printf("Введите размер вашего массива: ");
    scanf("%d", &dimensione);
    printf("Введите количество элементов для заполненеия: ");
    scanf("%d", &total);

    for(int i = 0; i < total; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    print(arr);
    return 0;
}

void print(int arr) {
    for(int i = 0; i < arr; i++) {
        printf("%d ", arr[i]);
    }

}

void append(int arr) {

}

void insert(int arr) {

}