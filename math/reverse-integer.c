#include<limits.h>
int reverse(long long int x){
    long long int rem,temp=0,s=0;
    if(x<0){
    x=x*-1;
    s=1;
    }
    while(x>0){
        if (temp > INT_MAX / 10 || temp < INT_MIN / 10) {
            return 0;
        }

        rem=x%10;
        temp=temp*10+rem;
        x=x/10;
    }
    if(s){
        temp=temp*-1;
    }
    return temp;
}