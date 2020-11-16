//
//  Problem1_.c
//  Pointer500
//
//  Created by 박승태 on 2020/11/15.
//  Copyright © 2020 ParkSeungtae. All rights reserved.
//

#include <stdio.h>
#include <math.h>

// 프리프로세서는 컴파일하기 전에 필요한 처리를 하는 것
//            실행 가능한 프로그램을 만들어내기까지 다음과 같은 과정을 거친다

//          소스 프로그램
//              |      <- include 화일 (프리프로세서)
//          전처리 끝난
//          소스 프로그램
//              |    (컴파일러)
//          오브젝트 프로그램
//              |      <- 라이브러리(링커) <- 다른 오브젝트 프로그램
//          실행가능한 프로그램

// 프리프로세서 실행 내용
// 다른 화일을 포함한다. (#include)
// 텍스트를 치환한다.   (#defind)
// 컴파일 조건을 준다. (#if, #elif, #else)


void Problem1__() {
    
    // 예제 1
    
    #define INTERGER int
    #define TOTAL x+y;
    #define PRINT printf("%d + %d = %d \n", x, y, z);

    INTERGER x,y,z;
    
    x = 5;
    y = 3;
    
    z = TOTAL;
    PRINT;
    
    // 예제 2
    
    #define LENGTH 10
    #define WIDTH 16
    
    int rec = LENGTH * WIDTH;
    printf("%d * %d = %d \n", LENGTH, WIDTH, rec);
    
    // 예제 3
    
    #define INTERGER_INPUT ("%d", &x);
    #define INTERGER_OUTPUT ("%d \n", x);
    
    int i;
    
    for (i = 0; i < 3; i++) {
        
        scanf INTERGER_INPUT;
        printf INTERGER_OUTPUT;
    }
    
    // 예제 4
    
    #define MULT(x, y) ((x)*(y));
    
    int a = MULT(5+6, 8-2);
    printf("%d \n", a);
    
    // 예제 5
    
//    #define X main() { int x
//    #define Y ; int y
//    #define PRINT2 ; printf("%d \n",
//    #define END ); }
//
//    X = 5
//    Y = 7
//
//    PRINT2 X * Y;
//    END
    
    // 예제 6
    
    #define TRUE 1
    #define FALSE 0
    
    int x1[10] = {12, 34, 5, 34, 65, 14, 5, 3, 7, 0}, sum, flg;
    i = 0;
    
    while (TRUE) {
        
        flg = x1[i];
        sum += x1[i];
        
        if (flg == FALSE)
            break;
        else
            i++;
    }
    
    printf("%d \n", sum);

    
    // 예제 7
    
    #define OUT(a) printf (#a "= %d \n", a)
    
    int a1, b, ans;
    a1 = 2;
    b = 8;
    ans = a1 * b;
    
    OUT (a1);
    OUT (b);
    OUT (ans);
    
    // 예제 8
    
    #define OUT2(a,b,c) printf (#a "*" #b "= %d \n", c)
     
    OUT2(a1, b, ans);
    
    // 예제 9
    
    #define OUT3(a, b, c) printf ("%d * %d = %d \n", a, b, c)
    
    OUT3(a1, b, ans);
    
    // 예제 10
    
//    #define COMB(a, b) a ## b // ## 두 인자를 연결함
    
//    printf("%s \n", COMB ("Newyork", "er"));
    
    // 예제 11

    #define DATA x
    
    int x2[10] = {3, 5, 4, 7, 1, 8, 3, 2, 9, 8};
    
    for (i = 0; i < 10; i++)
//        printf("%d ", COMB(DATA, [i]));
    
    // 예제 12
    
    #define DEBUG 1
    
    for (i = 0; i < 10; i ++)
        printf("%d ", x2[i]);
    
    #if DEBUG
        printf("\n %d \n", i);
    #endif
    
    // 예제 13
    
    #define COUNTER 15
    
    #if COUNTER <= 100
        int x4[5];
    #elif COUNTER > 1000
        int x4[10];
    #else
        int x4[8];
    #endif
    
    int y1;
    y1 = sizeof(x4);
    y1 = y1 / 2 - 1;
    
    for (i = 0; i <= y1; i++) {
        
        x4[i] = rand();
        printf("%d ", x4[i]);
    }
    
    // 예제 14
    
    double d1, d2, d3;
    d1  = 3.12564;
    d2 = 5.783533;
    
    d3 = sqrt( x * x + y * y );
    printf("%f \n", d3);
}

