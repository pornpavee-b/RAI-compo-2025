#include<stdio.h>
int main()
{
    
    char name[20];
    int age;
    float height;
    char university[20];

    printf("Enter your full name:");
    scanf("%[^\n]", name);
    printf("Enter your age:");
    scanf("%d", &age);
    printf("Enter your height:");
    scanf("%f", &height);
    printf("Enter your university name:");
    scanf("%s[^\n]", university);
    printf("Hi! Everyone. This is K.%s from %s. I am %d year old and my height is \n%f cm tall.",name,university,age,height);
  
    return (0);
   
}