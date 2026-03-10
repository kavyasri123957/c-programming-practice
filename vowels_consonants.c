#include<stdio.h>
int main()
{
    char word[100];
    int vowel_count=0;
    int consonant_count=0;
    printf("enter the word from the user:");
    scanf("%s",word);
    int i=0;
    while(word[i] != '\0'){
        if(word[i]=='a'|| word[i]=='e'||
            word[i]=='i'||word[i]=='o'||word[i]=='u'||
            word[i]=='A'||word[i]=='E'||word[i]=='I'||
    word[i]=='O'||word[i]=='U'){
        vowel_count=vowel_count+1;

    }
    else{
        consonant_count=consonant_count+1;
    }
    i=i+1;
}
printf("vowel count %d and the consonant count %d",vowel_count,consonant_count);

return 0;
}
