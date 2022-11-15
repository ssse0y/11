#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char *proverb="All that glisters is not good.";
void set_pointer(char **q);
void setPointer(char **q)
{
	
	*q=proverb;
	
}

int main(void)
{
	char *p="zzz";
	setPointer(&p); //zzz가 복사본으로 감  
	printf("%s \n", p); 
	return 0;
}
