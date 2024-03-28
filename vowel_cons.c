#include<stdio.h>

void main()
{
    char chr;
    char vowel[6] = {'a','e','i','o','u'};
    int isVowel = 0;
    printf("Enter here any Character to Check Vowel or Consonent: ");
    chr = getchar();
    printf("Given String (%c) is %s",chr,(chr=='a'||chr=='e'||chr=='i'||chr=='o'||chr=='u')?"Vowel":"Consonent");
}