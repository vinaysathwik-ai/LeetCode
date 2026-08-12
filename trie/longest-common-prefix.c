char* longestCommonPrefix(char** strs, int strsSize) {
    char *prefix;
    if(strsSize==0)
    return "";
    prefix=(char*)malloc(200*sizeof(char));
    int i=0;
    while(strs[0][i]!='\0'){
        char current=strs[0][i];
        for(int j=1;j<strsSize;j++){
            if(strs[j][i]!=current){
                prefix[i]='\0';
                return prefix;
            }
        }
        prefix[i]=current;
        i++;
    }
    prefix[i]='\0';
    return prefix;
}