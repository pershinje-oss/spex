#define USE_MATH_DEFINES
// #define SQ_PR(A, B) A * B
// #define X_N(N)    x ## N //x4
// #define MAX_WIDTH 1280
// #define GET_WIDTH(W) W <= MAX_WIDTH ? W : MAX_WIDTH
// #define GET_MAX(F,D) ((F) > (D) ? (F) : (D))
// #define GIPOT(A,B) sqrt((pow(A,2)) + (pow(B,2)))
#define MUL_VAR_NAME(A,B) mul_##A_##B
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    
    // int x = 6 , y = 10;
    // int fer = SQ_PR(2, 3);
    // int fer2 = SQ_PR(x + 1, y - 3);
    // int x1 = 1,x2 = 2,x3 = -2,x4 = 10;
    // printf("fer = %d, fer2 = %d ,,,, %d\n", fer,fer2, X_N(4));

    // double val_1, val_2;
    // if(scanf("%lf; %lf", &val_1, &val_2) != 2) {
    //     printf("Input error");
    //     return 0;
    // }
    // double res = GET_MAX(val_1 + 1, val_2 - 1) / (val_1 + val_2);
    // printf("%ld", res);
    
    // int a, b;
    // if(scanf("%d, %d", &a, &b) != 2) {
    //     printf("Input error");
    //     return 0;
    // }
    // float length = GIPOT(a+3,b-2);
    // printf("%.2f", length);

    int x, y;
    scanf("%d %d", &x, &y);
    int MUL_VAR_NAME(x,y) = x * y;


    return 0;
}