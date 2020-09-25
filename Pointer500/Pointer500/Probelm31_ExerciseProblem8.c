//
//  Probelm_31-.c
//  Pointer500
//
//  Created by ParkSeungtae on 2020/09/25.
//  Copyright © 2020 ParkSeungtae. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void Probelm31_ExerciseProblem8() {
    
    // 31
    
    int x, *p, i;

    printf("배열 크기 입력: ");
    scanf("%d", &x);

    p = (int *)calloc(x, sizeof(int));
//    p = (int *)malloc(x*sizeof(int));

    // 동적으로 메모리 할당
    // 동적 메모리 할당 == Heap 영역에 할당
    // malloc 과 calloc 모두 동적 메모리 할당이지만
    // 차이점    malloc: 할당 시 쓰레기 값들로 초기화 됨.
    //         colloc: 값이 0으로 초기화 됨
    // 추가적으로 relloc: 할당되어 있는 메로리의 크기를 변경할 때 사용
    // 근데 왜 stdlib.h를 include 시키면 Call to 'malloc' is ambiguous 애러가 발생할까..?

    for (i = 0; i < x; i++) {

        printf("값 입력: ");
        scanf("%d", p+i);
    }

    for (i = 0; i < x; i++)
        printf("%d \n", *(p+i));

    free (p);            // 동적 할당으로 잡은 메모리는 해제를 시켜야함.


    // 32

    printf("배열 크기 입력: ");
    scanf("%d", &x);

    int *q, *pp;

    pp = (int*)calloc(x, sizeof(int));

    for (q = pp; q - pp < x; q++) {

        printf("값 입력: ");
        scanf("%d", q+i);
    }

    for (q = pp; q - pp < x; q++)
        printf("%d \n", *(q+i));
    
    
    // 연습문제 1
    
    int xx, y, *p1, *p2;
    xx = 100;
    y = 200;
    
    p1 = &xx;
    p2 = &y;
    
    printf("p1 값: %d \n", *p1);
    printf("p1: %x \n", p1);
    printf("p2 값: %d \n", *p2);
    printf("p2: %x \n", p2);
    
    // 연습문제 2
    
    float a, b, c, *pc1, *pc2, *pc3;
    a = 3.14159;
    b = 2.5;
    c = a * b;
    
    pc1 = &a;
    pc2 = &b;
    pc3 = &c;
    
    printf("a: %f \n", a);
    printf("b: %f \n", b);
    printf("c: %f \n", c);
    printf("pc1: %f \n", *pc1);
    printf("pc2: %f \n", *pc2);
    printf("pc3: %f \n", *pc3);
    
    // 연습문제 3
    
    int j, *pj;
    float k, *pk;
    double l, *pl;
    
    j = 3;
    k = 2.5;
    l = 5.67;
    
    pj = &j;
    pk = &k;
    pl = &l;
    
    printf("j: %d \n", j);
    printf("pj: %d \n", *pj);
    printf("k: %f \n", k);
    printf("pk: %f \n", *pk);
    printf("l: %f \n", l);
    printf("pl: %f \n", *pl);
    
    // 연습문제4
    
    char c1, c2, c3, *cc1, *cc2, *cc3;
    
    c1 = 'A';
    c2 = 'B';
    c3 = 'C';
    
    cc1 = &c1;
    cc2 = &c2;
    cc3 = &c3;
    
    printf("cc1: %x \n", cc1);
    printf("cc1 값: %c \n", *cc1);
    printf("cc2: %x \n", cc2);
    printf("cc2 값: %c \n", *cc2);
    printf("cc3: %x \n", cc3);
    printf("cc3 값: %c \n", *cc3);
    
    // 연습문제 5
    
    float fa, fb, fc, *pf1, *pf2, *pf3;
    
    pf1 = &fa;
    pf2 = &fb;
    pf3 = &fc;
    
    *pf1 = 1.5;
    *pf2 = 3.7;
    *pf3 = *pf1 - *pf2;
    
    printf("pf1: %f \n", *pf1);
    printf("pf2: %f \n", *pf2);
    printf("pf3: %f \n", *pf3);
    
    // 연습문제 6
    
    char t = 'x', g = 'a', *pt, *pg, *trash;
    
    pt = &t;
    pg = &g;
    
    trash = pt;
    pt = pg;
    pg = trash;
    
    printf("pt: %c \n", *pt);
    printf("pg: %c \n", *pg);
    
    // 연습문제 7
    
    int arr[5] = { 5, 8, 1, 6, 2 }, *pa1, *pa2;
    pa1 = &arr[2];
    pa2 = &arr[4];
    
    printf("%d \n", *pa1 + *pa2);
    
    // 연습문제 8
    
    float farr[3] = { 5.311, 8.32, 23.4563 }, *pff;
    
    for (i = 0; i < 3; i++) {
        
        if (i == 0 || i == 2) {
            
            pff = &farr[i];
        }
        
        printf("farr: %f \n", farr[i]);
        printf("pff: %f \n", *pff);
    }
}
