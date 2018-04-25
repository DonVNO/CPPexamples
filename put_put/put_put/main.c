#include<stdio.h>
void put1(const char*);
int put2(const char*);
int main(void)
{
    put1("If I'd as much money");
    put1(" as I could spend,\n");
    printf("I count %d characters.\n",put2("I would never cry old chairs to mend."));
    return 0;
}
 void put1(const char * ch)
{
    while (*ch) {
        putchar(*ch++);
    }
}

int put2(const char * ch)
{
    int count = 0;
    while (*ch) {
        putchar(*ch++);
        count++;
    }
    putchar('\n');
    return count;
}
