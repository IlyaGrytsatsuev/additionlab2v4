#include <stdio.h>
int main ()
{
    char c;
    int state = 0, num_chars = 0, k;
    char a[1000];
    printf("Enter the the length :\n");
    scanf("%d",&k);
    printf("Enter the sentence:\n ");
    getchar();
    while (((c = getchar()) != EOF) && (c != '\n'))
    {
        if (('a' <= c &&c <= 'z')||('A' <= c && c <= 'Z')){
            state = 1;
            a[num_chars] = c;
            num_chars++;
        }
        else
            if(state == 1 )
            {
                if (num_chars == k)
                {
                    for (int i=0;i<num_chars;i++){
                        printf("%c", a[i]);
                    }
                    printf("\n");
                }
                state = 0;
                num_chars = 0;
                }
    }
    if (state == 1 && num_chars == k)
    {
        for (int i=0;i<num_chars;i++){
            printf("%c", a[i]);
        }
        printf("\n");
        num_chars = 0;
    return 0;
    }
}

 
