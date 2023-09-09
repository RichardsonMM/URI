#include <stdio.h>
int main()
{
    int n, count;
    int pa, pb;
    double pac, pbc;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++)
    {
        count = 0;
        scanf("%d %d %lf %lf", &pa, &pb, &pac, &pbc);
        while(pa <= pb)
        {
            pa *= (pac / 100.0) + 1.0;
            pb *= (pbc / 100.0) + 1.0;
            count++;
            if (count > 100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if (count <= 100)
            printf("%d anos.\n", count);
    }
    return 0;
}