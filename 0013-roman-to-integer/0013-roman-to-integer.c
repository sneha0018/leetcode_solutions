#include<stdio.h>
#include<string.h>
 int romanToInt(char * s)
 {
    int i;
    int total=0;
    int prevalue=0;
    int currentvalue=0;
    for(i=strlen(s)-1;i>=0;i--){
        switch(s[i]){
            
            case 'I':
            currentvalue = 1;
            break;
            case 'V':
            currentvalue = 5;
            break;
            case 'X':
            currentvalue = 10;
            break;
            case 'L':
            currentvalue = 50;
            break;
            case 'C':
            currentvalue = 100;
            break;
            case 'D':
            currentvalue = 500;
            break;
            case 'M':
            currentvalue =1000;
            break;
            
        }
        if(currentvalue<prevalue){
        total-=currentvalue;
        }
        else
       { total+=currentvalue;
       }
       prevalue=currentvalue;
    }
    return total;

 }
 int my_main()
 {
    char roman[20];
    int result= romanToInt(roman);
    printf("%d",result);
    return 0;
 }