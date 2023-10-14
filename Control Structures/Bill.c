#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("Please select your Juice\n Enter 1 for Pinapple, 2 for Orange, 3 for Strawberry, 4 for Coconut and 5 for Apple\n",a);
    scanf("%d",&a);
    printf("Enter Quantity\n",b);
    scanf("%d",&b);
    switch(a)
    {
        case 1: c=(5*b);
        printf("Your bill is $%d\n",c);
        break;

        case 2: c=(8*b);
        printf("Your bill is $%d\n",c);
        break;

        case 3: c=(7*b);
        printf("Your bill is $%d\n",c);
        break;

        case 4: c=(6*b);
        printf("Your bill is $%d\n",c);
        break;

        case 5: c=(5*b);
        printf("Your bill is $%d\n",c);
        break;

        default: printf("Please choose an item from the above");
        
     }
     printf("Thank You!");
     getch();
}
