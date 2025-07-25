 #include<stdio.h>
int main()
{
    
    char name[20];
    int ID;
    int Programming;
    float Physics;
    float Calculus;

    printf("Enter your Name:");
    scanf("%s", name);
    printf("Enter your student ID :");
    scanf("%d", &ID);
    printf("Enter your Programming score:");
    scanf("%d", &Programming);
    printf("Enter your Physics score:");
    scanf("%f", &Physics);
    printf("Enter your Calculus score :");
    scanf(" %f", &Calculus);
    printf("Hi %s(%d)! Your GPA is%.2f",name,ID,(Programming+Physics+Calculus)/3);

    return (0);
   
}