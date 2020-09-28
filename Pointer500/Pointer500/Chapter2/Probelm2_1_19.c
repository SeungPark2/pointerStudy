//
//  Chapter2_1-.c
//  Pointer500
//
//  Created by ParkSeungtae on 2020/09/28.
//  Copyright © 2020 ParkSeungtae. All rights reserved.
//

#include <stdio.h>

void Probelm2_1_19() {
    
    // 1
    
    int i;
    
    char c[18] = "computer languge";
    
    printf("%s", c);
    
    for (i = 0; i < 18; i++)
        printf("%c ", c[i]);
    
    printf("\n");
    
    // 2
    
    for (i = 9; i < 18; i++)
        printf("%c", c[i]);
    
    printf("%s", c + 9);
    
    printf("\n");
    
    
    // 3
    
    char c2[3][18] = { "computer language", "c language", "BASIC" };
    
    for (i = 0; i < 3; i++)
        printf("%s \n", c2[i]);
    
    // 4
    
    printf("%s \n", c2);
    
    // 5
    
    char *pc = "computer language";
    
    printf("%s", pc);
    
    for (i = 0; i < 18; i++)
        printf("%c", *(pc + i));
    
    printf("\n");
    
    // 6
    
    printf("%s \n", pc + 9);
    
    // 7
    
    char *pc2[3] = { "computer language", "c language", "BASIC" };
    
    for (i = 0; i < 3; i++)
        printf("%s \n", pc2[i]);
    
    // 8
    
    printf("%s \n", pc2[1] + 7);
    
    // 9
    
    for (i = 7; i < 10; i ++)
    printf("%c ", *(pc2[1] + i));
    
    printf("\n");
    
    // 10
    
    printf("%c%c%c%c", *pc2[0], *(pc2[0] + 10), *(pc2[1] + 5), *(pc2[1] + 9));
    
    // 11
    
    char a[6] = { 'B', 'A', 'S', 'I', 'C', '\0' };
    
    printf("%s", a);
    
    for (i = 0; a[i] != '\0'; i++)
        printf("%c", a[i]);
    
    printf("\n");
    
    // 12
    
    char *a2[3] = { "computer language", "c language", "BASIC" }, **pa;
    
    pa = a2;
    
    for ( i = 0; i < 3; i++)
        printf("%s \n", *(pa + i));
    
    // 13
    
    pa = a2 + 2;
    
    printf("%c \n", *(*pa + 3));
    
    
    // 14
    
    char *a3 = "computer language";
    
    printf("%s \n", a3);
    
    while (*a3) {
        
        printf("%c", *a3++);
    }
    
    // 15
    
    char *str = "computer", *pstr, *qstr;
    
    pstr = str;
    qstr = str;
    
    for (i = 7; i < 0; i++)
        printf("%c", *(qstr + i));
    
    printf("\n");
    
    // 16
    
    char *arr[3] = { "Korea", "USA", "France" }, **parr;
    
    parr = arr;
    
    for (i = 0; i < 3; i++)
    printf("%s", *(arr + i));
    
    printf("\n");
    
    // 17
    
    printf("%c \n", *(*parr+4)); // *parr == &arr -> *parr + 4 == &arr[0]의 4번째 문자 -> 'a'
    
    // 18
    
    printf("%x \n", parr);
    printf("%x \n", *parr);
    printf("%c \n", **parr);
    
    // 19
    
    char *pp;
    
    pp = (char *)calloc(40, sizeof(char));
    
    pp = "40 bytes memory availbale";
    
    printf("%s \n", pp);
    printf("%s", pp + 16);
        
    
}
