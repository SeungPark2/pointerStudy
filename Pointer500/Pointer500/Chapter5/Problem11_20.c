//
//  Problem11_.c
//  Pointer500
//
//  Created by ParkSeungtae on 2020/10/12.
//  Copyright © 2020 ParkSeungtae. All rights reserved.
//

#include <stdio.h>

void Proble11_20() {
    
    // 예제 11
    
    int x[2][3][5] = {
        
        10, 15, 20, 50, 55,
        4, 6 ,7, 8, 10,
        7, 9, 10, 12, 19,
        15, 18, 23, 59, 70,
        5, 7, 9, 10, 14,
        9, 12, 15, 17, 25
    };
    
    int i, j, k;
    
    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            for(k = 0; k < 5; k++)
                printf("x[%d][%d][%d] = %d \n", i, j, k, x[i][j][k]);
    
    // 예제 12
    
    int n;
    
    printf("값 입력: ");
    scanf("%d", &n);
        
    int arr[n], sum = 0;
    
    for (i = 0; i < n; i++) {
    
        printf("값 입력: ");
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    printf("sum = %d \n", sum);
    
    // 예제 13
    
    int arr2[10] = { 2, 4, 7, 2, 4, 1, 6, 9, 6, 5 }, arr3[10];
    
    for (i = 0; i < 10; i++) {
     
        arr3[i] = arr2[i];
        printf("%d ", arr3[i]);
    }
    
    printf("\n");
    
    // 예제 14
    
    char arr4[10] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' }, arr5[10];
    
    for (i = 0; i < 10; i++) {
     
        arr5[i] = arr4[i];
        printf("%d ", arr5[i]);
    }
    
    printf("\n");
    
    // 예제 15
    
    char arr6[3][5] = {
        
        'A', 'B', 'C', 'D', 'E',
        'F', 'G', 'H', 'I', 'J',
        'K', 'L', 'M', 'N', 'O'
    }, arr7[3][5];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
        
            arr7[i][j] = arr6[i][j];
            printf("arr[%d][%d] = %d \n", i, j, arr7[i][j]);
        }
    }
    
    printf("\n");
    
    // 예제 16
    
    int arr8[3][5] = {
        
        8, 1, 5, 4, 9,
        7, 9, 3, 6, 1,
        2, 6, 2, 0, 8
    }, arr9[3][5];
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
        
            arr9[i][j] = arr8[i][j];
            printf("arr[%d][%d] = %d \n", i, j, arr9[i][j]);
        }
    }
    
    printf("\n");
    
    // 예제 17
    
    char arr10[5][5] = {
        
        "tent",
        "case",
        "desk",
        "home",
        "base"
    }, arr11[5][5];
    
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++) {
        
            arr11[i][j] = arr10[i][j];
            printf("arr[%d][%d] = %c \n", i, j, arr11[i][j]);
        }
    }
    
    printf("\n");
    
    // 예제 18
    
    int arr12[5] = { 10, 15, 20, 50, 55 },
        arr13[5] = { 4, 6, 2, 4, 1 },
        arr14[5];
    
    for (i = 0; i < 5; i++) {
     
        arr14[i] = arr12[i] * arr13[i];
        printf("arr[%d] = %d ", i, arr14[i]);
    }
    
    printf("\n");
    
    // 예제 19
    
    int arr15[20] = { 2, 4, 5, 7, 9, 12, 13, 41, 31, 15, 65, 29,
                      92, 44, 65, 55, 81, 91, 14, 88 }, value;
    
    scanf("%d", &value);
    
    for (i = 0; i < 20; i++) {
        if (value == arr15[i]) {
    
            printf("%d \n", arr15[i]);
        }
    }
    
    // 예제 20
    
    char arr16[10] = { 'A', 'D', 'H', 'C', 'V',
                       'W', 'Q', 'T', 'Z', 'P' }, value2;
    
    scanf("%s", &value2);
    
    for (i = 0; i< 10; i++) {
        if (value2 == arr16[i]) {
            
            printf("%c \n", arr16[i]);
        }
    }
}

