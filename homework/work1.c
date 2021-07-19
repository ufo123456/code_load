#include <stdio.h>
void two();
void one_three();
void three();

int main(void){
    printf("start now\n");
    one_three();
    two();
    three();
    
    printf("done!");
}
void two(){
    printf("Two\n"); //c primer homework.
}
void three(){
    printf("three\n");
}
void one_three(){
    printf("one\n");
}