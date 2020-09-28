//
//  ExerciseProblem9_.c
//  Pointer500
//
//  Created by ParkSeungtae on 2020/09/26.
//  Copyright © 2020 ParkSeungtae. All rights reserved.
//

#include <stdio.h>

void ExerciseProblem9_20() {
    
    // 연습문제 9
    
    int i;
    double d[3] = { 21.21, 456.26, 563.193 }, *pd;
    
    for (i = 0; i < 3; i++) {
     
        pd = &d[i];
        printf("%f ", *pd);
    }
    
    printf("\n");
        
    // 연습문제 10
    
    char c[5] = { 'A', 'B', 'C', 'D', 'E' }, *pc;
    
    for (i = 0; i < 5; i++) {
        
        pc = &c[i];
        
        printf("c 값: %c, c 주소: %x, pc: %c \n", c[i], &c[i], *pc);
    }
    
    printf("\n");
    
    // 연습문제 11
    
    int arr[5] = { 5, 4, 2, 6, 9 }, *pi, sum = 0;
    
    pi = arr;
    
    for (i = 0; i < 5; i++) {
        
        sum += *pi;
        pi++;
    }
    
    printf("sum: %d \n", sum);
    
    // 연습문제 12
    
    char c2[6] = { 'A', 'B', 'C', 'D', 'E', 'F' }, *pc2 = c2;
    
    printf("*(pc2+5): %c \n", *(pc2+5));       // pc2 == &c2[0], pc2+5 == &c2[5] -> *(pc2+5) == 'F'
    printf("*pc2: %c \n", *pc2);               // pc2 == &c2[0] -> *p == 'A'
    printf("*(pc2+2): %c \n", *(pc2+2));       // pc2 == &c2[0], pc2+2 == &c2[2] -> *(pc2+5) == 'C'
    printf("*(pc2+4): %c \n", *(pc2+4));       // pc2 == &c2[0], pc2+4 == &c2[4] -> *(pc2+5) == 'E'
    
    // 연습문제 13
    
    char c3[7] = { 'A', 'D', 'X', 'H', 'L', 'R', 'Z' }, *pc3;
    
    for (pc3 = c3; *pc3 != 'Z'; pc3++)
        printf("%c ", *pc3);
    
    printf("\n");
    
    // 연습문제 14
    
    int arr2[5] = { 6, 4, 3, 2, 5 }, *pi2 = arr2, sum2;
    
    for (i = 0; i < 3; i++) {
        
        sum2 = *pi2;
        pi2 += 2;
    }
    
    printf("sum: %d \n", sum);
    
    // 연습문제 15
    
    char c4[3] = { 'A', 'B', 'C' }, *pc4 = c4;
    
    printf("*pc4+1: %c \n", *pc4+1);    // pc4 == 'A' == 65 -> pc4+1 == 66 == 'B'
    printf("*pc4: %c \n", *pc4);        // pc4 == 'A'
    printf("*pc4+2: %c \n", *pc4+2);    // pc4 == 'A' == 65 -> pc4+2 == 67 == 'C'
    
    // 연습문제 16
    
    char c5[10] = { 'c', '_', 'l', 'a', 'n', 'g', 'u', 'a', 'g', 'e' }, *pc5, *q;
    
    pc5 = c5;
    q = pc5 + 10;
    
    for (pc5 = c5; pc5 != q; pc5++)
        printf("%c ", *pc5);
    
    printf("\n");
    
    // 연습문제 17
    
    int arr3[10] = { 11, 22, 43, 56, 36, 73, 45, 66, 98, NULL }, *pi3;
    
    for (pi3 = arr3; *pi3 != NULL; pi3++)
        printf("%d ", *pi3);
    
    printf("\n");
    
    // 연습문제 18
    
    int arr4[10] = { 11, 22, 43, 56, 36, 73, 45, 66, 98, 73 }, *pi4, *pi5, trash;

    trash = 73;
    pi5 = &trash;
    printf("%d\n", *pi5);

    for (i = 0; i < 10; i++) {

        pi4 = &arr4[i];

        if (*pi4 == *pi5) {

            printf("*pi5: %d, %d번째 \n", *pi5, i);
            break;
        }
    }
    
    // 연습문제 19
    
    int x = 100, *pp = &x, **pq = &pp, ***pz = &pq;

    printf("pz: %x \n", pz);
    printf("*pz: %x \n", *pz);
    printf("**pz: %x \n", **pz);      // 이중포인터: 포인터의 주소값을 가지고 있는 변수
    printf("***pz: %d \n", ***pz);    // ***pz == &pq -> **pz == &pp -> *pz == &x -> 100
    
    // 연습문제 20
    
    double d2 = 1.345, *pd2 = &d2, **pd3 = &pd2, ***pd4 = &pd3;
    
    printf("pd4: %x \n", pd4);
    printf("*pd: %x \n", *pd4);
    printf("**pd4: %x \n", **pd4);
    printf("***pd4: %f \n", ***pd4);    // ***pd4 == &pd3 -> **pd3 == &pd2 -> *pd2 == &x -> 1.345
}
