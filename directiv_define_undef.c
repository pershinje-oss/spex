#define _USE_MATH_DEFINES
// #define KMH 3600 / 1000
// #define PI 3.1415
// #define GRAD 180 / PI
// #define MAX_WIDTH 256
// #define MAX_HEIGHT 500
// #define MAX_LENGTH 100
#define MAX_BUFF_SIZE 1024
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*Препроцессор - это программа ,
кторая обрабатывает исходный код перед комппиляцией.
Находится:
Где физически:
   В GCC/MinGW - это файл cpp.exe (или встроен в gcc.exe)
   В Linux - /usr/bin/cpp
   В Visual Studio - встроен в комппилятор c1.exe*/


// Линковщик (linker) - это отдельная пррограмма ,которая собирает части программы в один готовый исполняемый файл.


// Макропроцесор - это это общее название для любой программы которая обрабатывает макросы.


/*Дерективы процессора - это специальные команды, 
которые начинаются с символа '#' и дают указания процессору 
как обрабатывать текст перед компиляцией.
Находится:
1. В самом начале файла (перед функциями)
2. В заголовочных файлах (.h) */

/*Макрос - это правило (шабллон), которое говорит препроцессору:
 "Везде где встретишь это слово, замени его на вот тот текст"*/

// define - определять (создает макрос или константу)

// include - включать (вставляет содержимое друггих файлов)

// Препроцесор - это программа котороая обрабатывает исходный код перед компиляцией



int main(void){

    // int s_mc;
    // scanf("%d", &s_mc);

    // float s_kmh = s_mc * (float)KMH;
    // printf("%.2f", s_kmh);

    // double rad;
    // scanf("%lf", &rad);

    // float grad = rad * GRAD;
    // printf("%.2f", grad);

    // float width,height;
    // scanf("%f %f", &width,&height);

    // if(width > MAX_WIDTH)width = MAX_WIDTH;
    // if(height > MAX_HEIGHT)height = MAX_HEIGHT;
    // printf("%f %f", width, height);

    // unsigned x,y;
    // scanf("%u %u", &x, &y);
    // x = pow(x,2);
    // y = pow(y,2);
    // float length = sqrt(x + y);
    // if(length < MAX_LENGTH){
    //     printf("%.2f", length);
    // }else printf("Radius length exceeds value of MAX_LENGTH");
    
    // unsigned int buff_size;
    // scanf("%u", &buff_size);
    // buff_size > MAX_BUFF_SIZE ? printf("%s", MAX_BUFF_SIZE) : printf("%u", buff_size);



    return 0;
}