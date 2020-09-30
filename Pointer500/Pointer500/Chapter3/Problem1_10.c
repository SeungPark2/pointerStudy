//
//  Problem1_.c
//  Pointer500
//
//  Created by ParkSeungtae on 2020/09/30.
//  Copyright © 2020 ParkSeungtae. All rights reserved.
//

#include <stdio.h>
#include <string.h> // Implicitly declaring library function 'strcpy' with type 'char *(char *, const char *)' 에러 발생하여 추가함

void Problem1_10() {
    
    // 예제 1
    
    struct Company {
        
        char title[15];
        int emp;
        int sales;
        float rate;
    };
    
    struct Company a;
    
    strcpy(a.title, "Korea Corp.");
    
    a.title[0] = 'K'; a.title[1] = 'o'; a.title[2] = 'r';
    a.title[3] = 'e'; a.title[4] = 'a'; a.title[5] = ' ';
    a.title[6] = 'C'; a.title[7] = 'o'; a.title[8] = 'r';
    a.title[9] = 'p'; a.title[10] = '.'; a.title[11] = '\0';
    
    a.emp = 1200;
    a.sales = 630;
    a.rate = 9.6;
    
    printf("%s %d %d %f \n", a.title, a.emp, a.sales, a.rate);
    
    // 예제 2
    
    struct Company2 {
        
        char title[15];
        int emp;
        int sales;
        float rate;
    } b;
    
    strcpy(b.title, a.title);
    b.emp = a.emp;
    b.sales = a.sales;
    b.rate = a.rate;
    
    printf("%s %d %d %f \n", b.title, b.emp, b.sales, b.rate);
    
    // 예제 3
    
    struct Company c = { "Korea Corp.", 1200, 630, 9.6 };
    
    printf("%s %d %d %f \n", c.title, c.emp, c.sales, c.rate);
    
    // 예제 4
    
    struct Company3 {
        
        char title[15];
        int emp;
        int sales;
        float rate;
    } d = { "Korea Corp.", 1200, 630, 9.6 };
    
    printf("%s %d %d %f \n", d.title, d.emp, d.sales, d.rate);
    
    // 예제 5
    
    struct {
        
        char title[15];
        int emp;
        int sales;
        float rate;
    } e = { "Korea Corp.", 1200, 630, 9.6 };
    
    printf("%s %d %d %f \n", e.title, e.emp, e.sales, e.rate);
    
    // 예제 6
    
    struct Company f;
    struct Company g;
    
    strcpy(f.title, "Korea Corp.");
    f.emp = 1200;
    f.sales = 630;
    f.rate = 9.6;
    
    strcpy(g.title, "Busan Corp.");
    g.emp = 1200;
    g.sales = 360;
    g.rate = 11.3;
    
    printf("%s %d %d %f \n", f.title, f.emp, f.sales, f.rate);
    printf("%s %d %d %f \n", g.title, g.emp, g.sales, g.rate);
    
    // 예제 7
    
    struct Company h;
    struct Company i;
    
    strcpy(h.title, "Korea Corp.");
    h.emp = 1200;
    h.sales = 630;
    h.rate = 9.6;
    
    strcpy(i.title, "Busan Corp.");
    i.emp = h.emp;
    i.sales = 360;
    i.rate = 11.3;
    
    printf("%s %d %d %f \n", h.title, h.emp, h.sales, h.rate);
    printf("%s %d %d %f \n", i.title, i.emp, i.sales, i.rate);
    
    // 예제 8
    
    struct {
        
        char title[15];
        int emp;
        int sales;
        float rate;
    } j = { "Koera Corp.", 1200, 630, 9.6 };
    
    struct {
        
        char title[15];
        int emp;
        int sales;
        float rate;
    } k = { "Busan Corp.", 1200, 360, 11.3 };
    
    printf("%s %d %d %f \n", j.title, j.emp, j.sales, j.rate);
    printf("%s %d %d %f \n", k.title, k.emp, k.sales, k.rate);
    
    // 예제 9
    
    struct Company arr[3];

    strcpy(arr[0].title, "Korea Corp.");
    arr[0].emp = 1200;
    arr[0].sales = 630;
    arr[0].rate = 9.6;
    
    strcpy(arr[1].title, "USA Corp.");
    arr[1].emp = 5200;
    arr[1].sales = 3360;
    arr[1].rate = 10.3;
    
    strcpy(arr[2].title, "Suwon Corp.");
    arr[2].emp = 800;
    arr[2].sales = 880;
    arr[2].rate = 7.2;
    
    printf("%s %d %d %f \n", arr[0].title, arr[0].emp, arr[0].sales, arr[0].rate);
    printf("%s %d %d %f \n", arr[1].title, arr[1].emp, arr[1].sales, arr[1].rate);
    printf("%s %d %d %f \n", arr[2].title, arr[2].emp, arr[2].sales, arr[2].rate);
    
    // 예제 10
    
    struct Company arr2[3] = { {"Korea Corp.", 1200, 630, 9.6}, {"USA Corp.", 5200, 3360, 10.3}, {"Suwon Corp.", 800, 880, 7.2} };
    
    printf("%s %d %d %f \n", arr2[0].title, arr2[0].emp, arr2[0].sales, arr2[0].rate);
    printf("%s %d %d %f \n", arr2[1].title, arr2[1].emp, arr2[1].sales, arr2[1].rate);
    printf("%s %d %d %f \n", arr2[2].title, arr2[2].emp, arr2[2].sales, arr2[2].rate);
}
