//
//  Problem11_.c
//  Pointer500
//
//  Created by ParkSeungtae on 2020/10/04.
//  Copyright © 2020 ParkSeungtae. All rights reserved.
//

#include <stdio.h>

float method1(double d, double d2, int i);
int method2(int arr[]);
void method3(char arr[]);
int method4(int arr[4][3]);
float method5(float arr[3][2]);
void method6(char arr[10]);
void method7(char arr[3][10]);
void method8(char *arr);
void method9(char *arr[3]);
void method10(int *x, int *y, int *x1, int *y1);

void Problem11_20() {
    
    // 예제 1
    
    double d = 3.14159, r = 3.6;
    int k = 5;
    
    printf("%f \n", method1(d, r, k));
    
    // 예제 2
    
    int arr[5] = { 5, 8, 2, 4, 3 };
    
    printf("%d \n", method2(arr));
    
    // 예제 3
    
    char arr2[4] = { 'B', 'O', 'O', 'K' };
    
    method3(arr2);
    printf("\n");
    
    // 예제 4
    
    int arr3[4][3] = { 12, 32, 5, 67, 8, 33, 21, 61, 8, 3, 2, 89 };
    
    printf("%d \n", method4(arr3));
    
    // 에제 5
    
    float arr4[3][2] = { 0.12, 3.4, 5.67, 83.3, 2.1, 61.83 };
    
    printf("%f \n", method5(arr4));
    
    // 예제 6
    
    char arr5[10] = "Turbo C";
    
    method6(arr5);
    
    // 예제 7
    
    char arr6[3][10] = { "Quick C", "Turbo C", "C++"};
    
    method7(arr6);
    
    // 예제 8
    
    char *p = "Turbo C";
    
    method8(p);
    
    // 예제 9
    
    char *p2[3] = { "Quick C", "Turbo C", "C++" };
    
    method9(p2);
    
    // 예제 10
    
    int x = 5, y = 3, x1, y1;
    
    method10(&x, &y, &x1, &y1);
    
    printf("sum: %d, cha: %d \n", x1, y1);
}

float method1(double d, double d2, int i) {
    
    float total;
    
    total = d * d2 * i;
    
    return total;
}

int method2(int arr[5]) {
    
    int sum = 0, i;
    
    for (i = 0; i < 5; i++)
        sum += arr[i];
    
    return sum;
}

void method3(char arr[4]) {
    
    int i;
    
    for (i = 0; i < 4; i++)
        printf("%c ", arr[i]);
}

int method4(int arr[4][3]) {
    
    int sum;
    
    sum = arr[3][2] + arr[0][2];
    
    return sum;
}

float method5(float arr[3][2]) {
    
    int i, j;
    float sum = 0;
    
    for (i = 0; i < 3; i++)
        for (j = 0; j < 2; j++)
            sum += arr[i][j];
    
    return  sum;
}

void method6(char arr[10]) {
    
    printf("%s \n", arr);
}

void method7(char arr[3][10]) {
    
    int i;
    
    for (i = 0; i < 3; i++)
        printf("%s \n", arr[i]);
}

void method8(char *arr) {
    
    printf("%s \n", arr);
}

void method9(char *arr[3]) {
    
    int i;
    
    for ( i = 0; i < 3; i++)
        printf("%s \n", arr[i]);
}

void method10(int *x, int *y, int *x1, int *y1) {
    
    *x1 = *x + *y;
    *y1 = *x - *y;
}
