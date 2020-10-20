//
//  Problem41_.c
//  Pointer500
//
//  Created by ParkSeungtae on 2020/10/07.
//  Copyright © 2020 ParkSeungtae. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int method41(void);
void EP1(void);
int EP2(int x);
int EP3(int x, int y);
double EP4(double x);
double EP5(double x, double y);
char EP6(char c, char c2);
char EP7(char w, char s);
int EP8(char c);
double EP9(double d);
int EP10(int x, double d);

void Problem41_EP10() {
    
    // 예제 41
    
    printf("%d \n", method41());
    
    // 연습문제 1
    
    printf("abcdefghijklm \n");
    EP1();

    // 연습문제 2
    
    int x = 10;
    
    printf("%d \n", EP2(x));
    
    // 연습문제 3
    
    int xx = 10, yy = 2;
    
    printf("%d \n", EP3(xx, yy));
    
    // 연습문제 4
    
    double d = 3.14159;
    
    printf("%f \n", EP4(d));
    
    // 연습문제 5
    
    double d1 = 145.12, d2 = 45.431;
    
    printf("%f \n", EP5(d1, d2));
    
    // 연습문제 6
    
    char a = 'a', b = 'b', c;
    
    c = EP6(a, b);
    
    printf("%c \n", c);
    
    // 연습문제 7
    
    char w = 'w', s = 's';
    
    printf("%c \n", EP7(w, s));
    
    // 연습문제 8
    
    char A = 'A', result;
    
    result = EP8(A);
    
    printf("%c \n", result);
    
    // 연습문제 9
    
    double r = 30.0;
    
    printf("%f \n", EP9(r));
    
    // 연습문제 10
    
    int z = 50;
    double r2 = 25.0;
    
    printf("%d \n", EP10(z, r2));
}

int method41(void) {
    
    int num;
    
    scanf("%d", &num);
    
    if (num < 0) {
        
        return -num;
    }
    
    return num;
}

void EP1(void) {
    
    printf("NOPQRSTUVWXYZ");
}

int EP2(int x) {
    
    int yy = 2;
    
    return x / yy;
}

int EP3(int x, int y) {
    
    return x / y;
}

double EP4(double x) {
    
    return 2.0 * 2.0 * x;
}

double EP5(double x, double y) {
    
    return x / y;
}

char EP6(char c, char c2) {
    
    char cc = c, cc2 = c2, trash;
    
    trash = cc;
    cc = cc2;
    cc2 = cc;
    
    return cc;
}

char EP7(char w, char s) {
    
    if (w > s) {
        
        return w;
    }
    else {
        
        return s;
    }
}

int EP8(char c) {
    
    return c + 5;
}

double EP9(double d) {
    
    return sin(d/180.0*3.14159);
}

int EP10(int x, double d) {
    
    return (int)((double)d*tan(d/180.0*3.14159));
}
