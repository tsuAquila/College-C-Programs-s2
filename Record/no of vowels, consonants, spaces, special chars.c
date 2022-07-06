#include <stdio.h>
#include <conio.h>

void main()
{
    char a[50];
    int v=0, c=0, s=0, sc=0, n=0;
    
    printf("Enter the string: ");
    gets(a);
    
    int i = 0;
    while (a[i] != '\0')
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' ||
            a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
        {
            v++;
        }
        else if ((a[i] > 'A' && a[i] <= 'Z') || (a[i] > 'a' && a[i] <= 'z'))
        {
            c++;
        }
        else if (a[i] == ' ')
        {
            s++;
        }
        else if (a[i] == '1' || a[i] == '2' || a[i] == '3' || a[i] == '4' || a[i] == '5' ||
                 a[i] == '6' || a[i] == '7' || a[i] == '8' || a[i] == '9' || a[i] == '0')
        {
            n++;
        }
        else
        {
            sc++;
        }
    }

    printf("There are %d vowel/vowels.\n", v);
    printf("There are %d consonant/consonants.\n", c);
    printf("There are %d numerical character/characters.\n", n);
    printf("There are %d space/spaces.\n", s);
    printf("There are %d other character/characters.", sc);
}