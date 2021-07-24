#include <stdio.h>

int main (){
    char hasBF;
    printf("do your has bf?(Y/N)");
    scanf("%c",&hasBF);

    if (hasBF =='Y')
    {
        printf("hope have goodd life!");

    }else if(hasBF == 'N'){  //must use ==
        printf("yesssssss!");
    }
    


    return 0;
}