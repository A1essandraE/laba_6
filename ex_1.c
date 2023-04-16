#include <stdio.h> 
#include <stdlib.h> 
int includes(char array[], int length, char letter);
int main() {
    char symbols[] = {'H', 'e', 'l', 'l', 'l', 'o', 'l'};
    int length = 8;
    char letter[1];
    printf("Введите символ: "); scanf("%c", &letter);
    printf("%c", &letter);
    includes(symbols, length, letter);
    return 0;
}
int includes(char array[], int length, char letter) {
    int result = 0;
    for (int i = 0; i < length; i++) {
        printf("%c", array[i]);
        if (array[i] == letter) {
            result++;
        }
        printf("%d", result);
    }
    //printf("%d", result);
    return 0;
}