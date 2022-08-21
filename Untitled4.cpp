#include <stdio.h>
int main(){
         char c;
         printf("Enter X to display uppercase letters.\n");
         printf("Enter y to display lowercase letters.\n");
         scanf("%c",&c);
         if (c=='X' || c=='x')
           for(c='A';c<='Z';c++)
           printf("%c",c);
        else if (c=='Y' || c=='y')
           for(c='a';c<='z';c++)
             printf("%c",c);
        else
             printf("invalid ");
}
