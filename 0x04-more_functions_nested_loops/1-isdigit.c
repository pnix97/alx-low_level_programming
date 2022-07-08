#include "main.h"                                                                                                               
                                                                                                                                
/**                                                                                                                             
 * _isupper - checks if parameter is a digit.                                                                    
 * @c: input digit.                                                                                                        
 * Return: 1 if is a digit, 0 in other case                                                                     
 */                                                                                                                             
int _isupper(int c)                                                                                                             
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
