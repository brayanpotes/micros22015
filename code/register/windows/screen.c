#include "screen.h"

void showRegisters(uint32_t *registers, size_t len)
{
	int i;

	if(!registers)
		return;
	
	for(i=0; i<len; i++)
	{	
		if( (i % 4) == 0 )
			printf("\n");
		printf(BOLDGREEN "R%-2d:" BOLDWHITE "%.8X\t", i, registers[i]);
	}
	printf("\n");
	printf(RESET);

	return;
}
