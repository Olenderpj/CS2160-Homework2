#include<stdio.h>

int func1(int a, int b) {
    printf("executing func1\n");
    return a * ((3 * a + 2) + (4 * b));
}

int func2(int a, int b) {
    printf("executing func2\n");
    while (a > 0) {
        b >> 1;
        a = a - 4;
    }
    return b;
}

int func3(int a, int b) {
    printf("executing func3\n");
    if (a <= 0) {
        return -1;
    } else {
        return (b > 4);
    }
}

int func4(int a, int b) {
    printf("executing func4\n");
    int var = ((0xf5 & getchar()) == 0x34);
    return var;
}


int main() {
    int a;
    int b = 20;

    printf("make the variable a equals to:\n");
    scanf("%d\n", &a);

    func1(a, b);
    func2(a, b);
    func3(a, b);

    printf("func4 returns: %d\n", func4(a, b));
    return 0;
}