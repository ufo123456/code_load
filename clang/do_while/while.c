#include <stdio.h>

int main()
{   int get =0;
    printf("please input your word:");
    
    while (getchar() !='\n')//当getchar不是‘'\n’,执行get =get +1;
    {
        /* code */
        get =get +1;
    }
    printf("your input  %d ",get);
    
    


    return 0;
}