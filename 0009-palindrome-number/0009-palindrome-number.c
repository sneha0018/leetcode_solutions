#include<stdio.h>
#include<limits.h>
int isPalindrome(int num)
{
    int x=num,rev=0;
    if(x<0)
    {
        printf("false");
        return 0;
    }
    while(x!=0){
        if(rev>(INT_MAX/10)||rev<(INT_MIN/10)){
            return 0;
        }
        rev=rev*10+(x%10);
        x=x/10;
    }
    return num == rev;
}
int my_main()
{
    int num;
    printf("Ener a number");
    scanf("%d",&num);
    if(isPalindrome(num))
    {
        printf("x is true");
    }
    else{
    printf("x is false");
    }
    return 0;
}