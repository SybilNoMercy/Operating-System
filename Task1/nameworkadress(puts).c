#include <stdio.h>
int main(void)
{
char info[100];
printf("Enter your name, workplace, adress :\n");
fgets(info, 100, stdin);
printf("Your info:");
puts(info);
return 0;
}
