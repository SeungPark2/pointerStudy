//
//  Problem_24-.c
//  Pointer500
//
//  Created by ParkSeungtae on 2020/09/24.
//  Copyright © 2020 ParkSeungtae. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void Problem24_30() {
    
    // 24

    int x = 1000;
    int *p = &x;
    int **q = &p;
    int ***r = &q;

    printf("*p: %d \n", *p);        // *p == &x 이므로 1000
    printf("**q: %d \n", **q);      // **q -> *q == &p -> **q == &x 이므로 1000
    printf("***r: %d \n", ***r);    // ***r -> *r == &q -> **r == &p ->
                                    //         ***r == &x 이므로 1000


    // 25

    int *p1;
    p1 = (int *)3584;      // 이렇게 설정하면 절대 번지를 입력할 수 있음

    //*p1 = 156;   // 이렇게 작성할 경우 BAD_ACCESS 에러

    int a = 156;
    p1 = &a;

    printf("p: %d \n", *p1);

    // 26

    int l;

    printf("값을 입력하세요: ");
    scanf("%d", &l);

    printf("값: %d 주소: %x \n", l, &l);

    // 27

    float b, c;

    printf("b값을 입력하세요: ");
    scanf("%f", &b);
    printf("c값을 입력하세요: ");
    scanf("%f", &c);

    printf("b값: %f 주소: %x \n", b, &b);
    printf("c값: %f 주소: %x \n", c, &c);


    // 28

    char xx, yy, zz;

    printf("xx값을 입력하세요: ");
    scanf("%c", &xx);
    printf("yy값을 입력하세요: ");
    scanf("%c", &yy);
    printf("zz값을 입력하세요: ");
    scanf("%c", &zz);

    printf("xx값: %c 주소: %x \n", xx, &xx);
    printf("yy값: %c 주소: %x \n", yy, &yy);
    printf("zz값: %c 주소: %x \n", zz, &zz);
    
    // 29

    int aa;
    int *pa = &aa;

    printf("값 입력: ");
    scanf("%d", pa);

    printf("값: %d 주소: %x \n", *pa, pa);

    // 30

    // 내가 짠 처음 코드
    int num, i;

    printf("배열 크기: ");
    scanf("%d", &num);

    int arr[num];

    for (i = 0; i < num; i++) {

        printf("배열 값: ");
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < num; i++) {

        if (i != num-1) {

            printf("%d ", arr[i]);
        }
        else {

            printf("%d \n", arr[i]);
        }
    }
    
    // 책 내용
    
    int *t;
    
    printf("배열 크기: ");
    scanf("%d", &num);
    
    t = (int *)calloc(num, sizeof(int));  // 메모리 할당
    
    for (i = 0; i < num; i++)
        scanf("%d", &t[i]);
    
    for (i = 0; i < num; i++)
        printf("t: %d \n", t[i]);
}
