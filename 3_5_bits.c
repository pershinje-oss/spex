#include <stdio.h>

int main(void){
    // unsigned char flags = 9;
    // unsigned mask = 1;
    // flags = flags ^ mask;

    // printf("flags = %d\n", flags);
    // flags ^= mask;
    // printf("flags = %d\n", flags);

    // unsigned char x = 40;// 00101000
    // printf("x = %d\n", x);

    // x >>= 1;
    // printf("x = %d\n", x);// 00010100 (число 20)

    // x >>= 2;
    // printf("x = %d\n", x);// 00000101 (число 5)

    // x >>= 1;
    // printf("x = %d\n", x); // 00000010 (число 2)

    // x >>= 1;
    // printf("x = %d\n", x);// 00000001 (число 1)

    // x <<= 1;
    // printf("x = %d\n", x);// 00000010 (число 2)

    // x <<= 2;
    // printf("x = %d\n", x);// 00001000 (число 8)

    // unsigned char b, not_b;
    // scanf("%hhu", &b);

    // not_b = ~b;
    // printf("%hhu", not_b);

    // unsigned char bits;
    // scanf("%hhu", &bits);

    // int f = 0b00101000;
    // (bits & f) == bits ? printf("%hhu", bits) : printf("-1");

    // unsigned char bits;
    // scanf("%hhu", &bits);

    // int f = 0b11000000;
    // bits = bits & ~f;
    // printf("%hhu", bits);

    // unsigned char bits;
    // scanf("%hhu", &bits);

    // int f = 0b00010101;
    // int res = bits | f;
    // printf("%d", res);

    // unsigned char bits;
    // scanf("%hhu", &bits);

    // int f = 0b00001001;
    // bits = bits ^ f;
    // printf("%hhu", bits);

    // unsigned int nomber;
    // scanf("%u", &nomber);
    // nomber = nomber >> 2;
    // printf("%u", nomber);

    // unsigned int nomber;
    // scanf("%u", &nomber);
    // nomber = nomber << 3;
    // printf("%u", nomber);

    unsigned int nomber1 , nomber2;
    scanf("%u %u", &nomber1,&nomber2);

    printf("%u", (nomber1 >> 1) * (nomber2 >> 1));
    





    return 0;
}