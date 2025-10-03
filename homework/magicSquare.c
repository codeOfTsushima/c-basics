#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j;
    int magic_sum;
    int is_magic = 1; 

    printf("Enter the 9 elements of the 3x3 matrix\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    //first row to target
    magic_sum = matrix[0][0] + matrix[0][1] + matrix[0][2];

    
    for (i = 1; i < 3; i++) {
        if (matrix[i][0] + matrix[i][1] + matrix[i][2] != magic_sum) {
            is_magic = 0;
            break;
        }
    }

    if (is_magic) {
        for (j = 0; j < 3; j++) {
            if (matrix[0][j] + matrix[1][j] + matrix[2][j] != magic_sum) {
                is_magic = 0;
                break;
            }
        }
    }

    if (is_magic) {
        //left to right diagonal
        if (matrix[0][0] + matrix[1][1] + matrix[2][2] != magic_sum) {
            is_magic = 0;
        }
        //diagonal right to left daigonal
        if (is_magic && (matrix[0][2] + matrix[1][1] + matrix[2][0] != magic_sum)) {
            is_magic = 0;
        }
    }


    if (is_magic) {
        printf("Magic Square\n");
    } else {
        printf("Not a Magic Square\n");
    }

    return 0;
}