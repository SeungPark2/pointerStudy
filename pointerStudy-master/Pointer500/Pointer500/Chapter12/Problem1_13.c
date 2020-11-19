//
//  Problem1_.c
//  Pointer500
//
//  Created by 박승태 on 2020/11/12.
//  Copyright © 2020 ParkSeungtae. All rights reserved.
//

#include <stdio.h>
#define NULL 0

struct tree {
            
    char str[10];
    struct tree *left;
    struct tree *right;
};

struct tree2 {
            
    int value;
    struct tree2 *left;
    struct tree2 *right;
};


void pr (struct tree *p);
void pr2 (struct tree *p);
void pr3 (struct tree *p, char s[10]);
void pr4 (struct tree2 *pi);

void Problem1_13() {
    
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
    
    struct tree t[11], *pp = t + 3;

    strcpy(t[0].str, "Korea"); t[0].left = NULL; t[0].right = NULL;
    strcpy(t[1].str, "Canada"); t[1].left = &t[0]; t[1].right = &t[2];
    strcpy(t[2].str, "Peru"); t[2].left = NULL; t[2].right = NULL;
    strcpy(t[3].str, "Austria"); t[3].left = &t[1]; t[3].right = &t[5];
    strcpy(t[4].str, "England"); t[4].left = &t[7]; t[4].right = &t[8];
    strcpy(t[5].str, "Mexico"); t[5].left = &t[4]; t[5].right = &t[6];
    strcpy(t[6].str, "USA"); t[6].left = NULL; t[6].right = NULL;

//    pr(pp);
    
    // 예제 10
    
//    struct tree tr[7], *p2 = tr;
//
//    strcpy(tr[0].str, "Korea"); tr[0].left = &tr[1]; tr[0].right = &tr[2];
//    strcpy(tr[1].str, "Canada"); tr[1].left = &tr[3]; tr[1].right = &tr[4];
//    strcpy(tr[2].str, "Peru"); tr[2].left = &tr[5]; tr[2].right = &tr[6];
//    strcpy(tr[3].str, "Austria"); tr[3].left = NULL; tr[3].right = NULL;
//    strcpy(tr[4].str, "England"); tr[4].left = NULL; tr[4].right = NULL;
//    strcpy(tr[5].str, "Mexico"); tr[5].left = NULL; tr[5].right = NULL;
//    strcpy(tr[6].str, "USA"); tr[6].left = NULL; tr[6].right = NULL;
//
////    pr(p2);
//
//    // 11
//
//    strcpy(t[0].str, "Austria"); t[0].left = NULL; t[0].right = NULL;
//    strcpy(t[1].str, "China"); t[1].left = NULL; t[1].right = NULL;
//    strcpy(t[2].str, "England"); t[2].left = &t[1]; t[2].right = &t[3];
//    strcpy(t[3].str, "Germany"); t[3].left = NULL; t[3].right = NULL;
//    strcpy(t[4].str, "Canada"); t[4].left = &t[0]; t[4].right = &t[2];
//    strcpy(t[5].str, "Korea"); t[5].left = NULL; t[5].right = NULL;
//    strcpy(t[6].str, "Mexico"); t[6].left = &t[5]; t[6].right = &t[7];
//    strcpy(t[7].str, "Pakistan"); t[7].left = NULL; t[7].right = NULL;
//    strcpy(t[8].str, "Peru"); t[8].left = &t[6]; t[8].right = &t[9];
//    strcpy(t[9].str, "USA"); t[9].left = NULL; t[9].right = NULL;
//    strcpy(t[10].str, "Kuba"); t[10].left = &t[4]; t[10].right = &t[8];
//
//    struct tree *p3 = &t[10];
//
//    //pr(pp);
//
//    // 12
//
//    char s[10];
//    scanf("%s", s);
//
//    pr3(p3, s);
//
//    // 13
//
//    struct tree2 i[7], *pi = i;
//
//    i[0].value = 1; i[0].left = &i[1]; i[0].right = &i[2];
//    i[1].value = 2; i[1].left = &i[3]; i[1].right = &i[4];
//    i[2].value = 3; i[2].left = &i[5]; i[2].right = &i[6];
//    i[3].value = 4; i[3].left = NULL; i[3].right = NULL;
//    i[4].value = 5; i[4].left = NULL; i[4].right = NULL;
//    i[5].value = 6; i[5].left = NULL; i[5].right = NULL;
//    i[6].value = 7; i[6].left = NULL; i[6].right = NULL;
//    
//    pr4(pi);
}

void pr (struct tree *p) {
    
    if (p->left != NULL)
        pr(p->left);
    
    printf("%s \n", p->str);
    
    if (p->right != NULL)
        pr(p->right);
        
    return;
}

void pr2 (struct tree *p) {
    
    if (p->left != NULL)
        pr2(p->left);
            
    if (p->right != NULL)
        pr2(p->right);
    
    printf("%s \n", p->str);
        
    return;
}

void pr3 (struct tree *p, char s[10]) {
    
    if ((p->left == NULL) && (p->right == NULL)) {
        if (strcmp(p->str, s) == 0)
            printf("%s \n", p->str);
            
        return ;
    }
            
    if (strcmp(p->str, s) == 0) {
        
        printf("%s \n", p->str);
        
        return ;
    }
    else {
                
        if (strcmp(p->str, s) > 0)
            pr3(p->left, s);
        else
            pr3(p->right, s);
    }
}

void pr4 (struct tree2 *pi) {
    
    if (pi->left != NULL)
        pr4(pi->left);
    
    printf("%d \n", pi->value);
    
    if (pi->right != NULL)
        pr4(pi->right);
        
    return;
}
