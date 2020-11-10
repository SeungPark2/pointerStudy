//
//  Problem1_.c
//  Pointer500
//
//  Created by 박승태 on 2020/11/10.
//  Copyright © 2020 ParkSeungtae. All rights reserved.
//

#include <stdio.h>

void Problem1_7() {
    
    // 예제1
    
    int i, total = 0;
    
    for (i = 1; i <= 200; i++)
        total += i;
    
    printf("total = %d \n", total);
    
    // 예제 2
    
    total = 0;
    for (i = 1; i <= 100; i+=2)
        total += i;
    
    printf("total = %d \n", total);
    
    // 예제 3
    
    total = 0;
    for (i = 100; i >= 90; i--)
        total += i;
    
    printf("total = %d \n", total);
    
    // 예제 4
    
    total = 0;
    for (i = 100; i >= 0; i-=10)
        total += i;
    
    printf("total = %d \n", total);
    
    // 예제 5
    
    int jjackSum = 0, holSum = 0;
    
    for (i = 1; i <= 100; i++) {
        
        if (i % 2 == 0) {
            
            jjackSum += i;
        }
        else {
         
            holSum += i;
        }
    }
    
    printf("jjack = %d, hol = %d \n", jjackSum, holSum);
    
    // 예제 6
    
    int a,b;
    
    for (a = 1; a < 10; a++) {
        for (b = 1; b < 10; b++) {
            
            if ((100*a + 10*b + a) + (100*b + 10*a + b) == 777) {
                
                printf("%d%d%d + %d%d%d = 777 \n", a, b, a, b, a, b);
                break;
            }
        }
    }
    
    // 예제 7
    
    for (total=i=0; i <= 9; ++i, total+=i)
        printf("total = %d \n", total);
}
