//
//  EP11_.c
//  Pointer500
//
//  Created by ParkSeungtae on 2020/10/08.
//  Copyright © 2020 ParkSeungtae. All rights reserved.
//

#include <stdio.h>

char EP11(char c, int i);
int EP12(int arr[6]);
void EP13(char arr[5]);
int EP14(int arr[2][3]);
void EP15(float arr[3][3]);
void EP16(char arr[25]);
void EP17(char arr[5][10]);
void EP18(char *c);
void EP19(char *c[5]);
void EP20(int *x, int *y, int *x1, int *y1);

void EP11_20() {
    
    // 연습문제 11
    
    char c = 'A';
    int x = 5;
    
    printf("%c \n", EP11(c, x));
    
    // 연습문제 12
    
    int arr[6] = { 15, 23, 48, 26, 13, 29 };
    
    printf("%d \n", EP12(arr));
    
    // 연습문제 13
    
    char arr2[5] = { 'B', 'A', 'S', 'I', 'C' };
    
    EP13(arr2);
    
    printf("\n");
    
    // 연습문제 14
    
    int arr3[2][3] = { 45, 55, 15, 47, 88, 33 }, result;
    
    result = EP14(arr3);
    
    printf("%d \n", result);
    
    // 연습문제 15
    
    float arr4[3][3] = { 3.12, 63.4, 675.31, 23.3, 91.1, 161.83, 12.56, 47.789, 98.99 };
    
    EP15(arr4);
    
    printf("\n");
    
    // 연습문제 16
    
    char arr5[25] = "C language programming";
    
    EP16(arr5);
    
    // 연습문제 17
    
    char arr6[5][10] = { "Turbo C", "Quick C", "C++", "Run C", "Lattice C" };
    
    EP17(arr6);
    
    // 연습문제 18
    
    char *cc = "computer program";
    
    EP18(cc);
    
    // 연습문제 19
    
    char *ccc[5] = { "Turbo C", "Quick C", "C++", "Run C", "Lattice C" };
    
    EP19(ccc);
    
    // 연습문제 20
    
    int xx = 150, yy = 3, x1, y1;
    
    EP20(&xx, &yy, &x1, &y1);
    
    printf("%d %d \n", x1, y1);
}

char EP11(char c, int i) {
    
    int x = c;
    
    return x + i;
}

int EP12(int arr[6]) {
    
    int sum = 0, i;
    
    for (i = 0; i < 6; i++)
        sum += arr[i];
    
    return sum;
}

void EP13(char arr[5]) {
    
    int i;
    
    for (i = 0; i < 5; i++)
        printf("%c ", arr[i]);
}

int EP14(int arr[2][3]) {
    
    return arr[0][0] + arr[1][2];
}

void EP15(float arr[3][3]) {
    
    int i, j;
    
    for (i = 0; i < 3; i++) {
        
        for (j = 0; j < 3; j++) {
            
            printf("%f ", arr[i][j]);
        }
    }
}

void EP16(char arr[25]) {
    
    printf("%s \n", arr);
}

void EP17(char arr[5][10]) {
    
    int i;
    
    for (i = 0; i < 5; i++)
        printf("%s \n", arr[i]);
}

void EP18(char *c) {
    
    printf("%s \n", c);
}

void EP19(char *c[5]) {
    
    int i;
    
    for (i = 0; i < 5; i++)
        printf("%s \n", c[i]);
    
}

void EP20(int *x, int *y, int *x1, int *y1) {
    
    *x1 = *x * *y;
    *y1 = *x / *y;
}
