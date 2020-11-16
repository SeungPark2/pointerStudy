//
//  EP1_.c
//  Pointer500
//
//  Created by 박승태 on 2020/11/16.
//  Copyright © 2020 ParkSeungtae. All rights reserved.
//

#include <stdio.h>

void EP1_13() {
    
    // 1
    
    #define INTEGER int
    #define MULT2 x * y;
    #define PRINT2 printf("%d * %d = %d \n", x, y, z);
    
    INTEGER x, y, z;
    x = 5;
    y = 3;
    z = MULT2;
    
    // 2
    
    PRINT2
    
    #define L1 5.6
    #define L2 7.3
    #define VALUE L1 * L2 / 2
    
    printf("%f \n", VALUE);
    
    // 3
    
    #define CHAR_INPUT ("%c", &x1);
    #define CHAR_OUTPUT ("%c", x1);
    
    char x1;
    int i;
    
    for (i = 0; i <= 3; i++) {
        
        scanf CHAR_INPUT
        printf CHAR_OUTPUT
    }
    
    // 4
    
    #define DIVIDE(x, y) x / y
    
    printf("%f \n", DIVIDE((6.35 -3.45), (5.23 + 4.17)));
    
    // 5
    
    #define A double xx
    #define PRINT3 ; printf("%f \n",
    #define END2 );
    
    A = 30.0
    PRINT3 sin(30.0/180.0*3.14159)
    END2
    
    // 6
    
    #define TURE1 1
    #define FALSE1 0
    
    int xArr[10] = {2, 4, 5, 4, 1, 4, 5, 3, 7 ,0}, flg, total = 0;
    
    for(i = 0; i < 10; i++) {
        flg = xArr[i];
     
        if (flg == TURE1) {
            
            total += 1;
        }
    }
    
    printf("%d \n", total);
    
    // 7
    
    #define OUTT(a) printf(#a "= %d \n", a);
    
    int p, r, t;
    p = 12;
    r = 18;
    t = p + r;
    
    OUTT(p)
    OUTT(r)
    OUTT(t)
    
    // 8
    
    #define OUTT2(a, b, c) printf(#a "+" #b "= %d \n", c);
    
    OUTT2(p, r, t)
    
    // 9
    
    #define OUTT3(a, b, c) printf( #a "*" #a "+" #b "*" #b "= %d \n", c);
    
    int pp, rr, tt;
    pp = 3;
    rr = 5;
    tt = (p*p) + (r*r);
    
    OUTT3(pp, rr, tt);
    
    // 10
    
    #define COMB2(a, b) a ## b
    
//    printf("%s \n", COMB2("NEWS", "week"));
    
    // 12
    
    int xArr2[10] = {3, 5, 4, 7, 1, 8, 3, 2, 9, 8}, sum = 0;
    
    for ( i = 0; i < 10; i++) {
        
        if (xArr2[i] == 3) {
            
            sum += 1;
        }
    }
    
    #if DEBUG
        printf("%d \n", i);
    #endif
    
    // 13
    
    #define COUNTER2 1500
    
    #if COUNTER2 >= 100
        int xArr3[5];
    #elif COUNTER2 > 1000
        int xArr3[10];
    #else
        int xArr3[8];
    #endif
    
    int y2 = sizeof(xArr3);
    y2 = y2 / 2 - 1;
    
    for (i = 0; i <= y2; i++) {
        
        xArr3[i] = rand();
        printf("%d \n", xArr3[i]);
    }
    
}

