//
//  Problem10_.c
//  Pointer500
//
//  Created by 박승태 on 2020/11/10.
//  Copyright © 2020 ParkSeungtae. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void Problem10_() {
    
    // 예제 10
    
    struct bitfield {
        
        unsigned int b1: 1;
        unsigned int b2: 1;
        unsigned int b3: 1;
        unsigned int b4: 1;
    };
    
    int x, y;
    struct bitfield flg;
    
    flg.b1 = 1;
    flg.b2 = 0;
    flg.b3 = 0;
    flg.b4 = 0;
    
    while (flg.b1) {
        
        x = rand();
        
        if (x > 0 && x < 10000) {
            
            y = rand();
            flg.b2 = 1;
            flg.b3 = 1;
            flg.b4 = 0;
            
            printf("send=%d no=%d \n", flg.b3, y);
            
            flg.b3 = 0;
            flg.b4 = 1;
            
            printf("send=%d receive=%d \n", flg.b3, flg.b4);
            flg.b2 = 0;
        }
        
        else {
            
            flg.b1 = 0;
            flg.b2 = 1;
            flg.b3 = 0;
            flg.b4 = 0;
            
            printf("flg1 = %d flg2 = %d flg3 = %d flg4 = %d \n", flg.b1, flg.b2, flg.b3, flg.b4);
        }
    }
    
    // 예제 11
    
    struct bitfield2 {
        
        unsigned int b1: 1;
        unsigned int b2: 1;
        unsigned int b3: 3;
        unsigned int b4: 3;
    };
    
    struct bitfield2 flg2;
    int x1;
    
    flg2.b1 = 1;
    flg2.b2 = 0;
    flg2.b3 = 0;
    flg2.b4 = 0;
    
    while (flg2.b1) {
        
        x1 = rand();
        
        if (x1 > 0 && x1 < 10000) {
            
            flg2.b3 = rand() / 4500;
            flg2.b2 = 1;
            flg2.b4 = flg2.b3;
            
            printf("send = %d receive = %d \n", flg2.b3, flg2.b4);
            
            flg2.b3 = 0;
            flg2.b4 = 0;
            
            printf("send = %d receive = %d \n", flg2.b3, flg2.b4);
            
            flg2.b2 = 0;
        }
        
        else {
            
            flg2.b1 = 0;
            flg2.b2 = 1;
            flg2.b3 = 0;
            flg2.b4 = 0;
            
            printf("flg1 = %d flg2 = %d flg3 = %d flg4 = %d \n", flg2.b1, flg2.b2, flg2.b3, flg2.b4);
        }
    }
    
}
