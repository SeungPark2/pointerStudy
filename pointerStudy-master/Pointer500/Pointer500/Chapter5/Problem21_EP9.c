//
//  Problem21_30.c
//  Pointer500
//
//  Created by ParkSeungtae on 2020/10/13.
//  Copyright © 2020 ParkSeungtae. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void Problem21_EP9() {
    
    // 예제 21
    
    int *x, num, i;
    
    scanf("%d", &num);
    
    x = (int*)calloc(num, sizeof(int));
    
    for (i = 0; i < num; i++) {
     
        scanf("%d", &x[i]);
    }
    
    for (i = 0; i < num; i++) {
     
        printf("%d ", x[i]);
    }
    
    printf("\n");
    
    free(x);
    
    // 예제 22
    
    int x2[11] = { 0, 450, 470, 650, 820, 390, 550, 670, 890,910, 790 };
    int y, z;
    
    printf(" NO 9001-9010 ");
    scanf("%d", &y);
    
    z = y - 9000;
    
    printf("%d = %d \n", y, x2[z]);
    
    // 연습문제 1
    
    int arr[10], multiple = 1;
    
    arr[0] = 3;
    arr[1] = 4;
    arr[2] = 3;
    arr[3] = 2;
    arr[4] = 6;
    arr[5] = 4;
    arr[6] = 3;
    arr[7] = 2;
    arr[8] = 1;
    arr[9] = 1;
    
    for (i = 0; i < 9; i++) {
        
        printf("arr[%d] = %d \n", i, arr[i]);
        multiple *= arr[i];
    }
    
    printf("%d \n", multiple);
    
    // 연습문제 2
    
    int arr2[10] = { 3, 4, 3, 2, 6, 4, 3, 2, 1, 1 };
    
    multiple = 1;
    for (i = 0; i < 9; i++) {
        
        printf("arr[%d] = %d \n", i, arr2[i]);
        multiple *= arr2[i];
    }
    
    printf("%d \n", multiple);
    
    // 연습문제 3
    
    float arr3[5], result;
    
    arr3[0] = 10002.5;
    arr3[1] = 1.35;
    arr3[2] = 0.452;
    arr3[3] = 5.230;
    arr3[4] = 3.535;
    
    result = arr3[0] / arr3[1];
    
    for (i = 2; i < 5; i++)
        result /= arr3[i];
    
    printf("%f \n", result);
    
    // 연습문제 4
    
    float arr4[5] = { 10002.5, 1.35, 0.452, 5.230, 3.535 };
    result = arr4[0] / arr4[1];
    
    for (i = 2; i < 5; i++)
        result /= arr4[i];
    
    printf("%f \n", result);
    
    // 연습문제 5
    
    char arr5[7];
    
    arr5[0] = 't';
    arr5[1] = 'e';
    arr5[2] = 'a';
    arr5[3] = 'c';
    arr5[4] = 'h';
    arr5[5] = 'e';
    arr5[6] = 'r';
    
    for (i = 0; i < 7; i++)
        printf("%c ", arr5[i]);
    
    // 연습문제 6
    
    char arr6[7] = { 't', 'e', 'a', 'c', 'h', 'e', 'r' };
    
    for (i = 0; i < 7; i++)
        printf("%c ", arr6[i]);
    
    // 연습문제 7
    
    int arr7[2][5] = {
      
        10, 15, 20, 50, 55,
        4, 2, 5, 8, 1
    },
    arr8[2][5], j;
    
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 5; j++) {
            
            arr8[i][j] = arr7[i][j];
            printf("arr[%d][%d] = %d \n", i, j, arr8[i][j]);
        }
    }
    
    // 연습문제 8
    
    int arr9[2][5] = {
        
        10, 5, 2, 3, 15,
        4, 2, 6, 8, 1
    };
    
    for (i = 0; i < 2; i++) {
        
        int multiple = 1;
        
        for (j = 0; j < 5; j++) {
            
            printf("arr[%d][%d] = %d \n", i, j, arr9[i][j]);
            multiple *= arr9[i][j];
        }
        
        printf("%d \n", multiple);
    }
    
    // 연습문제9
    
    char arr10[3][5] = {
        
        "Seoul",
        "busan",
        "Daegu"
    };
    
    for (i = 0; i < 3; i++)
        printf("%s \n", arr10[i]);
    
    
}
