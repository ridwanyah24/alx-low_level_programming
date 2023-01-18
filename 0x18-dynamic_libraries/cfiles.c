#include <stdio.h>
#include <unistd.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int mod(int a, int b);
int div(int a, int b);

/**
  *add - adds two integers
  *@a: the first integer
  *@b: the second integer
  *Return: the result
  */
int add(int a, int b)
{
	return(a+b);
}
/**
  *sub - subtracts two integers
  *@a: integer a
  *@b: integer b
  *Return: a - b
  */

int sub(int a, int b)
{
	return(a-b);
}
/**
  *mul - multiplies two integers
  *@a: integer a
  *@b: integer b
  *Return: a *b
  */

int mul(int a, int b)
{
	return (a*b);
}
/**
  *div - divides two integer
  *@a: integer a
  *@b: integer b
  *Return: a/b
  */

int div(int a, int b)
{
	return (a/b);
}
/**
  *mod - returns a % b
  *@a: integer a
  *@b: integer b
  *Return: the result
  */

int mod(int a, int b)
{
	return (a % b);
}

