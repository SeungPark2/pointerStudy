//
//  EP10-20.c
//  Pointer500
//
//  Created by ParkSeungtae on 2020/10/14.
//  Copyright © 2020 ParkSeungtae. All rights reserved.
//

#include <stdio.h>

void EP10_20() {
    
    // 연습문제 10
    
    int arr[3][6] = {
        10, 15, 20, 50, 55, 0,
        4, 2, 6, 8, 1, 0,
        0, 0, 0, 0, 0, 0
    };
    int i, j;
    
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 5; j++) {
        
            arr[2][j] = arr[0][j] * arr[1][j];
            arr[i][5] += arr[i][j];
        }
    }
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 6; j++) {
        
            if (i == 2 && j == 5) {
                
                arr[i][j] = arr[0][j] + arr[1][j];
            }
            printf("arr[%d][%d] = %d \n", i, j, arr[i][j]);
        }
    }
        
    // 연습문제 11
    
    int arr2[2][3][6] = {
        
        10, 15, 20, 50, 55, 0,
        4, 6, 7, 8, 10, 0,
        7, 9, 10, 12, 19, 0,
        15, 18, 23, 59, 70, 0,
        5, 7, 9, 10, 14, 0,
        9, 12, 15, 16, 25, 0
    };
    int k;
    
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 6; k++) {
             
                if (k < 5) {
                
                    arr2[i][j][5] += arr2[i][j][k];
                }
                printf("arr[%d][%d][%d] = %d \n", i, j, k, arr2[i][j][k]);
            }
        }
    }
    
    // 연습문제 12
    
    int num;
    
    scanf("%d", &num);
    
    int arr3[num], multiple = 1;
    
    for ( i = 0; i < num; i++) {
        
        int value;
        scanf("%d", &value);
        arr3[i] = value;
        multiple *= value;
    }
    
    for ( i = 0; i < num; i++) {
        
        printf("arr[%d] = %d \n", i, arr3[i]);
    }
    printf("%d \n", multiple);
    
    // 연습문제 13
    
    int arr4[2][5] = { 2, 4, 7, 3, 4, 1, 6, 9, 6, 5 }, arr5[2][5];
    
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 5; j++) {
        
            arr5[i][j] = arr4[i][j];
            printf("arr[%d][%d] = %d \n", i, j, arr[i][j]);
        }
    }
    
    // 연습문제 14
    
    char arr6[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
        'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' },
        arr7[26];
    
    for (i = 0; i < 26; i++) {
        
        int value = arr6[i];
        value += 32;
        char c = value;
        arr7[i] = c;
        
        printf("%c ", arr7[i]);
    }
    
    printf("\n");
    
    // 연습문제 15
    
    char arr8[3][5] = {
        "book",
        "week",
        "room"
    }, arr9[3][5];
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
     
            arr9[i][j] = arr8[i][j];
        }
        printf("%s \n", arr9[i]);
    }
    
    // 연습문제 16
    
    int arr10[5] = { 10, 15, 20, 50, 55 };
    int arr11[5] = { 4, 6, 2, 4, 1 };
    int arr12[5];
    
    for (i = 0; i < 5; i++) {
        
        arr12[i] = arr10[i] + arr11[i];
        printf("%d ", arr12[i]);
    }
    
    printf("\n");
    
    // 연습문제 17
    
    int arr13[20] = { 2, 4, 5, 7, 9, 12, 13, 41, 34, 15, 65,
                      29, 92, 44, 65, 45, 81, 91, 14, 88 }, num2;
    
    printf("입력할 값: ");
    scanf("%d", &num2);
    
    for (i = 19; i >= 0; i--) {
        if (num2 < arr13[i]) {
            printf("%d ", arr13[i]);
        }
    }
    
    printf("\n");
    
    // 연습문제 18
    
    char arr14[10] = { 'A', 'D', 'H', 'C', 'V', 'W', 'Q', 'T', 'Z', 'P' }, c;
    
    printf("알파벳 입력: ");
    scanf("%c", &c);
    
    for (i = 0; i < 10; i++) {
        
        if (c == arr14[i]) {
            
            if (c == 'Z') {
                
                printf("A");
            }
            else {
                
                int value2 = arr14[i];
                value2 += 1;
                char c2 = value2;
                printf("%c", c2);
            }
        }
    }
        
    // 연습문제 19
    
    int num3;
    
    scanf("%d", &num3);
    
    int arr15[num3], sum = 0;
    
    for (i = 0; i < num3; i++) {
        
        printf("arr[%d] 값 입력: ", i);
        scanf("%d", &arr15[i]);
        sum += arr15[i];
    }
    
    for (i = 0; i < num3; i++) {
        
        printf("arr[%d] = %d \n", i, arr15[i]);
        printf("sum = %d \n", sum);
    }
    
    // 연습문제 20
    
    int arr16[9] = { 0, 0, 0, 0, 820, 880, 890, 910, 790 }, num4;
    
    printf("1984 ~ 1988 사이 값 입력: ");
    scanf("%d", &num4);
    
    for (i = 4; i < 9; i ++) {
        
        if (i == num4 - 1980) {
            
            printf("%d \n", arr16[i]);
        }
    }
}
