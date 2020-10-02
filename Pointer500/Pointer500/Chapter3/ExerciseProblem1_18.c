//
//  ExerciseProblem1_.c
//  Pointer500
//
//  Created by ParkSeungtae on 2020/10/02.
//  Copyright © 2020 ParkSeungtae. All rights reserved.
//

#include <stdio.h>

void ExerciseProblem1_18() {
    
    // 예제 1
    
    struct emp {
    
        char name[30];
        char section[10];
        int age;
        float car;
    };
    
    struct emp a;
    
    strcpy(a.name, "Lee SunHee");
    strcpy(a.section, "비서");
    a.age = 24;
    a.car = 2.4;
    
    printf("%s %s %d %f \n", a.name, a.section, a.age, a.car);
    
    // 예제 2
    
    struct emp2 {
     
        char name[30];
        char section[10];
        int age;
        float car;
        
    } b;
    
    strcpy(b.name, "Lee SunHee");
    strcpy(b.section, "비서");
    b.age = 24;
    b.car = 2.4;
    
    printf("%s %s %d %f \n", b.name, b.section, b.age, b.car);
    
    // 예제 3
    
    struct emp3 {
     
        char name[30];
        char section[10];
        int age;
        float car;
        
    } c;
    
//    c = { "Lee SunHee", "비서", 24, 2.4 };
    
//    printf("%s %s %d %f \n", c.name, c.section, c.age, c.car);
    
    // 예제 4
    
    struct emp4 {
     
        char name[30];
        char section[10];
        int age;
        float car;
        
    } d = { "Lee SunHee", "비서", 24, 2.4 };
    
    printf("%s %s %d %f \n", d.name, d.section, d.age, d.car);
    
    
    // 예제 5
    
    struct {
        
        char name[30];
        char section[10];
        int age;
        float car;
        
    } e = { "Lee SunHee", "비서", 24, 2.4 };
    
    printf("%s %s %d %f \n", e.name, e.section, e.age, e.car);
    
    // 예제 6
    
    struct emp f;
    struct emp g;
    
    strcpy(f.name, "Lee SunHee");
    strcpy(f.section, "비서");
    f.age = 24;
    f.car = 2.4;
    
    strcpy(g.name, "Kim JinKyun");
    strcpy(g.section, "영업");
    g.age = 31;
    g.car = 6.5;
    
    printf("%s %s %d %f \n", f.name, f.section, f.age, f.car);
    printf("%s %s %d %f \n", g.name, g.section, g.age, g.car);
    
    // 예제 7
    
    struct emp h = { "Lee SunHee", "비서", 24, 2.4 };
    struct emp i = { "Kim JinKyun", "영업", 31, 6.5 };
    
    printf("%s %s %d %f \n", h.name, h.section, h.age, h.car);
    printf("%s %s %d %f \n", i.name, i.section, i.age, i.car);
    
    // 예제 8
    
    struct emp j;
    struct emp k;
    
    strcpy(j.name, "Lee SunHee");
    strcpy(j.section, "비서");
    j.age = 24;
    j.car = 2.4;
    
    strcpy(k.name, "Kin JinKyun");
    strcpy(k.section, "영업");
    k.age = j.age;
    k.car = j.car;
    
    printf("%s %s %d %f \n", k.name, k.section, k.age, k.car);
    
    // 예제 9
    
    struct emp arr[3];
    
    strcpy(arr[0].name, "Lee SunHee");
    strcpy(arr[0].section, "비서");
    arr[0].age = 24;
    arr[0].car = 2.4;
    
    strcpy(arr[1].name, "Kim JinKyun");
    strcpy(arr[1].section, "영업");
    arr[1].age = 31;
    arr[1].car = 6.5;
    
    strcpy(arr[2].name, "Han EuiBeom");
    strcpy(arr[2].section, "기획");
    arr[2].age = 35;
    arr[2].car = 12.3;
    
    printf("%s %s %d %f \n", arr[0].name, arr[0].section, arr[0].age, arr[0].car);
    printf("%s %s %d %f \n", arr[1].name, arr[1].section, arr[1].age, arr[1].car);
    printf("%s %s %d %f \n", arr[2].name, arr[2].section, arr[2].age, arr[2].car);
    
    // 예제 10
    
    struct emp arr2[3] = {
        { "Lee SunHee", "비서", 24, 2.4 },
        { "Kim JinKyun", "영업", 31, 6.5 },
        { "Han EuiBeom", "기획", 35, 12.3 }
    };
    
    printf("%s %s %d %f \n", arr2[0].name, arr2[0].section, arr2[0].age, arr2[0].car);
    printf("%s %s %d %f \n", arr2[1].name, arr2[1].section, arr2[1].age, arr2[1].car);
    printf("%s %s %d %f \n", arr2[2].name, arr2[2].section, arr2[2].age, arr2[2].car);
    
    // 예제 11
    
    struct emp5 {
        
        char *name;
        char *section;
        int age;
        float car;
    };
    
    struct emp5 m;
    
    m.name = "Lee SunHee";
    m.section = "비서";
    m.age = 24;
    m.car = 2.4;
    
    printf("%s %s %d %f \n", m.name, m.section, m.age, m.car);
    
    // 예제 12
    
    struct personal {
        
        int age;
        int income;
        int family;
    };
    
    struct company {
        
        char name[30];
        char homeland[10];
        struct personal data;
    };
 
    struct company n;
    
    strcpy(n.name, "Kim DongHwan");
    strcpy(n.homeland, "Mokpo");
    n.data.age = 25;
    n.data.income = 750;
    n.data.family = 4;
    
    printf("%s %s %d %d %d \n", n.name, n.homeland, n.data.age, n.data.income, n.data.family);
    
    // 예제 13
    
    int num;
    struct emp6 {
        
        char name[30];
        char homeland[15];
        char hobby[15];
        int age;
        int income;
        int family;
    };
    
    struct emp6 arr3[8] = {
        { "Kim KilDong", "Seoul", "Golf", 51, 1200, 3 },
        { "Jeon JuMin", "Mokpo", "Tennis", 31, 460, 2 },
        { "Lee ChilSeong", "Gwangju", "Tennis", 28, 600, 2 },
        { "Lim JiSun", "Jeju", "Glof", 20, 700, 1 },
        { "Pi Gill", "KangReung", "Baseball", 26, 550, 1 },
        { "Park JongSun", "Seoul", "Rugby", 29, 630, 2 },
        { "Choi SeongSik", "Busan", "Golf", 46, 1600, 5 },
        { "Kang JungBin", "Incheon", "Music", 18, 450, 1 }
    };
    
    char name[30];
    gets(name);
    
    for (num = 0; num < 8; num++) {
        
        if (strcmp(name, arr3[num].name) == 0) {
            
            printf("%s %s %s %d %d %d \n", arr3[num].name, arr3[num].homeland, arr3[num].hobby, arr3[num].age, arr3[num].income, arr3[num].family);
            break;
        }
    }
    
    // 예제 14
    
    int income;
    
    scanf("%d", &income);
    
    for (num = 0; num < 8; num++) {
        
        if (income < arr3[num].income) {
            
            printf("%s %s %s %d %d %d \n", arr3[num].name, arr3[num].homeland, arr3[num].hobby, arr3[num].age, arr3[num].income, arr3[num].family);
        }
    }
    
    // 예제 15
    
    int failmy;
    
    scanf("%d", &failmy);
    
    for (num = 0; num < 8; num++) {
        
        if (failmy == arr3[num].family) {
            
            printf("%s %s %s %d %d %d \n", arr3[num].name, arr3[num].homeland, arr3[num].hobby, arr3[num].age, arr3[num].income, arr3[num].family);
        }
    }
    
    // 예제 16
    
    struct emp7 {
        
        char name[30];
        int age;
        int income;
        int family;
    };
    
    struct emp7 o, *oo;
    
    oo = &o;
    
    strcpy(oo->name, "Baek JongSoon");
    oo->age = 43;
    oo->income = 1630;
    oo->family = 3;
    
    printf("%s %d %d %d \n", oo->name, oo->age, oo->income, oo->family);
    
    // 예제 17
    
    struct company p, *pp;
    
    pp = &p;
    
    strcpy(pp->name, "Hong SunPyo");
    strcpy(pp->homeland, "Kimpo");
    pp->data.age = 38;
    pp->data.income  = 850;
    pp->data.family = 4;
    
    printf("%s %s %d %d %d \n", pp->name, pp->homeland, pp->data.age, pp->data.income, pp->data.family);
    
    // 예제 18
    
    struct emp7 q, r;
    
    strcpy(q.name, "Baek JongSoon");
    q.age = 43;
    q.income = 1630;
    q.family = 3;
    
    r = q;
    
    printf("%s %d %d %d \n", r.name, r.age, r.income, r.family);
}
