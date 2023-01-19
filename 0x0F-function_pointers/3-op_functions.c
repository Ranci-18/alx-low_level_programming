#include <stdio.h>
#include "3-calc.h"
/**
 *op_add - computes addition of two numbers
 *@a: first number
 *@b: second number
 *
 *Return: addition result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - finds the subtraction of two numbers
 *@a: first number
 *@b: second number
 *
 *Return: subtraction result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - computes multiplication of two numbers
 *@a: first number
 *@b: second number
 *
 *Return: multiplication result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - computes division of two numbers
 *@a: first number
 *@b: second number
 *
 *Return: division result
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - computes modulus
 *@a: first number
 *@b: second number
 *
 *Return: modulus
 */
int op_mod(int a, int b)
{
	return (a % b);
}
