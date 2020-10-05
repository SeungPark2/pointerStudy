//
//  Problem21_.c
//  Pointer500
//
//  Created by ParkSeungtae on 2020/10/05.
//  Copyright © 2020 ParkSeungtae. All rights reserved.
//

#include <stdio.h>

struct Company {
    
    char t[15];
    int s;
    int e;
};

void method1_1(double *x, double *y, double *x1, double *y1);
void method1_2(double x, double y, double *x1, double *y1);
void method1_3(struct Company *c);
void method1_4(struct Company *c);
int method1_5(int x);
int method1_6(void);
char method1_7(void);
char *method1_8(void);
char buffer[80];
char *method1_9(void);
char *method1_10(void);

void Problem21_30() {
    
    // 예제 21
    
    double x1 = 5.647, x2 = 1.253, y1, y2;
    
    method1_1(&x1, &x2, &y1, &y2);
    
    printf("%f %f \n", y1, y2);
    
    // 예제 22
    
    double xx1 = 5.3, xx2 = 5.3, yy1, yy2;
    
    method1_2(xx1, xx2, &yy1, &yy2);
    
    printf("%f %f \n", yy1, yy2);
    
    // 예제 23
    
    struct Company c = { "Korea Corp", 1500, 3900 }, *p;
        
    p = &c;
    
    method1_3(p);
    
    // 예제 24
    
    struct Company arr[2] = {
        { "Korea Corp", 1500, 3900 },
        { "Seoul Corp", 1200, 2700 }
    }, *p1;
    
    p1 = arr;
    
    method1_4(p1);
    
    // 예제 25
    
    int a = 5;
    
    printf("%d \n", method1_5(a));
    
    // 예제 26
    
    int value = method1_6();
    printf("%d \n", value * value);
    
    // 예제 27
    
    printf("character = %c \n", method1_7());
    
    // 예제 28
    
    printf("String = %s \n", method1_8());
    
    // 예제 29
    
    printf("%s \n", method1_9());
    
    // 예제 30
    
    char *str = method1_10();
    
    printf("%s \n", ++str);
}

void method1_1(double *x, double *y, double *x1, double *y1) {
    
    *x1 = *x * *y;
    *y1 = *x / *y;
    
    return ;
}

void method1_2(double x, double y, double *x1, double *y1) {
    
    *x1 = x + y;
    *y1 = x - y;
    
    return ;
}

void method1_3(struct Company *c) {
    
    printf("%s %d %d \n", c->t, c->s, c->e);
    
    return ;
}

void method1_4(struct Company *c) {
    
    int i;
    
    for (i = 0; i < 2; i++) {
        
        printf("%s %d %d \n", c->t, c->s, c->e);
        c++;
    }
    
    return ;
}

int method1_5(int x) {
    
    return ( x * x );
}

int method1_6(void) {
    
    int value;
    
    scanf("%d", &value);
    
    printf("%d \n", value);
    
    return value;
}

char method1_7(void) {
    
    char c;
    
    scanf("%c", &c);
    
    return c;
}

char *method1_8(void) {
    
    char *c;
    c = buffer;
    
    scanf("%s", c);
    
    return c;
}

char *method1_9(void) {
    
    char *c[3] = { "Korea", "USA", "Cananda" };
    
    return c[1];
}

char *method1_10(void) {
    
    char *c[3] = { "Korea", "USA", "Canada" };
    
    return c[1];
}
