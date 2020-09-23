//
//  array.c
//  Pointer500
//
//  Created by ParkSeungtae on 2020/09/22.
//  Copyright © 2020 ParkSeungtae. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    // Int array
    
    int x[3] = {5, 2, 9};
    int i, *p;
    
    for (i = 0; i <= 2; i++) {
        
        p = &x[i];
        
//        printf("address p:%x " "address x: %x \n", &p, &x[i]);
//        printf("p: %d \n", *p);
    }
    
//  ----------------------------------------------------------------------------
    
    p = x; // p는 x[]의 시작 어드레스를 가지게 됨
           // p == &x[0],  p != &x
    
    for (i = 0; i <= 2; i++) {
        
//        printf("address p:%x " "address x: %x \n", &p, &x[i]);
//        printf("p: %d \n", *p);
        p++; // 주소 값을 가지고 있는 p에 ++ 해주게 되면 주소가 바뀌게 된다. ex) fff0 -> fff4
    }
    
//  ----------------------------------------------------------------------------
    
    int x1[10] = {11, 22, 43, 56, 36, 73, 45, 66, 98, 0};
    int *px;
    
//    for (px = x1; *px != 0; px++)
//        printf("px: %d \n", *px);
    
//  ----------------------------------------------------------------------------
    
    int *px2 = x1;
    
//    for (px2 = x1; *px2 != 0; px2++)
//        printf("px2: %d \n", *px2);
    
//  ----------------------------------------------------------------------------
    
    int x2[10] = {4, 6, 2, 8, 5, 1, 9, 3, 7, 0};
    int *px3 = x2;
    
//    printf("*(p+2): %d \n", *(px3+2)); // px3 == &x2[0] 이므로 px3+2 == &x2[2] -> 2
//    printf("*p+2: %d \n", *px3+2); // *px3 ==> 4 이므로 +2를 하면 6
//    printf("*(p+5): %d \n", *(px3+5)); // *px3 == &x2[0] 이므로 px3+5 == &x2[5] -> 1
//    printf("*p+5: %d \n", *px3+5); // *px3 ==> 4 이므로 +5를 하면 9
    
//  ----------------------------------------------------------------------------
    
    
    int x3[5] = {5, 4, 7, 2, 6};
    int x4[5] = {2, 5, 1, 3, 3};
    int *px4[2] = {x3, x4};
    int z[5];
    
    for (i = 0; i < 5; i++) {
        
        z[i] = *px4[0] + *px4[1];
        px4[0]++;
        px4[1]++;
        
        //printf("z: %d \n", z[i]);
    }
    
//  ----------------------------------------------------------------------------
    
    int x5[10] = {11, 22, 43, 56, 36, 73, 45, 66, 98, 0};
    int *px5 = x5;
    int *px6 = &x5[9];
    
    while (*px5 != *px6) {
        
//        printf("px5: %d px6: %d \n", *px5, *px6);
        px5++;
    }
    
//  ----------------------------------------------------------------------------

    int xx = 1000;
    int *px7 = &xx;
    int **px8 = &px7;
    
    printf("*p: %d \n", *px7);          // x의 주소 값을 가지고 있으므로 1000
    printf("**q: %d \n", **px8);        // **(이중포인터)는 *px7의 메모리 주소에 접근 가능함. 1000
    printf("&p: %x \n", &px7);          // x의 어드레스 다른 주소 값 ex) x 어드레스 + 4
    printf("*q: %x \n", *px8);          // p의 주소값을 가지고 있으므로 x의 주소를 가리키는 것과 같으 1000
    printf("&(*q): %x \n", &(*px7));    // px7의 어드레스
    printf("&q: %x \n", &px7);          // px7의 어드레스 다른 주소 값 ex) px7 어드레스 + 4

//  ----------------------------------------------------------------------------
    
    // Float array
    
    float f[3] = {1.1, 2.2, 3.3};
    float *pf;
    
    for (i = 0; i <= 2; i++) {
        
        pf = &f[i];
        
//        printf("address p1: %x " "address f: %x \n", &pf, &f[i]);
//        printf("pf: %f \n", *pf);
    }
    
//  ----------------------------------------------------------------------------
    
    // Double array
    
    double d[3] = {1.1, 2.2, 3.3};
    double *pd;
    
    for (i = 0; i <= 2; i++) {
        
        pd = &d[i];
        
//        printf("address pd: %x " "address d: %x \n", &pd, &d[i]);
//        printf("pd: %f \n", *pd);
    }
    
//  ----------------------------------------------------------------------------
    
    // Char array
    
    char c[3] = {'A', 'B', 'C'};
    char *pc;
    
    for (i = 0; i <= 2; i++) {
        
        pc = &c[i];
        
//        printf("address pc: %x " "address c: %x \n", &pc, &c[i]);
//        printf("pc: %c \n", *pc);
    }
    
//  ----------------------------------------------------------------------------
    
    pc = c;
    
    for (i = 0; i <= 2; i++) {
        
//        printf("address pc: %x " "address c: %x \n", &pc, &c[i]);
//        printf("pc: %c \n", *pc);
        pc++;
    }
    
//  ----------------------------------------------------------------------------
    
    char c1[10] = {'A', 'a', 'B', 'b', 'C', 'c', 'D', 'd', 'E', 'e'};
    char *pc2 = c1;
    
//    printf("*(p+2): %c \n", *(pc2+2)); // pc2 == &c1[0], pc2+2 == &c1[2] -> 'B'
//    printf("*p+2: %c \n", *pc2+2);     // pc2 == 'A', pc2+2 == 'C'
//    printf("*(p+5): %c \n", *(pc2+5)); // pc2 == &c1[0]. pc2+5 == &c1[5] -> 'c'
//    printf("*p+5: %c \n" , *pc2+5);     // pc2 == 'A', pc2+5 == 'F'
    
//  ----------------------------------------------------------------------------
    
    char c2[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    char *pc3 = c2;
    char *q = pc3;
    
    for (i = 0; i <= 9; i++){
        
//        printf("c2: %c \n", *q);
//        q++;
    }
    
    return 0;
}
