

#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>
#include <stdbool.h>

// int max(int a, int b);

int main(void){
    // int a,b;
    // int fered = scanf("%d %d", &a,&b);
    // printf("a = %d , b = %d fred = %d", a,b,fered);
    // int count;
    // scanf("%d", &count);
    // count = count + 1;
    // printf("%d", count);

    // int total;
    // scanf("%d", &total);
    // total = total - 2;
    // printf("%d", total);

    // float a1,a50;
    // scanf("%f, %f", &a1,&a50);
    // int sm = (a1 + a50) / 2 * 5;
    // printf("%d", sm);

    // float b1,q;
    // scanf("%f, %f", &b1,&q);
    // int sn = ((pow(q, 4) - 1) * b1) / (q - 1);
    // printf("%d", sn);

    // short a;
    // scanf("%hi", &a);
    // float r = (1.732 * a) / 6;
    // printf("%.3f", r);

    // float R;
    // scanf("%f", &R);
    // float length = 2 * M_PI * R;
    // printf("%.3f", length);

    // short a,b, h;
    // scanf("%hi,%hi,%hi", &a,&b, &h);
    // float S = ((a + b) * h) / 2.;
    // printf("%.1f", S);

    // int x = 5;
    // x = 5 % 2;
    // printf("%d", x);
    // x % 2; // деление по модулю
    // x ++; // инкремент
    // x --; // декремент

    // int res = -10 % 4;
    // int freg = -10 % -4;
    // int tyr = 10 % -4;
    // printf("%d, %d ,%d ", res,freg,tyr);

    // int d;
    // printf("Введите число:");
    // scanf("%d", &d);

    // int res = d % 2;
    // printf("Ответ: %d\n", res);

    // unsigned int t = 4 * 3600 + 32*60 + 18;
    // unsigned int s = t % 60;
    // unsigned int m = (t / 60) % 60;
    // unsigned int h = t / 3600;

    // printf("%02d:%02d:%02d\n", h,m,s);
    
    // 100000
    // -73.12
    // 1.234

    // int a;
    // float b;
    // double c;
    // scanf("%d", &a);
    // scanf("%f", &b);      
    // scanf("%lf", &c);
    // printf("%d %.2f %.2lf", a,b,c);

    // int c = 0;
    // printf("c = %d\n", c);
    // c++;
    // printf("c = %d\n", c);

    // int count = 0,size = 5;

    // int current = count ++;
    // int width = ++size;

    // printf("count = %d, size = %d, current = %d, width = %d\n", count, size, current, width);

    // int width = 5;
    // int size = width * width + 2 * (10 + width--);

    // unsigned int angle;
    // scanf("%u", &angle);
    // angle = angle % 360;
    // printf("%u\n", angle);

    // int rect_width = 1280, rect_height = 720;
    // int w = 8, h = 8;
    // scanf("%d; %d", &w,&h);
    // w = rect_width % w;
    // h = rect_height % h;
    // printf("w = %d, h = %d", w,h);

    // unsigned short time_h = 10;
    // unsigned short time_m = 33;
    // unsigned short time_s = 5;

    // unsigned short h,m,s;
    // scanf("%hu; %hu; %hu", &h, &m, &s);
    
    // int res_s = (s + time_s) % 60;
    // int res_m = ((time_m + m) + ((time_s + s - res_s) / 60));
    // int res_h = ((h + time_h) % 24) * ((time_m + m - res_m) / 60);
    // printf("%02d:%02d:%02d", res_s,res_m,res_h);
    
    // time_h = time_h + h;
    // time_m = time_m + m;
    // time_s = time_s + s;
    // printf("%hu:%hu:%hu", time_h,time_m,time_s);

    // unsigned short time_h = 10;
    // unsigned short time_m = 33;
    // unsigned short time_s = 5;

    // unsigned short h,m,s;
    // scanf("%hu; %hu; %hu", &h, &m, &s);
    
    // long int time_all = ((time_h + h) * 3600) + ((time_m + m) * 60) + (time_s + s);
    // time_s = time_all % 60;
    // time_m = (time_all / 60) % 60;
    // time_h = (time_all / 3600) % 24;
    // printf("%02hu:%02hu:%02hu", time_h, time_m, time_s);

    // float a;
    // scanf("%f", &a);
    // printf("%.1f", --a);

    // int h,w;
    // scanf("%d, %d", &h,&w);
    // printf("%d", ++h * ++w);
    
    // int rect_width = 640, rect_height = 480;
    // int w = 1, h = 1;
    // scanf("%d; %d", &w, &h);
    // int c = (rect_width / w) * (rect_height / h);
    // printf("%d", c);

    // int count = 1;
    //count = count + 3;
    // count += 3;
    // count -= 3;
    // count *= 3;
    // count /= 3;
    // count %= 3;
    // count = 5;
    // count -= 3-5;
    // double var_d = 10;
    // short p = 2;
    
    // count -= 3 - 5;
    // var_d /= 3.0 + p;
    // p *= 20 - 5;


    // printf("count = %d, var_d = %.2f, p = %d\n", count,var_d,p);

    // int a,b;
    // scanf("%d %d", &a,&b);
    // a *= 3;
    // b -= 10;
    // printf("%d", a * b);

    // float w,h;
    // scanf("%f %f", &w,&h);
    // printf("Периметр:%.1f", (w + h)*2);
    
    // int s,m;
    // scanf("%d %d", &s,&m);
    // float one = s / 100.f;
    // float money = one * m;
    // float full_money = s - money;
    // printf("%.2f", full_money * 2);

    // int speed;
    // scanf("%d", &speed);
    // float S = (float)(speed * 3600)/ 1000;
    // printf("%.1f", S);

    // true - истина (все что не ноль) (1 по умолч.)
    // faise - лож (0 по умолч.)
    
    // _Bool fl_view = 0;
    // printf("Size of _Bool: %d\n", fl_view);
    // bool a = true;
    // bool b = true;
    // printf("== %d", a == b);
    // printf("!= %d", a != b);
    // printf("< %d", a < b);
    // printf("> %d", a > b);

    // double x = 5.67;
    // int var_i = 7;

    // bool fl_viev = x < 10;
    // bool res_1 = 5 > 7;
    // bool res_2 = x + 2 >= 10.56;
    // bool res_3 = var_i == 7;
    // bool res_4 = var_i != 7;

    // int digit;
    // scanf("%d", &digit);

    // bool even = digit % 2 == 0;
    // printf("%d\n", even);

    // логическое и && (m&m)
    // double y = 1.85;
    // bool is_range = y >= -2 && y <= 5;
    // bool is_not_range = y < -2 || y > 5;

    // int x = 5;
    // bool is_correct = x % 2 == 0 || x % 3 == 0 && x > 5;

    // float a;
    // scanf("%f", &a);
    // int freg = (int)a % 5 == 0;
    // printf("%d", freg);

    // float a;
    // scanf("%f", &a);
    // int x = a >= -5.45 && a <= 10.37;
    // printf("%d", x);

    // float a;
    // scanf("%f", &a);
    // int g = (a >= -10 && a <= 0)||(a >= 5 && a <= 12); 
    // printf("%d", g);

    // float x,y;
    // scanf("%f %f", &x,&y);
    // int spex = (x > -5 && y > 0)&&(x < 10 && y < 7);
    // printf("%d", spex);
    
    // float x,y;
    // scanf("%f %f", &x,&y);
    // int spex = (x > -5 || x > 10)||(y < 0 || y > 7);
    // printf("%d", spex);

    // int a,b;
    // scanf("%d %d", &a,&b);
    // if (a == b) printf("%d", a);
    // else if (a > b) printf("%d %d", b, a);
    // else if (b > a) printf("%d %d", a, b);

    // int a,b,c;
    // scanf("%d, %d, %d", &a,&b,&c);
    // int a_1 = a * a;
    // int b_2 = b * b;
    // int c_3 = c * c;
    // if(c_3 == a_1 + b_2) printf("yes");
    // else if (c_3 != a_1 + b_2) printf("no");

    // int a;
    // scanf("%d", &a);
    // if( a == 1) printf("понедельник");
    // else if( a == 2) printf("вторник");
    // else if( a == 3) printf("среда");
    // else if( a == 4) printf("четверг");
    // else if( a == 5) printf("пятница");
    // else if( a == 6) printf("суббота");
    // else if( a == 7) printf("воскресенье");
    // else if( a > 7 || a < 1) printf("неверный номер дня недели");

    // unsigned int a;
    // scanf("%d", &a);
    // if(a % 10 == 3) printf("yes");
    // else printf("no");

    // int a,b,c;
    // scanf("%d %d %d", &a,&b,&c);
    // int b_1 = b * b;
    // int D = b_1 - 4 * a * c;
    // if(D >= 0) printf("real roots exist");
    // else printf("%d", D);

    // float a,b,c;
    // scanf("%f, %f, %f", &a,&b,&c);
    // if(a <= b && a <= c) printf("%.2f", a);
    // else if (b <= a && b <= c) printf("%.2f", b);
    // else printf("%.2f", c);

    // float a,b,c;
    // scanf("%f, %f, %f", &a,&b,&c);
    // if(a < (b + c) && b < (a + c) && c < (a + b)) printf("yes");
    // else printf("no");

    // double a = 7.5, b = -3.43;
    // double max_ab;

    // if(a > b) max_ab = a;
    // else max_ab = b;

    // max_ab = a > b ? a : b;

    // double a = 7.5, b = -3.43;
    // double res = (a > b) ? a + 2 : b - 5;

    // int x = -3;
    // printf("%d\n", abs(x));

    // int k,m;
    // scanf("%d, %d", &k, &m);
    // int min_k = k < m ? k * k : m * m;
    // printf("%d", min_k);

    // int x;
    // scanf("%d", &x);
    // printf("%d", x > 0 ? x : 0);

    // int x,y;
    // scanf("%d; %d", &x,&y);
    // printf("%s", x == y ? "square" : "rectangle");

    // int width,height;
    // scanf("%d %d", &width,&height);
    // int border = max(width,height) + 8;
    // printf("%d", border);

    // short type = 0;
    // double w, h;

    // if(scanf("%hd %lf %lf", &type, &w, &h) != 3) {
    //     printf("Input error.");
    
    // type == 1 ? printf("%.1lf", w * h) : type == 2 ? printf("%.1lf", 2 *(w + h)) : printf("%d", -1);
    // printf("%d", spex);
    
    // unsigned int a,b,c;
    // scanf("%d %d %d", &a, &b, &c);
    // a < (b + c) && b < (a + c) && c < (a + b) ? printf("yes") : printf("no");

    int a,b,h;
    scanf("%d, %d, %d", &a,&b,&h);
    float S = (((float)a + (float)b) / 2) * (float)h;
    printf("%.1f", S);
    
    
    return 0;
}

// int max(int a, int b){
//     return a > b ? a : b;
// }

