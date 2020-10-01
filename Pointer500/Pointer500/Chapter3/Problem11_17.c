//
//  Problem11_.c
//  Pointer500
//
//  Created by ParkSeungtae on 2020/10/01.
//  Copyright © 2020 ParkSeungtae. All rights reserved.
//

#include <stdio.h>
#include <string.h>

void Problem11_17() {
    
    // 예제 11
    
    struct Company {
        
        char *title;
        int emp;
        int sales;
        float rate;
    } a;
    
    a.title = "Korea Corp.";
    a.emp = 1200;
    a.sales = 630;
    a.rate = 9.6;
    
    printf("%s %d %d %f \n", a.title, a.emp, a.sales, a.rate);
    
    // 예제 12
    
    struct sub {
      
        int order;
        int rate_o;
        int sales;
        int rate_s;
    };
    
    struct Company2 {
      
        char title[15];
        int emp;
        struct sub str_mem;
    };
    
    struct Company2 b;
    
    strcpy(b.title, "Korea Corp.");
    b.emp = 1200;
    b.str_mem.order = 560;
    b.str_mem.rate_o = 47;
    b.str_mem.sales = 630;
    b.str_mem.rate_s = 66;
    
    printf("%s %d %d %d %d %d \n", b.title, b.emp, b.str_mem.order, b.str_mem.rate_o, b.str_mem.sales, b.str_mem.rate_s);
    
    // 예제 13
    
    struct Company3 {
        
        char title[15];
        int emp;
        int sales;
        float rate;
    };
    
    struct Company3 c;
    struct Company3 *cc;
    
    strcpy(c.title, "Korea Corp.");
    c.emp = 1200;
    c.sales = 630;
    c.rate = 9.6;
    
    cc = &c;
    
    printf("%s %d %d %f \n", c.title, c.emp, c.sales, c.rate);
    printf("%s %d %d %f \n", cc->title, cc->emp, cc->sales, cc->rate);
    
    // 예제 14
    
    int i;
    struct Company3 d;
    
    d = c;
    
    printf("%s %d %d %f \n", d.title, d.emp, d.sales, d.rate);
    
    // 예제 15
    
    struct Company3 arr[8] = {
        { "Korea Corp.", 1200, 630, 9.6 },
        { "USA Corp.", 5200, 3360, 10.3 },
        { "Suwon Corp.", 800, 880, 7.2 },
        { "Mokpo Corp.", 900, 225, 4.5 },
        { "France Corp.", 4650, 550, 8.9 },
        { "Germany Corp.", 1300, 24, 5.5 },
        { "Canada Corp.", 1600, 595, 9.5 },
        { "Italy Corp.", 150, 24, 6.9 }
    };
    
    char t[15];
    
    gets(t); // gets는 라인의 끝을 입력하지 않음
    
    for (i = 0; i < 8; i++) {
        
        if (strcmp(t, arr[i].title) == 0) {
        
            printf("%s %d %d %f \n", arr[i].title, arr[i].emp, arr[i].sales, arr[i].rate);
            break;
        }
    }
    
    // 예제 16
    
    int num;
    
    scanf("%d", &num);
    
    for (i = 0; i < 8; i++) {
        
        if (num <= arr[i].emp) {
        
            printf("%s %d %d %f \n", arr[i].title, arr[i].emp, arr[i].sales, arr[i].rate);
        }
    }
    
    // 예제 17
    
    int num2;
    float num3;
    
    scanf("%d", &num2);
    scanf("%f", &num3);
    
    for (i = 0; i < 8; i++) {
        
        if (num2 <= arr[i].emp && num3 <= arr[i].rate) {
        
            printf("%s %d %d %f \n", arr[i].title, arr[i].emp, arr[i].sales, arr[i].rate);
        }
    }
}
