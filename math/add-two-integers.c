int sum(int num1, int num2) {
    int sum;
    sum=num1+num2;
    if(num1<=100&&num1>=-100&&num2<=100&&num2>=-100)
    {
        return sum;
    }
    else
    {
        return printf("numbers are not in the range");
    }
}