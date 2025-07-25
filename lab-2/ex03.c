#include<stdio.h>
int main()
{
    float height;
    char name[20];
    int weight;
    int Age;
    char gender; 
    char education[20];
    printf("Enter your name :");
    scanf("%s", name);
    printf("Enter your Age :");
    scanf("%d", &Age);
    printf("Enter your height:");
    scanf("%f", &height);
    printf("Enter your weight :");
    scanf("%d", &weight);
    printf("Enter your gender :");
    scanf("%s", &gender);
    printf("Enter your Education Qualification :");
    scanf(" %[^\n]", education);
    return (0);
    printf("Name:%s\n",name);
    printf("Age:%d\n",Age);
    printf("Gender:%c\n",gender);
    printf("Heigh:%f\n",height);
    printf("Weight:%d\n",weight);
    printf("Education:%s\n",education);

    return(0);
}