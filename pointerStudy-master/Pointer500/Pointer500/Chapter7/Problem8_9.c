//
//  Problem8_.c
//  Pointer500
//
//  Created by 박승태 on 2020/11/12.
//  Copyright © 2020 ParkSeungtae. All rights reserved.
//

#include <stdio.h>

void Problem8_9() {
    
    // 예제 8
    
    int i, total, x;
    
    total = i = x = 0;
    
    for (i = 0; (x >= 0 && (x%2) == 0); i++) {
        
        scanf("%d", &x);
        total += x;
    }
    
    printf("total = %d \n", total - x);
    
    // 예제 9
    
    int a, b;
    
    for (a = 1; a < 10; a++) {
        for (b = 1; b < 10; b++) {
            
            if (a == b) continue;
            
            if ((100 * a + 10 * b + a) + (100 * b + 10 * a + b) == 888) {
                                
                printf("%d%d%d + %d%d%d = 888 \n", a, b, a, b, a, b);
            }
        }
    }
    
}
