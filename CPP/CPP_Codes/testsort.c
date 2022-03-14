#include <stdio.h>
void main()
{
    char fullstack[50], developers[50];
    int test_cases;
    scanf("%d", &test_cases);
    if (test_cases >= 100)
    {
        printf("over the limit\n");
    }
    else
    {
        while (test_cases > 0)
        {
            fflush(stdin);
            int final_fullstack[255] = {0};
            int index1 = 0, index2 = 0;
            gets(fullstack);
            gets(developers);
            while (fullstack[index1] != '\0')
            {
                index2 = 0;
                while (developers[index2] != '\0')
                {
                    if (fullstack[index1] == developers[index2])
                    {
                        final_fullstack[(int)fullstack[index1]]++;
                    }
                    index2++;
                }
                index1++;
            }
            int count = 0;
            for (int i = 0; i < 255; i++)
            {
                if (final_fullstack[i] > 0)
                {
                    count+=final_fullstack[i];
                }
            }
            printf("%d", count);
            test_cases--;
            printf("\n");
        }
    }
}