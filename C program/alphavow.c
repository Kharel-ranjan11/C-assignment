
#include <stdio.h>

void  main()
{
    char ch;
    printf("Enter any alphabet: ");
    scanf("%c", &ch);
if ((ch >= '0' && ch <= '9') || (ch == '+' || ch == '-' || ch == '*' || ch =='/' || ch == '%' || ch == '#' || ch == '!' || ch == '@'))  
{
    printf("Please Character Only.");
}
else{
    
   switch(ch)
    {
        case 'a': 
            printf("Vowel");
            break;
        case 'e': 
            printf("Vowel");
            break;
        case 'i': 
            printf("Vowel");
            break;
        case 'o': 
            printf("Vowel");
            break;
        case 'u': 
            printf("Vowel");
            break;
        case 'A': 
            printf("Vowel");
            break;
        case 'E': 
            printf("Vowel");
            break;
        case 'I': 
            printf("Vowel");
            break;
        case 'O': 
            printf("Vowel");
            break;
        case 'U': 
            printf("Vowel");
            break;
        default: 
            printf("Consonant");
    }
}
}

