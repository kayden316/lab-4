#include<stdio.h>
#include<math.h>
int main(){
    int num,count=0,orginal,remainder,armstrong=0;
    printf("Enter a number : ");
    scanf("%d", &num);
    orginal = num;
    while(orginal !=0){
        orginal /= 10;
        ++count;
    }
    
    orginal = num;
    while(orginal !=0){
        remainder = orginal%10;
        armstrong = pow(remainder, count)+ armstrong;
        orginal =orginal/10;
    }
    printf("%d", armstrong);
    if(num == armstrong){
        printf("The given number is armstrong");
    }
    else{
        printf("The given number is not armstrong");
    }
}