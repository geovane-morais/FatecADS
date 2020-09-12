#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b=0;
    float a = 1;
    float *v;

    v = (float*) (malloc(sizeof(float)));
    while(1)
    {
        printf("DIGITE algo:");
        scanf("%f",&a);
        v[b] = a;
        printf("debug v[%d]: %.2f\n",b,v[b]);
        if (a == 0) break;
        b ++;
        v = (float*) (realloc(v,b * sizeof(float)));
    }
    /*free(v);
    v = NULL;*/
    for (int c=0;c<b;c++)
        {printf("DEBUG for v[%d]: %.2f\n",c,v[c]);}

}

/*
 int a=0;
    float *v;
    v = (float*) (malloc(sizeof(float)));
    printf("Pesquisa")
    while (1)
    {
        printf("Informe sua massa:");
        scanf("%f",&v[a]);
        if (v[a] == 0) break;
        v = (float*) (realloc(v,++a * sizeof(float)));
    }

*/