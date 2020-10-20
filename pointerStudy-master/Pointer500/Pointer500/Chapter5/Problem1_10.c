//
//  Problem1_.c
//  Pointer500
//
//  Created by ParkSeungtae on 2020/10/11.
//  Copyright © 2020 ParkSeungtae. All rights reserved.
//

#include <stdio.h>

void Problem1_10_2() {
    
    // 예제 1
    
    int x[5], i, sum = 0;
    
    x[0] = 10;
    x[0] = 15;
    x[0] = 20;
    x[0] = 50;
    x[0] = 55;
    
    for (i = 0; i < 5; i++) {
        
        printf("%d ", x[i]);
        sum += x[i];
    }
    
    printf("%d \n", sum);
    
    // 예제 2
    
    int x2[5] = { 10, 15, 20, 50, 55 };
    
    for (i = 0; i < 5; i++) {
        
        printf("%d ", x2[i]);
        sum += x2[i];
    }
    
    printf("%d \n", sum);
    
    // 예제 3
    
    float f[5], fSum = 1;
    
    f[0] = 10.5;
    f[1] = 1.35;
    f[2] = 0.452;
    f[3] = 5.230;
    f[4] = 3.535;
    
    for (i = 0; i < 5; i++) {
        
        printf("%f ", f[i]);
        fSum *= f[i];
    }
    
    printf("%f \n", fSum);
    
    // 에제 4
    
    float f2[5] = { 10.5, 1.35, 0.452, 5.230, 3.535 };
    
    for (i = 0; i < 5; i++) {
        
        printf("%f ", f2[i]);
        fSum *= f2[i];
    }
    
    printf("%f \n", fSum);
    
    // 에제 5
    
    char c[5];
    
    c[0] = 't';
    c[1] = 'a';
    c[2] = 'b';
    c[3] = 'l';
    c[4] = 'e';
    
    for (i = 0; i < 5; i++)
        printf("%c ", c[i]);
    
    printf("\n");
    
    // 예제 6
    
    char c2[5] = { 't', 'a', 'b', 'l', 'e' };
    
    for (i = 0; i < 5; i++)
        printf("%c ", c2[i]);
    
    printf("\n");
    
    // 예제 7
    
    int x3[2][5] = { 10, 15, 20, 50, 55, 4, 2, 6, 8, 1 }, j, sum1 = 0, sum2 = 0;
    
    for (i = 0; i < 5; i++) {
     
        printf("x[0][%d] = %d ", i, x3[0][i]);
        sum1 += x3[0][i];
    }
    printf("%d \n", sum1);
    
    for (i = 0; i < 5; i++) {
     
        printf("x[1][%d] = %d ", i, x3[1][i]);
        sum2 += x3[1][i];
    }
    printf("%d \n", sum2);
    
    // 예제 8

    for (i = 0; i < 2; i++) {
        
        printf("%d = ", i);
        
        for (j = 0; j < 5; j++) {
            
            printf("%d ", x3[i][j]);
            if (i == 0)  {
                
                sum1 += x3[i][j];
            }
            else {
                
                sum2 += x3[i][j];
            }
        }
    }
    
    printf("sum1 = %d, sum2 = %d \n", sum1, sum2);
    
    // 예제 9
    
    char c3[3][5] = { "table", "clock", "train" };
    
    for (i = 0; i< 3; i++)
        for(j = 0; j < 5; j++)
            printf("%c ", c3[i][j]);
    
    printf("\n");
    
    // 예제 10
    
    int x4[3][6] = { 10, 15, 20, 50, 55, 0, 4, 2, 6, 8, 1, 0, 0, 0, 0, 0, 0, 0 };
    
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 5; j++) {
            x4[i][5] += x4[i][j];
            x4[2][j] += x4[i][j];
        }
        x4[2][5] += x4[i][5];
    }
    
    for ( i = 0; i < 3; i++) {
        for (j = 0; j < 6; j++)
        printf("x[%d][%d] = %2d ", i, j, x4[i][j]);
        
        printf("\n");
    }
        
            
}
