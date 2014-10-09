#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int    nfloats=174;
	float *dyn_array; /* Pointer  to dynamically allocated array */
	 
	dyn_array = (float *)  malloc( nfloats *sizeof(float) ); 
	if ( dyn_array )
	{
	/* Now use dynamic array. */
	 
	   for (int i=0; i<nfloats; ++i)
	   dyn_array[i] = 0.0;
	   free( dyn_array );   /* Return array to heap */
	}
	else
	/* Dynamic allocation error. */ 
}