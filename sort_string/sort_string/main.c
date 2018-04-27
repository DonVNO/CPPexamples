#include<stdio.h>
#include<string.h>
#define SIZE 81
#define LIM 20
#define HALT " "
void stsrt(char * string[], int num);
char * s_gets(char * st, int n);
int main(void)
{
    char input[LIM][SIZE];//储存输入的数组
    char *ptstr[LIM];//内涵指针变量的数组
    int ct = 0;//输入计数
    int k;//输出计数
    
    printf("Input up to %d lines, and I will sort them.\n",LIM);
    printf("To stop, press the enter key at the lines start.\n");
    while(ct < LIM && s_gets(input[ct], SIZE) != NULL && input[ct] != '\0')
    {
        ptstr[ct] = input[ct];
        ct++;
    }
    stsrt(ptstr, ct);
    puts("\nHere's the sorted llist:\n");
    for(k = 0; k < ct; k++)
        puts(ptstr[k]);
    
    return 0;
}

void stsrt(char * string[], int num)
{
    char *temp;
    int top, seek;
    
    for (top = 0; top < num - 1; top++)
        for(seek = top + 1; seek < num; seek++)
            if(strcmp(string[top], string[seek]) > 0)
            {
                temp = string[top];
                string[top] = string[seek];
                string[seek] = temp;
            }
}

char* s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;
    
    ret_val = fgets(st, n, stdin);
    if(ret_val)
    {
        while(st[i] != '\n' && st[i] != '0')
            i++;
        if(st[i] == '\n')
            st[i] = '\0';
        else
            while(getchar() != '\n')
                continue;
    }
    return ret_val;
}