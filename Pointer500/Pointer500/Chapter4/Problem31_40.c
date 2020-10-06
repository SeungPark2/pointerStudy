//
//  Problem31.c
//  Pointer500
//
//  Created by ParkSeungtae on 2020/10/06.
//  Copyright © 2020 ParkSeungtae. All rights reserved.
//

#include <stdio.h>
#include <string.h>

char *method31(void);
char *method33(void);
char *method34(void);
int *method35(void);
char *method36(void);
int method37_1(int x, int y);
int method37_2(int x, int y);
void method38_A(void);
void method38_B(void);
void method38_C(void);
void a(void);
void method39(void (*a)(void), int x, int y);
int sum(int x, int y);
int minus(int x, int y);

void Problem31_40() {
    
    // 예제 31
    
    char c[10], *p;
    
    p = method31();
    
    strcpy(c, p);
    
    printf("%s \n", c);
    
    // 예제 32
    
    char *p1 = method31();
    
    printf("%s \n", p1);
    
    // 에제 33
    
    char *p2 = method33();
    
    printf("%s \n", p2);
    
    // 예제 34
    
    printf("%s \n", method34());
    
    // 예제 35
    
    int *p3 = method35();
    
    printf("%d \n", *(p3 + 6));
    
    // 예제 36
    
    char *p4 = method36();
    
    printf("%c %c %c %c \n", *p4, *(p4 + 1), *(p4 + 2), *(p4 + 3));
    
    // 예제 37
    
    int x = 5, y = 3, (*ff)(int x, int y), x1, y1;
    
    ff = method37_1;
    x1 = ff(x, y);
    
    ff = method37_2;
    y1 = ff(x, y);
    
    printf("%d %d \n", x1, y1);
    
    // 예제 38
    
    void (*cc)(void);
    
    cc = method38_A;
    cc();
    cc = method38_B;
    cc();
    cc = method38_C;
    cc();
    
    printf("\n");
    
    // 예제 39
    
    int aa = 1, b = 0;
    
    method39(a, aa, b);
    
    // 예제 40
    
    int (*p5[2])(int, int), xx = 10, yy = 5;
    
    p5[0] = sum;
    p5[1] = minus;
    
    printf("%d \n", (*p5[0])(xx,yy));
    printf("%d \n", (*p5[1])(xx,yy));
    
}

char *method31(void) {
    
    static char country[10] = "Korea";
    
    return country;
}

char *method33(void) {
    
    static char country[3][10] = { "Korea", "USA", "Canada" };
    
    return country[0];
}

char *method34(void) {
    
    static char country[3][10] = { "Korea", "USA", "Canada" };
    
    return country[2];
}

int *method35(void) {
    
    static int value[10] = { 3, 5, 8, 2, 6, 1, 8, 9, 7, 1 };
    
    return value;
}

char *method36(void) {
    
    static char word[5] = { 'A', 'B', 'C', 'O', 'K' };
    
    return word;
}

int method37_1(int x, int y) {
    
    return x + y;
}

int method37_2(int x, int y) {
    
    return x - y;
}

void method38_A(void) {
    
    printf("A");
}

void method38_B(void) {
    
    printf("B");
}

void method38_C(void) {
    
    printf("C");
}

void a(void) {
    
    printf("C \n");
}

void method39(void (*a)(void), int x, int y) {
    
    if (x == y) {
        
        printf("A \n");
    }
    
    if (x == 0 || y == 0) {
        
        printf("B \n");
    }
    
    if (x == 1 && y == 0) {
        
        a();
    }
}

int sum(int x, int y) {
    
    return x + y;
}

int minus(int x, int y) {
    
    return x - y;
}
