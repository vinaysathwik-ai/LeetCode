bool isPalindrome(int x) {
    int a=x,rem;
    long int temp=0;
    while(x>0)
    {
        rem=x%10;
        temp=temp*10+rem;
        x=x/10;
    }
    if(temp==a)
    return true;
    else
    return false;
}