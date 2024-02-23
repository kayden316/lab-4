#include<stdio.h>
int main(){
    int num;

    do
    {
        printf("Enter a number : ");
        scanf("%d", &num);
        if (num%2 !=0)
        {
            printf("the given number is not even, please try again\n");
        }
        
    } while (num%2 !=0);
        printf("The given number is even\n");
    
    return 0;
}