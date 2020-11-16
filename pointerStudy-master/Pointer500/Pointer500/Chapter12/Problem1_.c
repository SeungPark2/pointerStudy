//
//  Problem1_.c
//  Pointer500
//
//  Created by 박승태 on 2020/11/12.
//  Copyright © 2020 ParkSeungtae. All rights reserved.
//

#include <stdio.h>
#define NULL 0

void Problem1_() {
    
    // 예제 1
    
    struct list {
        
        int value;
        struct list *next;
    };
    
    struct list x0, x1, x2, x3, x4, x5, *p = &x1, *wp;
    struct list x6, x7; // 예제 2
    int i;
    
    x0.value = NULL;
    x0.next = NULL;
    
    x1.value = 10;
    x1.next = &x2;
    
    x2.value = 15;
    x2.next = &x3;
    
    x3.value = 5;
    x3.next = &x4;
    
    x4.value = 11;
    x4.next = &x5;
    
    x5.value = 6;
    x5.next = &x6;
    
    // 예제 2
    
    x6.value = 50;
    x6.next = &x7;
    
    x7.value = 3;
    x7.next = &x0;
    
    for (wp = p; wp->value != NULL; wp = wp->next)
        printf("%d \n", wp->value);
    
    printf("\n");
    
    // 예제 3
    
    x1.next = &x3;
    
    for (wp = p; wp->value != NULL; wp = wp->next)
        printf("%d \n", wp->value);
        
    printf("\n");
    
    // 4
    
    struct list new1, new2;
    
    new1.value = 100;
    new1.next = &new2;
    
    new2.value = 77;
    new2.next = &x5;
    
    x4.next = &new1;
    
    for (wp = p; wp->value != NULL; wp = wp->next)
        printf("%d \n", wp->value);
    
    // 5
    
    struct datas {
        
        char name[10];
        int salary;
        struct datas *next;
    };
    
    struct datas d[8], *p2 = &d[0], *wp2;
    
    strcpy(d[0].name, "JinYoung");
    d[0].salary = 380;
    d[0].next = &d[1];
    
    strcpy(d[1].name, "SeungHee");
    d[1].salary = 520;
    d[1].next = &d[2];
    
    strcpy(d[2].name, "CheolSoo");
    d[2].salary =680;
    d[2].next = &d[3];
    
    strcpy(d[3].name, "BongSeon");
    d[3].salary = 720;
    d[3].next = &d[4];
    
    strcpy(d[4].name, "SuJin");
    d[4].salary = 560;
    d[4].next = &d[5];
    
    strcpy(d[5].name, "ByeongHo");
    d[5].salary = 420;
    d[5].next = &d[6];
    
    strcpy(d[6].name, "TaeSeon");
    d[6].salary = 770;
    d[6].next = &d[7];
    
    strcpy(d[7].name, "OkSeon");
    d[7].salary = 890;
    d[7].next = NULL;
    
    char name2[10];
    
    printf("이름을 입력하세요: ");
    scanf("%10s", name2);
    
    for (wp2 = p2; wp2->next != NULL; wp2 = wp2->next) {
        
        if (strcmp(wp2->name, name2) == 0 ) {
     
            printf("%s %d \n", wp2->name, wp2->salary);
            break;
        }
    }
    
    // 6
    
    int j, d1, n;
    
    for (i = 0; i < 7; i++) {
        for(j = 0; j < 8; j++) {
            
            if (d[i].salary > d[j].salary) {
                
                d1 = d[i].salary;
                d[i].salary = d[j].salary;
                d[j].salary = d1;
                
                strcpy(name2, d[i].name);
                strcpy(d[i].name, d[j].name);
                strcpy(d[j].name, name2);
            }
        }
    }
    
    printf("연봉을 입력하세요: ");
    scanf("%d", &n);
    
    for (wp2 = p2; wp2->next != NULL; wp2 = wp2->next) {
        
        if (n == wp2->salary) {
            
            printf("%s %d \n", wp2->name, wp2->salary);
        }
    }
    
    // 7
    
    struct list l[15], *p3 = &l[14], *wp3;
    
    l[0].value = 1;
    l[0].next = NULL;
    
    l[1].value = 5;
    l[1].next = &l[0];
    
    l[2].value = 7;
    l[2].next = &l[1];
    
    l[3].value = 8;
    l[3].next = &l[2];
    
    l[4].value = 9;
    l[4].next = &l[3];
    
    l[5].value = 12;
    l[5].next = &l[4];
    
    l[6].value = 13;
    l[6].next = &l[5];
    
    l[7].value = 16;
    l[7].next = &l[6];
    
    l[8].value = 17;
    l[8].next = &l[7];
    
    l[9].value = 19;
    l[9].next = &l[8];
    
    l[10].value = 22;
    l[10].next = &l[9];
    
    l[11].value = 23;
    l[11].next = &l[10];
    
    l[12].value = 25;
    l[12].next = &l[12];
    
    l[13].value = 29;
    l[13].next = &l[13];
    
    l[14].value = 35;
    l[14].next = &l[13];
    
    printf("찾을 값: ");
    scanf("%d ", &n);
    
    for (wp3 = p3; wp3->next != NULL; wp3 = wp3->next) {
        
        if (wp3->value == n) {
            
            printf("%d \n", wp3->value);
        }
    }
    
    // 8
    
    struct listr {
        
        struct listr *pre;
        int value;
        struct listr *next;
    };
    
    int avg = 16;
    struct listr li[15], *p4 = &li[0], *wp4;
    
    li[0].pre = NULL;   li[0].value = 1;  li[0].next = &li[1];
    li[1].pre = &li[0]; li[1].value = 5;  li[1].next = &li[2];
    li[2].pre = &li[1]; li[2].value = 7;  li[2].next = &li[3];
    li[3].pre = &li[2]; li[3].value = 8;  li[3].next = &li[4];
    li[4].pre = &li[3]; li[4].value = 9;  li[4].next = &li[5];
    li[5].pre = &li[4]; li[5].value = 12; li[5].next = &li[6];
    li[6].pre = &li[5]; li[6].value = 13; li[6].next = &li[7];
    li[7].pre = &li[6]; li[7].value = 16; li[7].next = &li[8];
    li[8].pre = &li[7]; li[8].value = 17; li[8].next = &li[9];
    li[9].pre = &li[8]; li[9].value = 19; li[9].next = &li[10];
    li[10].pre = &li[9]; li[10].value = 22; li[10].next = &li[11];
    li[11].pre = &li[10]; li[11].value = 23; li[11].next = &li[12];
    li[12].pre = &li[11]; li[12].value = 25; li[12].next = &li[13];
    li[13].pre = &li[12]; li[13].value = 28; li[13].next = &li[14];
    li[14].pre = &li[13]; li[14].value = 35; li[14].next = NULL;
    
    printf("값 입력: ");
    scanf("%d", &n);
    
    if (n > avg) {
        
        *p4 = li[14];
        for(wp4 = p4; wp4->pre != NULL; wp4 = wp4->pre) {
            
            if (n == wp4->value) {
                printf("%d \n", wp4->value);
                break;
            }
        }
    }
    else {
        
        for (wp4 = p4; wp4->next != NULL; wp4 = wp4->next) {
            
            if (n == wp4->value) {
                printf("%d \n", wp4->value);
                break;
            }
        }
    }
    
    // 9
    
    struct tree {
        
        struct tree *top;
        char str[10];
        struct tree *left;
        struct tree *right;
    };
    
    struct tree top, top_L, top_R, top_L_L, top_L_R, top_R_L, top_R_R;
    
    top.top = NULL; strcpy(top.str, "Korea"); top.left = &top_L; top.right = &top_R;
    top_L.top = &top; strcpy(top_L.str, "Canada"); top_L.left = &top_L_L; top_L.right = &top_L_R;
    top_R.top = &top; strcpy(top_R.str, "Peru"); top_R.left = &top_R_L; top_R.right = &top_R_R;
    top_L_L.top = &top_L; strcpy(top_L_L.str, "Austria"); top_L_L.left = NULL; top_L_L.right = NULL;
    top_L_R.top = &top_L; strcpy(top_L_R.str, "England"); top_L_R.left = NULL; top_L_R.right = NULL;
    top_R_L.top = &top_R; strcpy(top_R_L.str, "Mexico"); top_R_L.left = NULL; top_R_L.right = NULL;
    top_R_R.top = &top_R; strcpy(top_R_R.str, "USA"); top_R_R.left = NULL; top_R_R.right = NULL;
    
    
}
