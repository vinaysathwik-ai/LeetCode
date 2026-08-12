int romanToInt(char* s) {
    int size= strlen(s);
    int num=0,temp,shad;
    for(int i=0;i<size;i++)
    {
        char ch=s[i+1];
        char c=s[i];
        switch(c)
        {
            case 'I': temp=1; break;
            case 'V': temp=5; break;
            case 'X': temp=10;break;
            case 'L': temp=50; break;
            case 'C': temp=100; break;
            case 'D': temp=500; break;
            case 'M': temp=1000; break;
        }
        if(i==size-1)
        {
            shad=0;
        }
        else{
        switch(ch)
        {
            case 'I': shad=1; break;
            case 'X': shad=10;break;
            case 'V': shad=5; break;
            case 'L': shad=50; break;
            case 'C': shad=100; break;
            case 'D': shad=500; break;
            case 'M': shad=1000; break;
            default: shad=0;
        }
        }
        if(shad>temp)
        {
            temp=shad-temp;
            i++;
        }

        num = num+temp;
    }
    return num;

}