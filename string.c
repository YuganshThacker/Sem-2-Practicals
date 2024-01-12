#include<stdio.h>
int main()
{
void printString(char arr[]);
 int countLength(char arr[]);
 int main() {
     char str[100];
     char ch;
     int i;
    while(ch != '\n') {
        scanf("%c", ch);
        str[i] = ch;
         i++;
         puts(str);
     }
    str[i] = '\0';
 }
return 0;
}
