#include <stdio.h>
#include <stdio.h>

int max, min;
int a[100];

void maxmin(int i, int j)
{
    int max1, min1, mid;
    if (i == j)
    {
        max = min = a[i];
    }
    else
    {
        if (i == j - 1)
        {
            if (a[i] < a[j])
            {
                max = a[j];
                min = a[i];
            }
            else
            {
                max = a[i];
                min = a[j];
            }
        }
        else
        {
            mid = (i + j) / 2;
            maxmin(i, mid);
            max1 = max;
            min1 = min;
            maxmin(mid + 1, j);
            if (max < max1) {
                max = max1;
            }
            if (min > min1) {
                min = min1;
            }
        }
    }
}

int main()
{
    int i, num;
    
    printf("\nIntroduceti numarul de elemente pentru sir: ");
    scanf("%d", &num);
    printf("Introduceti numerele pentru sir: \n");
    
    for (i = 1; i <= num; i++)
    {
        scanf("%d", &a[i]);
    }
    
    max = a[0];
    min = a[0];
    maxmin(1, num);
    
    printf("-----------------------------\n");
    printf("Elementul minim al sirului : %d\n", min);
    printf("Elementul maxim al sirului : %d\n", max);
    printf("-----------------------------");
    
    return 0;
}
