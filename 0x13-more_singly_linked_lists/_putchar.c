#include <unistd.h>
/**
 *_putchar - writes a character to std output
 *@c: character to be written
 *Return: 1 on success, -1 if error and set errno 
 */
int _putchar(char c)
{
  return (write(1, &c, 1));  
}
