#include<stdio.h>
int main(){
    int a,b;

    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);

    if(a>b){
        printf("%d is the greater number than %d",a,b);
    }else if(b>a){
        printf("%d is the greater number than %d",b,a);
    }
    else{
        printf("Both numbers are equal",a,b);
    }
    return 0;

}
