#include <stdio.h>
#include "main.h"
/**
 * _abs - Function to compute absoulute value of intenger
 *
 * @c: complie the programm
 * Return: 0 success
 */
int _abs(int i)
{
	if (i <= 0)
	{
		return (i * -1);
	}
	else
	{
		return (i);
	}
}
