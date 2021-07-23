#include <stdio.h>

int main(){

    char ch;

    printf("input your grde:");
    scanf("%c",&ch);

    switch (ch)
    {
    case 'A':printf("您的成绩在90及以上");
        break;
    case 'B':printf("您的成绩在80及以上");
        break;
    case 'c':printf("您的成绩在70及以上");
    break;
    case 'D':printf("您的成绩在60及以上");
    break;
    case 'E':printf("您的成绩在60及以下");
        
        break;
    
    default:printf("建议退学！");
        break;
    }


    return 0;
}