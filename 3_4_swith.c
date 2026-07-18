#include <stdio.h>

// int show_menu(void)
// {
//     char menu_item;
    
//     printf("a) learning english\n\
// b) learning C/C++\n\
// c) learning mathematic\n\
// d) learning Python\n");

//     scanf("%c", &menu_item);
//     switch(menu_item){
//     case 'a':
//     case 'A': 
//          return 1;
//     case 'b':
//     case 'B': 
//          return 2;
//     case 'c':
//     case 'C': 
//          return 3;
//     case 'd':
//     case 'D': 
//          return 4;
//     }

//     // здесь прописывайте функцию scanf() и оператор switch

//     return -1;
// }


int main(void){
    
    // int item;

    // printf("1. Lerning C language\n"
    //        "2. Learning Python language\n"
    //        "3. Learning Java language\n"
    //        "4. Learning C++ language\n"
    //        "5. Exit\n" );

    // if(scanf("%d", &item) != 1) { 
    //     printf("Error input");
    //     return 0;
    // }

    // switch(item) {
    // case 1:
    //     printf("Lerning C language\n");
    // case 2:
    //     printf("Lerning Python language\n");
    // case 3:
    //     printf("Lerning Java language\n");
    //     break;
    // case 4:
    //     printf("Lerning C++ language\n");
    // case 5:
    //     printf("Exit\n");

    // }

    // char item;

    // if(scanf("%c", &item) != 1) {
    //     printf("Error input");
    //     return 0;
    // }
    
    // switch(item) {
    // case 'a':
    // case 'A':
    //     printf("Symbol A\n");
    //     break;
    // case 'b':
    // case 'B':
    //     printf("Symbol B\n");
    //     break;
    // case 'c':
    // case 'C':
    //     printf("Symbol C\n");
    //     break;
    // default:
    //     printf("incorrect symbol\n");
    // }

    // Локаль — это инструкция для программы, 
    // по правилам какой страны читать и показывать текст, 
    // числа и даты.
    // хочу еще подметить, что если пишете default не в самом конце switch'a, то к нему нужно добавить return 0 или break.
    
//     char menu_item;
//     short menu_number;
//     scanf("%c", &menu_item);
// switch(menu_item){
//     case 'a':
//     case 'A': 
//          menu_number = 1;
//          break;
//     case 'b':
//     case 'B': 
//          menu_number = 2;
//          break;
//     case 'c':
//     case 'C': 
//          menu_number = 3;
//          break;
//     case 'd':
//     case 'D': 
//          menu_number = 4;
//          break;
//     default:
//         menu_number = -1;

// }

// printf("%hi", menu_number);

// int item = show_menu();
// printf("%d", item);

int a;
scanf("%d", &a);
int b = a / 3 ? printf("yes") : printf("no");



    return 0;
}
