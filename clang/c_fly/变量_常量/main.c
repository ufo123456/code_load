#include <stdio.h>
#define URL "http://baidu.com"//宏定义
#define NAME "jack"
#define BOSS "hoda"
#define YEAR 2021
#define MONTH 20
#define DAY 20
int main(){
    printf("%s is born %dyear %dmonth%d day\n",NAME,YEAR,MONTH,DAY);
    printf("the boy name is:%s\n",NAME);
    printf("baidu:%s\n",URL);
}