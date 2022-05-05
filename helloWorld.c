# include <stdio.h>
void PrintHelloWorld() {
    printf("Hello World!/n");
}

void (*pf)();

int main() {
    pf = PrintHelloWorld;
    pf();
    return 0;
}

