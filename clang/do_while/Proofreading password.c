#include <stdio.h>

int main()
{   int scanf_passwd; 
    int true_passwd =123456;
    printf("input your passwd:");
    scanf("%d",&scanf_passwd);

    if(scanf_passwd ==true_passwd){
        printf("The password is correct");

    }else{
        printf("please try again");
    }

    return 0;
}