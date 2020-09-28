//
//  ExerciseProblem21_.c
//  Pointer500
//
//  Created by ParkSeungtae on 2020/09/27.
//  Copyright © 2020 ParkSeungtae. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void ExerciseProblem21_29() {
    
    // 연습문제 21

    int *p;

    p = (int *)4242; // 주소 지정
    *p = -2603;       // 갑 입력

    printf("%d \n", *p);


    // 연습문제 22

    int *pi1, *pi2, x, y;

    pi1 = &x;
    pi2 = &y;

    scanf("%d", &x);
    scanf("%d", &y);

    printf("*pi1: %d \n", *pi1);
    printf("*pi2: %d \n", *pi2);
    printf("*pi1+*pi2: %d \n", *pi1 + *pi2);

    // 연습문제 23

    float py = 3.14159, r;

    scanf("%f", &r);

    printf("반지름: %f \n", r);
    printf("원주길이: %f \n", 2.0 * py * r);

    // 연습문제 24

    char c, *pc;

    pc = &c;

    scanf("%c", &c);

    printf("c: %c, pc: %c", c, *pc);

    // 연습문제 25

    int count, *pi3, i, sum = 0;

    scanf("%d", &count);

    pi3 = (int *)calloc(count, sizeof(int));

    for (i = 0; i < count; i++) {

        scanf("%d", &pi3[i]);
        sum += pi3[i];
    }

    printf("합: %d n", sum);

    free(pi3);

    // 연습문제 26

    int count2, *pi4;

    scanf("%d", &count2);

    pi4 = (int *)calloc(count2, sizeof(int));

    for (i = 0; i < count2; i++)
        scanf("%d", &pi4[i]);

    printf("합: %d \n", pi4[0] + pi4[count2 - 1]);

    free(pi4);

    // 연습문제 27

    int count3, *pi5, *pi6;

    scanf("%d", &count3);

    pi5 = (int *)calloc(count3, sizeof(int));
    pi6 = (int *)calloc(count3, sizeof(int));

    printf("배열1 \n");

    for (i = 0; i < count3; i++)
        scanf("%d", &pi5[i]);

    printf("배열2 \n");

    for (i = 0; i < count3; i++)
        scanf("%d", &pi6[i]);

    for (i = 0; i < count3; i++)
        printf("%d + %d = %d \n", pi5[i], pi6[i], pi5[i] + pi6[i]);

    free(pi5);
    free(pi6);

    // 연습문제 28

    int arr3[3][3] = { 1, 5, 7, 5, 2, 4, 3, 7, 9 }, *px, *px2;

    px = &arr3[2][1];
    px2 = &arr3[0][1];

    printf("합: %d \n", *px + *px2);

    // 연습문제 29
    
    int *xx;
    
    xx = (int *)calloc(10, sizeof(int));
    
    xx[0] = 100;
    xx[1] = 130;
    xx[2] = 50;
    xx[3] = 19;
    
    for (i = 0; i < 4; i++)
        printf("%d ", xx[i]);
    
    printf("\n");
}
