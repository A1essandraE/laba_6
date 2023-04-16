#include <stdio.h> 
int *unique_rows(int array[], int length, in *new_array);
int main() {
    int matrice[4][6] = { {0, 1. 1. 1. 0, 0},
                          {1, 1, 0, 0, 1, 1},
                          {1, 0, 0, 1, 0, 0},
                          {1, 1, 0, 0, 1, 1} }
    

}

int check(int *array[], int row, int col) {
    int similar;
    for(int i = 0; i < row; i++)
    { 
        for(int k = i + 1; k < row; k++)
        {
            similar = 0;
            for(int j = 0; j < col; j++)
            {
                if(array[i][j] == array[k][j])
                {
                    similar++;
                }
                if(similar == col)
                {

                }
            }
        }
    }
}