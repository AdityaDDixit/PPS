#include<stdio.h>
void main()

{
char ch;
    
    printf("enter the character:"  );
    scanf("%c",&ch);
    
    int ask ;
    ask=(int)ch;
    
    if (ask >=32 && ask<=47 || ask>=58 && ask<=64 || ask>=65 && ask<=90 || ask>=123 && ask<=127)
    {
        printf("%c is special symbol" , ch);
      
    }
    if (ask>=48 && ask<=57 )
    {
        printf("%c is number" , ch ); 
        
    }
    if (ask>=65 && ask<=90 )
    {
        printf("%c is uppercase alphabet ", ch );
    }
    if (ask>=123 && ask<=127)
    {
        printf("%c is lowercase alphabet ", ch );
    }
}


