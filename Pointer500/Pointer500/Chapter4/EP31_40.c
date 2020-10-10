//
//  EP31_.c
//  Pointer500
//
//  Created by ParkSeungtae on 2020/10/10.
//  Copyright © 2020 ParkSeungtae. All rights reserved.
//

#include <stdio.h>

char *EP31(void);
char *EP33(void);
char *EP34(void);
int *EP35(void);
char *EP36(void);
int EP37_1(int x, int y);
int EP37_2(int x, int y);
void EP38_1(void);
void EP38_2(void);
void EP38_3(void);
void EP38_4(void);
void EP39_1(void);
void EP39_2(void);
void EP39_3(void v(void));
char EP40(void);

void EP31_40() {
    
    // 연습문제 31
    
    char c[10], *p;
    
    p = EP31();
    
    strcpy(c, p);
   
    printf("%s \n", c);
    
    // 연습문제 32
    
    char *pc;
    
    for (pc = EP31(); *pc != '\0'; pc++)
        printf("%c", *pc);
    
    printf("\n");
    
    // 연습문제 33
    
    char *pp;
    
    pp = EP33();
    
    printf("%s \n", pp);
    
    // 연습문제 34
    
    char *pcc;
    
    pcc = EP34();
    
    printf("%s \n", pcc);
    
    // 연습문제 35
    
    int *pi;
    
    pi = EP35();
    
    printf("%d \n", *(pi + 3) * *(pi + 1));
    
    // 연습문제 36
    
    char *ppcc;
    
    ppcc = EP36();
    
    printf("%c%c%c%c%c \n", *ppcc, *(ppcc + 2), *(ppcc + 3), *(ppcc + 1), *(ppcc + 2));
    
    // 연습문제 37
    
    int x = 15, y = 5, x1, y1, (*ff)();
        
    ff = EP37_1;
    x1 = ff(x, y);
    
    printf("%d \n", x1);
    
    ff = EP37_2;
    y1 = ff(x, y);
    
    printf("%d \n", y1);
    
    // 연습문제 38
    
    void (*fv)(void);
    
    fv = EP38_1;
    fv = EP38_2;
    fv = EP38_3;
    fv = EP38_4;
    
    // 연습문제 39
    
    EP39_3(EP39_1);
    EP39_3(EP39_2);
    
    // 연습문제 40
    
    char c2;
    
    c2 = EP40();
    
    printf("%c \n", c2);
}

char *EP31(void) {
    
    static char country[10] = "Canada";
    
    return country;
}

char *EP33(void) {
    
    static char country[3][10] = { "Korea", "USA", "Canada" };
    
    return country[0];
}

char *EP34(void) {
    
    static char country[3][10] = { "Korea", "USA", "Canada" };
    
    return country[1];
}

int *EP35(void) {
    
    static int value[10] = { 3, 5, 8, 2, 6, 1, 8, 9, 7, 1 };
    
    return value;
}

char *EP36(void) {
    
    static char word[4] = { 'S', 'E', 'O', 'U' };
    
    return word;
}

int EP37_1(int x, int y) {
    
    return x * y;
}

int EP37_2(int x, int y) {
    
    return x / y;
}

void EP38_1(void) {
    
    printf("BASIC \n");
}

void EP38_2(void) {
    
    printf("C \n");
}

void EP38_3(void) {
    
    printf("FORTRAN \n");
}

void EP38_4(void) {
    
    printf("COBOL \n");
}

void EP39_1(void) {
    
    printf("START \n");
}

void EP39_2(void) {
    
    printf("END \n");
}

void EP39_3(void v(void)) {
    
    printf("A \n");
    v();
}

char EP40(void) {
 
    char c;
    int i;
    
    scanf("%c", &c);
    
    i = c;
    
    if (i < 97) {
    
        i = c + 32;
        
        c = i;
        return c;
    }
    
    i = c - 32;
        
    c = i;
    
    return c;
}
