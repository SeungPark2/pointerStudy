//
//  EP21_.c
//  Pointer500
//
//  Created by ParkSeungtae on 2020/10/09.
//  Copyright © 2020 ParkSeungtae. All rights reserved.
//

#include <stdio.h>

struct company23 {
    
    char t[15];
    int sales;
    int profit;
    float rates;
};

void EP21(double *x, double *y, double *x1, double *y1);
void EP22(int *x, int *y, int *x1, int *y1);
void EP23(struct company23 *s);
void EP24(struct company23 *s);
int EP25(int x, int y);
int EP26(void);
void EP27(void);
void EP28(void);
char *EP29(char *arr[3]);
char *EP30(char *arr[3]);

void EP21_30() {
    
    // 연습문제 21
    
    double x = 5.647, y = 1.253, x1, y1;
    
    EP21(&x, &y, &x1, &y1);
    
    printf("%f %f \n", x1, y1);
    
    // 연습문제 22
    
    int xx = 50, yy = 5, xx1, yy1;
    
    EP22(&xx, &yy, &xx1, &yy1);
    
    // 연습문제 23
    
    struct company23 s = { "Korea Corp.", 1500, 178 }, *p;
    p = &s;
    
    EP23(p);
    
    // 연습문제 24
    
    struct company23 s2[2] = {
        { "Korea Corp.", 1500, 178 },
        { "Seoul Corp.", 1200, 270 }
    }, *p2;
    p2 = s2;
    
    EP24(p2);
    
    // 연습문제 25
    
    int xxx = 5, yyy = 10, result;
    
    result =EP25(xxx, yyy);
    
    printf("%d \n", result);
    
    // 연습문제 26
    
    printf("%d \n", EP26());
    
    // 연습문제 27
    
    EP27();
    
    // 연습문제 28
    
    EP28();
    
    // 연습문제 29
    
    char *country[3] = { "Korea", "USA", "Canada" };
    
    printf("%s \n", EP29(country));
    
    // 연습문제 30
    
    char *str;
    
    str = EP30(country);
    printf("%s \n", str + 2);
    
}

void EP21(double *x, double *y, double *x1, double *y1) {
    
    *x1 = *x + *y;
    *y1 = *x - *y;
}

void EP22(int *x, int *y, int *x1, int *y1) {
        
    *x1 = *x * *y1;
    *y1 = *x / *y;
}

void EP23(struct company23 *s) {
    
    float profit = s->sales / s->profit;
    
    printf("%s %d %d %f \n", s->t, s->sales, s->profit, profit);
}

void EP24(struct company23 *s) {
    
    int i;
    
    for ( i = 0; i < 2; i++) {
        
        float profit = s->sales / s->profit;
        printf("%s %d %d %f \n", s->t, s->sales, s->profit, profit);
        s++;
    }
}

int EP25(int x, int y) {
    
    return (x * x) + (y * y);
}

int EP26(void) {
    
    int x, y;
    
    printf("가로: ");
    scanf("%d", &x);
    printf("세로: ");
    scanf("%d", &y);
    
    return x * y;
}

void EP27(void) {
    
    char c;
    
    printf("문자 입력: ");
    scanf("%c", &c);
    printf("%c \n", c);
}

void EP28(void) {
    
    char c[5];
    
    printf("문자열 입력: ");
    scanf("%s", c);
    printf("String = %s \n", c);
}

char *EP29(char *arr[3]) {
    
    return arr[2];
}

char *EP30(char *arr[3]) {
    
    return arr[0];
}
