#include<stdio.h>
int main(){
    int num ,multiply;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i=1; i<=10; i++){
        multiply=num * i;
        printf("\n%d * %d = %d",num,i,multiply);

    }
}