#include <stdio.h>

int main(){
    char isRain, isFree;
    printf(" Have free time?(Y/N)");

    scanf("%c",&isFree);

    getchar(); //must use getchar();

    printf("The weather having rain?(Y,N)");

    scanf("%c",&isRain);

    getchar();
    switch (isRain)
    {
    case 'Y':printf("ONNNNNN!");
        break;
    case 'N':printf("yessssssss!");
        break;
    default:
        break;
    }
    switch (isFree)

    {
    case 'Y':printf("ONNNNNNNN! TOO!");
        break;
    case 'N': printf("yesssSSSSSSSS!");
        break;
    
    default:printf("can your say again?");
        break;
    }

    return 0;
}