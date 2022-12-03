#include "main.h"
/**
 * get_endianness - check whether it is a little or big endian
 *
 * Return: 1 if little endian o otherwise
 **/
int get_endianness(void)
{
int i = 1;
char *checktendian;

checktendian = (char *)&i;
if (*checktendian == 1)
return (1);
return (0);
}
