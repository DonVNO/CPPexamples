#include<stdio.h>
int compare(char * target, char * standard);
int main(void)
{
    char target[7] = "Appley";
    char standard[] = "Apple";
    printf("%d\n",compare(target, standard));
    return 0;
}

int compare(char * target, char * standard)
{
    int i = 0;
    int dif = 0;
    while(target[i] || standard[i])
    {
        if(target[i] - standard[i] == 0)
        {
            i++;
            continue;
        }
        else
        {
            dif = target[i] - standard[i];
            break;
        }
    }
    return dif;
}
