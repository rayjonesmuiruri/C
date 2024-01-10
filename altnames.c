#include <stdio.h>
#include <inttypes.h>
int main(void) 
{
	int16_t me16; //me16 is a 16-bit signed variable  
	//c99 provides some string macros to display portable types	
	me16 = 4593;
	printf("First assume int16_t is short: ");
	printf("me16 = %d\n", me16);
	printf("Next, let's not make any assumptions.\n");
	printf("Instead, use a \"macro\" from inttypes.h: ");
	//PRId16 is a string macro for printing the portable type int16_t
	printf("me16 = %" PRId16 "\n",me16);
	
	return 0;


}
