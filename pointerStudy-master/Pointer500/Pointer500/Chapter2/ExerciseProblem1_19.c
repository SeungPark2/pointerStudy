//
//  ExerciseProblem1_.c
//  Pointer500
//
//  Created by ParkSeungtae on 2020/09/29.
//  Copyright © 2020 ParkSeungtae. All rights reserved.
//

#include <stdio.h>

void ExerciseProblem1_19() {
    
    // 연습문제 1
    
    int i;
    
    char x[15] = "C compiler";
    
    printf("%s \n", x);
    for (i = 0; i < 15; i++)
        printf("%c", x[i]);
    
    printf("\n");
    
    // 연습문제 2
    
    printf("%s \n", &x[2]);
    
    // 연습문제 3
    
    char xx[6][8] = { "COBOL", "FORTRAN", "C", "C++", "PASCAL", "BASIC" };
    
    for (i = 0; i < 6; i++)
        printf("%s ", xx[i]);
    
    printf("\n");
    
    // 연습문제 4
    
    printf("%s \n", xx);
    
    // 연습문제 5
    
    char *pc[6] = { "COBOL", "FORTRAN", "C", "C++", "PASCAL", "BASIC" };
    
    for (i = 0; i < 6; i++)
        printf("%s ", *(pc + i));
    
    printf("\n");
    
    // 연습문제 6
    
    printf("%s \n", *(pc + 3) + 1);
    
    // 연습문제 7
    
    char **pcc = pc;
    
    printf("%s \n", *(pcc + 1) + 4);
    
    // 연습문제 8
    
    printf("%c%c%c%c%c%c%c \n", *(pc + 4)[0], (*(pc + 1))[5], *pc[0], (*(pc + 5))[3], *(pc + 1)[0], (*(pc + 5))[3], *(pc + 2)[0]);
    
    // 연습문제 9
    
    char *c = "C compiler";
    
    printf("%s \n", c);
    
    for (i = 0; i < 10; i++)
        printf("%c", c[i]);
    
    printf("\n");
    
    // 연습문제 10
    
    printf("%s \n", c + 2);
    
    // 연습문제 11
    
    char cc[6] = { 'C', 'O', 'B', 'O', 'L', '\0' };
    
    printf("%s \n", cc);
    
    for ( i = 0; i < 5; i++)
        printf("%c", cc[i]);
    
    printf("\n");
    
    // 연습문제 12
    
    char *arr[5] = { "printer", "display", "keyboard", "plotter", "mouse" }, **pp;

    pp = arr;

    for (i = 0; i < 5; i++)
        printf("%s ", *(pp + i));
    
    printf("\n");
    
    // 연습문제 13
    
    char **q = arr + 3;
    
    printf("%c \n", *q[3]);
    
    // 연습문제 14
    
    printf("%s \n", c);
    
    for ( i = 0; i < 9; i++ )
        printf("%c", *(c + i));
    
    printf("\n");
    
    // 연습문제 15
    
    char *a, *b;
    
    a = b = "C compiler";
    
    while (*a) {
        a++;
    }
    
    while (a>b) {
        a--;
        printf("%c", *a);
    }
    
    printf("\n");
    
    // 연습문제 16
    
    char *carr[5] = { "Seoul", "Busan", "Deagu", "Incheon", "Kwangju" }, **aa;
    
    aa = carr;
    
    for ( i = 0; i < 5; i++ )
        printf("%s", *(aa + i) );
    
    printf("\n");
        
    // 연습문제 17
    
    aa = carr + 3;
    
    printf("%s \n", *aa);
    
    // 연습문제 18
    
    aa = carr + 4;
    
    printf("%x %c \n", *aa, **aa);
    
    // 연습문제 19
    
    char *str = "computer", *pstr;
    
    pstr = (char *)calloc(10, sizeof(char));
    
    pstr = str;
    
    printf("%s \n", pstr);
}

