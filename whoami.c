#include<stdio.h>



int func1(int a, int b) {
 printf("executing func1\n");

}


int func4(int a, int b) {
 printf("executing func4\n");
}

int func3(int a, int b) {
 printf("executing func3\n");
}

int func2(int a, int b) {
 printf("executing func2\n");
}






int main() {
 int a;
 int b = 20;

 printf("make the variable a equals to:\n");
 scanf("%d\n", &a);

 func1(a,b);
 func2(a,b);
 func3(a,b);

 printf("func4 returns: %d\n", func4(a,b));
 return 0;
}
