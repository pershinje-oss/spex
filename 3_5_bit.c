#include <stdio.h>

int main(void){

    // bit  - это минимальная единица измерения информации в компьютере.
    //byte = 8 bit;
    //Kibibyte = 1024 byte
    //Mebibyte = 1024 kbyte
    //Gibibyte = 1024 mbytegg
    // Tebibyte = 1024 gbyte
    //Yobibyte = 2*80 YiB йобибайт

    // unsigned char var = 153;
    // unsigned char not_v = ~var;
    // printf("var =   %d, not_v 5 %d\n", var, not_v);
    // битовая опирация и(&)

    // unsigned char flags = 5;
    // unsigned char mask = 4;
    // unsigned char res = flags & mask;
    // printf("res = %d\n", res);
    //бинарнй работает с двумя опеаторами 
    //унарный работает с одной перемеными

    // unsigned char flags = 5;
    // unsigned char mask = 4;

    // // if((flags & mask) == mask)
    // //     printf("bit 2 is on");
    // // else
    // //     printf("bit 2 is off");

    // flags &= ~mask;
    // flags = flags & ~mask;
    // printf("%d", flags);

    unsigned char flags = 8;
    unsigned char mask = 5;
    
    flags = flags | mask;
    printf("flags = %d\n", flags);
    



    return 0;
}               