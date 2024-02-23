#include<stdio.h>
int main(){
    int num,reminder,a;
    printf("Enter a number : ");
    scanf("%d", &num);
    while (num !=0)
    {
        reminder=num%10;
        a=reminder+a;
        num /=10;
        
    }
    printf("The Sum of digits is %d", a);
    return 0;
    
}
