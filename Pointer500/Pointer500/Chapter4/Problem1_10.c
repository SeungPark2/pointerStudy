//
//  Problem1_.c
//  Pointer500
//
//  Created by ParkSeungtae on 2020/10/03.
//  Copyright © 2020 ParkSeungtae. All rights reserved.
//

#include <stdio.h>

void f(void);
int intVoid (int a);
int intMultiplication(int a, int b);
float multiplication(float a);
float floatMultiplication(float a, float b);
char switchChar(char c);
char charArr(char a, char b, char c);
int asc(char c);
double circumference(double d, double dd);
int circumference2(double d, double dd);

void Problem1_10__2() {
    
    // 예제 1
    
    printf("printf in the main \n");
    f();
    
    // 예제 2
    
    int x, y;
    x = 5;
    y = intVoid(x);
    printf("%d \n", y);
    
    // 얘재 3
    
    x = 5;
    y = 3;
    
    printf("%d \n", intMultiplication(x, y));
    
    // 예제 4
    
    float ff = 5.5;
    
    printf("%f \n", multiplication(ff));
    
    // 예제 5
    
    float fff = 3.1;
    
    printf("%f \n", floatMultiplication(ff, fff));
    
    // 예제 6
    
    char c = 'A', b;
    
    b = switchChar(c);
    printf("c: %c b: %c \n", c, b);
    
    // 예제 7
    
    char aa = 'A', bb = 'F', cc = 'D', yy;
    
    yy = charArr(aa, bb, cc);
    
    printf("%c \n", yy);
    
    // 예제 8
    
    char ccc = 'C';
    int i;
    
    i = asc(ccc);
    
    printf("%d \n", i);
    
    // 예제 9
    
    double d = 3.14159, r = 3.0;
    
    printf("%f \n", circumference(d, r));
    
    // 예제 10
    
    printf("%d \n", circumference2(d, r));
}

void f(void) {
    
    printf("printf in the function f() \n");
}

int intVoid (int a) {
    
    int aa = a * a;
    printf("x: %d \n", a);
    return aa;
}

int intMultiplication (int a, int b) {
    
    printf("a: %d, b: %d \n", a, b);
    int aa;
    aa = a * b;
    return aa;
}

float multiplication(float a) {
    
    printf("%f \n", a);
    return a * a;
}

float floatMultiplication(float a, float b) {
    
    printf("a: %f b: %f \n", a, b);
    return a * b;
}

char switchChar(char c) {
    
    printf("%c \n", c);
    
    char cc = 'a', trash;
    
    trash = c;
    c = cc;
    cc = trash;
    
    printf("%c \n", c);
    
    return c;
}

char charArr(char a, char b, char c) {
    
    char str = ' ';
    
    if ((a > b) && (a > c)) { str = a; }
    if ((b > a) && (b > c)) { str = b; }
    if ((c > a) && (c > b)) { str = c; }
    
    return str;
}

int asc(char c) {
    
    int asc;
    asc = c;
    
    return asc;
}

double circumference (double d, double dd) {
    
    double cir;
    
    cir = 2 * d * dd;
    
    return cir;
}

int circumference2 (double d, double dd) {
    
    int cir;
    
    cir = 2 * d * dd;
    
    return cir;
}
