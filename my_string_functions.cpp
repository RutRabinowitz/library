#include "stdio.h"
#include "stdlib.h"
#include "my_string_functions.h"
size_t my_strlen(const char *string){
	const char *ptr = string;
	while (*ptr)
	{
		ptr++;
	
	}
return ((size_t)(ptr-string));
}
void my_strcpy(char *dst,const char *src){
	char *cpy = dst;
	while(*src){
		*cpy = *src;
		cpy++;
		src++;
	}
	*cpy = '\0';
}
int my_strcmp(const char *str1, const char *str2){
	while(*str1 && *str2){
		if(*str1 != *str2)
			return 1;
		str2++;
		str1++;
	}		
 	if(*str2)
		return -1;
	return 0;
}
char *my_strcat(char *dest, const char *src){
	while(*dest)
		dest++;
	while(*src){
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return(dest);	
}
/*void* my_memcpy ( void * destination, const void * source, size_t num ){
	char *cpy = destination;
	const char *tmp_src = source;
	size_t i;
	for(i=0; i<=num; i++){
		*((char*)cpy) = *(tmp_src);
		cpy++;
		tmp_src++;
	}
	*cpy = '\0';
	return(destination);
}*/
