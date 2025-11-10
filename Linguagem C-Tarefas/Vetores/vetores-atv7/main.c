#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x[5]={1,2,3,4,5}, y[5]={1,2,3,4,5};
    //printf("%d %d", x, y);
    if(x==y){
        printf("Os vetores são iguais");
    }else{
        printf("Os vetores não são iguais");
    }

    return 0;
}
