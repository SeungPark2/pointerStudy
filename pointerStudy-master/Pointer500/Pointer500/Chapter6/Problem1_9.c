//
//  Problem1_.c
//  Pointer500
//
//  Created by 박승태 on 2020/10/20.
//  Copyright © 2020 ParkSeungtae. All rights reserved.
//

#include <stdio.h>

void Problem1_9() {
    
    // 예제 1
    
    int x = 0x1001, y = 0x0011, z;
    
    z = x & y;
    
    printf("%04x & %04x = %04x \n", x, y, z);
    
    // 예제 2
    
    int x1 = 0x0101, y1 = 0x1000, z1;
    
    z1 = x1 | y1;
    
    printf("%04x | %04x = %04x \n", x1, y1, z1);
    
    // 예제 3
    
    int x2 = 0x1001, z2;
    
    z2 = x2 ^ x2;
    
    printf("%04x ^ %04x = %04x \n", x2, x2, z2);
    
    // 예제 4
    
    int x3 = 0x0101, z3;
    
    z3 = ~x3;
    
    printf("~%04x = %04x \n", x3, z3);
    
    // 예제 5
    
    unsigned int x4 = 0x09, z4;
    
    z4 = x4 << 3;
    
    printf("%d << 3 = %d \n", x4, z4);
    
    // 예제 6
    
    unsigned int x5 = 0x09, z5;
    
    z5 = x5 >> 2;
    
    printf("%d >> 2 = %d \n", x5, z5);
    
    // 예제 7
    
    unsigned int x6 = 0xabcd, z6;
    
    z6 = x6 <<4 >>8;  // z6 = x6 << 4; z6 = z6 >> 8;
    printf("%04x << 4 >> 8 = %04x \n", x6, z6);
    
    // 예제 8
    
    unsigned int x7 = 0xabcd, z7;
    
    z7 = x7 >>4 <<4;
    
    printf("%04x <<4 >>4 = %04x \n", x7, z7);
    
    // 예제 9
    
    unsigned int x8 = 0xabcd, z8;
    
    z8 = x8 <<8 >>8;
    
    printf("%04x <<8 >>8 = %04x \n", x8, z8);
    
}
