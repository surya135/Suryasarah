#include <stdio.h>
#include <conio.h>
  
int main(){
    char c;
    printf("Enter the Character: ");
    scanf("%c", &c);
    switch(c)
    {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c    Vowel \n", c);
            break;
        default:
            printf("%c  Consonant\n", c);
    }    
    getch();
    return 0;
}
