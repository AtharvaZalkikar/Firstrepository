/*conversion of Fahrenheit into Celcius*/

#include <stdio.h>
int main(void)
{
  int fahrenheit;
  int celcius;
    
	printf("Fahrenheit =");
	scanf("%d",&fahrenheit);
	celcius =(fahrenheit-32)/1.8; 
	printf("celcius=%d",celcius);
	return 0;
}

