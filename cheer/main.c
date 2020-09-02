#include<stdio.h>
#include<string.h>

void cheer(char name[], int love);
int main(void)
{
    char name[100];
    int love;

    printf("I'll cheer! Give me a name: ");
    scanf("%[^\n]s", name);
    printf("Scale your love(1-10): ");
    scanf("%d", &love);

    cheer(name, love);
}

void cheer(char name[], int love)
{
    char an[] = { 'a','A','e','E','f','F','h','H','i','I','l','L',
               'm','M','n','N','o','O','r','R','s','S','x','X' };
    int anTrue = 0;

    for (int i = 0, n = strlen(name); i < n; i++)
    {
        if (name[i] == 32)
            i++;

        // Check for an or a
        for (int j = 0, n = strlen(an); j < n; j++)
        {
            if (name[i] == an[j])
            {
                anTrue = 1;
                break;
            }
        }

        if (anTrue == 1)
            printf("You Give me an %c  ------- %c\n\n", name[i], name[i]);
        else
            printf("You Give me a  %c  ------- %c\n\n", name[i], name[i]);

        anTrue = 0;
    }
    for (int i = 0; i < love; i++)
    {
        printf("%s!\n", name);
    }
}
