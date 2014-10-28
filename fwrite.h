size_t fwrite(
	const void * restrict ptr, // data to be written
	size_t size, //size in bytes of chunks to be writted
	size_t nmemb, FILE * restrict fp); //file to be written to

size_t fread(
	const void * restrict ptr, // data to be read
	size_t size, //size in bytes of chunks to be writted
	size_t nmemb, FILE * restrict fp); //file to be read from

//fwrite - writes data from an array into a file
//fread - reads data from a file into an array