#include <stdio.h>

/*
int fibo(int n) {
    if (n < 3) return 1;
    return fibo(n - 1) + fibo(n - 2);
}

int main() {
    int N;
    scanf("%d", &N);
    printf("%d\n", fibo(N));
    return 0;
}


//1
#include <stdio.h>

struct info {
    char name[20], tel[20], addr[20];
};

void input(struct info& a) {
    scanf("%s %s %s", a.name, a.tel, a.addr);
}

void output(struct info a) {
    printf("name : %s\n", a.name);
    printf("tel : %s\n", a.tel);
    printf("addr : %s\n", a.addr);
}

int main() {
    struct info a;

    input(a);
    output(a);

    return 0;
}


//2
#include <stdio.h>
#include <string.h>

struct info {
    char name[20], tel[20], addr[20];
};

void input(struct info mlist[]) {
    for (int i = 0; i < 3; i++) {
        scanf("%s %s %s", mlist[i].name, mlist[i].tel, mlist[i].addr);
    }
}

void sort(struct info mlist[]) {
    struct info temp;
    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (strcmp(mlist[i].name, mlist[j].name) > 0) {
                temp = mlist[i];
                mlist[i] = mlist[j];
                mlist[j] = temp;
            }

        }
    }
}

void output(struct info mlist[]) {
    printf("name : %s\n", mlist[0].name);
    printf("tel : %s\n", mlist[0].tel);
    printf("addr : %s\n", mlist[0].addr);

}

int main() {
    struct info man_list[3];

    input(man_list);
    sort(man_list);
    output(man_list);

    return 0;
}


//3
#include <stdio.h>

struct square {
    int xL, yL, xR, yR;
};


int main()
{
    struct square a, b, c;

    scanf("%d %d %d %d", &a.xL, &a.yL, &a.xR, &a.yR);
    scanf("%d %d %d %d", &b.xL, &b.yL, &b.xR, &b.yR);

    c.xL = a.xL - b.xL < 0 ? a.xL : b.xL;
    c.yL = a.yL - b.yL < 0 ? a.yL : b.yL;
    c.xR = a.xR - b.xR > 0 ? a.xR : b.xR;
    c.yR = a.yR - b.yR > 0 ? a.yR : b.yR;

    printf("(%d, %d) (%d, %d)\n", c.xL, c.yL, c.xR, c.yR);

    return 0;

}


//4
#include <stdio.h>

struct body {
    double height, weight;
};

void input(struct body& papa, struct body& mama) {
    scanf("%lf %lf", &papa.height, &papa.weight);
    scanf("%lf %lf", &mama.height, &mama.weight);
}

struct body calc(struct body papa, struct body mama) {
    struct body result;
    result.height = ((papa.height + mama.height) / 2) + 5;
    result.weight = ((papa.weight + mama.weight) / 2) - 4.5;

    return result;
}

void output(struct body man) {
    printf("height : %dcm\n", (int)man.height);
    printf("weight : %.1lf\n", man.weight);
}

int main() {
    struct body papa, mama, student;

    input(papa, mama);
    student = calc(papa, mama);
    output(student);

    return 0;
}


//5
#include <stdio.h>

struct score {
    char name[20];
    int a, b, c, sum;
};

void input(struct score s[], int n) {
    for (int i = 0; i < n; i++) {
        s[i].sum = 0;
        scanf("%s %d %d %d", s[i].name, &s[i].a, &s[i].b, &s[i].c);
        s[i].sum = s[i].a + s[i].b + s[i].c;
    }
}

void sort(struct score s[], int n) {
    struct score temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (s[i].sum < s[j].sum) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

void output(struct score s[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s %d %d %d %d\n", s[i].name, s[i].a, s[i].b, s[i].c, s[i].sum);
    }
}

int main() {
    int n;
    puts("How many people?");
    scanf("%d", &n);

    struct score students[10];

    input(students, n);
    sort(students, n);
    output(students, n);

    return 0;
}

*/





void input(int* p, int n)
{
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", p + i);
//        printf("%d ", *(p + i));
    }
}
void sort(int* a, int n)
{
    int temp;

    for (size_t i = 0; i < n - 1; i++)
    {
        for (size_t j = i + 1; i < n; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

}

void output(int* p, int n)
{
    printf("max : %d\n", *(p + (n - 1)));
    printf("min : %d\n", *p);
}

int main()
{
    int n, * p;
    scanf("%d", &n);

    p = new int[n];

    input(p, n);
    sort(p, n);
    output(p, n);

    delete[]p;

    return 0;
}