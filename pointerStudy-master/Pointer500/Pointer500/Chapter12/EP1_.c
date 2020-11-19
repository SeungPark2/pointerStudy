//
//  EP1_.c
//  Pointer500
//
//  Created by 박승태 on 2020/11/19.
//  Copyright © 2020 ParkSeungtae. All rights reserved.
//

#include <stdio.h>

struct treee {
    
    int value;
    struct treee *left, *right;
};

void prr(struct treee *p);

void EP1_() {
    
    struct list {
        
        char name[10];
        int age;
        struct list *next;
    };
    
    // 1
    
    struct list li[11], *p;
    
    strcpy(li[0].name, "JinKyun"); li[0].age = 36; li[0].next = &li[1];
    strcpy(li[1].name, "MiWha"); li[1].age = 33; li[1].next = &li[2];
    strcpy(li[2].name, "MyeonGoo"); li[2].age = 27; li[2].next = &li[3];
    strcpy(li[3].name, "JongHoon"); li[3].age = 45; li[3].next = &li[4];
    strcpy(li[4].name, "NamSik"); li[4].age = 51; li[4].next = &li[5];
    strcpy(li[5].name, "SangHyeon"); li[5].age = 29; li[5].next = &li[6];
    strcpy(li[6].name, "SeokJoo"); li[6].age = 35; li[6].next = &li[7];
    strcpy(li[7].name, "YongJoo"); li[7].age = 41; li[7].next = &li[8];
    strcpy(li[8].name, "EuiBeom"); li[8].age = 46; li[8].next = &li[9];
    strcpy(li[9].name, "ChunSik"); li[9].age = 61; li[9].next = NULL;
    
    for (p = li; p->next != NULL; p = p->next)
        printf("%s %d \n", p->name, p->age);
    printf("%s %d \n", p->name, p->age);
    
    
    // 2
    
    li[3].next = &li[6];

    for (p = li; p->next != NULL; p = p->next)
        printf("%s %d \n", p->name, p->age);
    
    // 3
    
    li[0].next = &li[2];
    li[2].next = &li[4];
    li[4].next = &li[5];
    li[6].next = &li[8];
    li[8].next = NULL;

    for (p = li; p->next != NULL; p = p->next)
        printf("%s %d \n", p->name, p->age);
    printf("%s %d \n", p->name, p->age);
    
    // 4
    
    struct list li2[11] = {
        "JinKyun", 36, &li2[1], "MiWha", 33, &li2[2],
        "MyeonGoo", 27, &li2[3], "JongHoon", 45, &li2[4],
        "NamSik", 51, &li2[5], "SangHyeon", 29, &li2[6],
        "SeokJoo", 35, &li2[7], "YongJoo", 41, &li2[8],
        "EuiBeom", 46, &li2[9], "ChunSik", 61, &li2[10],
        "JuHee", 33, NULL
    };
    
    for (p = li2; p->next != NULL; p = p->next)
        printf("%s %d \n", p->name, p->age);
    printf("%s %d \n", p->name, p->age);
    
        
    struct treee t[15] = {
        30, NULL, NULL, 60, &t[0], &t[2],
        70, NULL, NULL, 80, &t[1], &t[5],
        85, NULL, NULL, 90, &t[4], &t[6],
        95, NULL, NULL, 100, &t[3], &t[11],
        110, NULL, NULL, 120, &t[8], &t[10],
        130, NULL, NULL, 150, &t[9], &t[13],
        160, NULL, NULL, 180, &t[12], &t[14],
        200, NULL, NULL
    }, *ppp = t + 7;
            
    prr(ppp);
}

void prr(struct treee *p) {
    
    if (p->left != NULL)
        prr(p->left);
    
    printf("%d \n", p->value);
    
    if (p->right != NULL)
        prr(p->right);
}
