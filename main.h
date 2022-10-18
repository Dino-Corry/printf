#ifndef PRINT_F_
#define PRINT_F_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <stdio.h>

/**
 * struct param_format - It contains format to get when a format specifier is passed to _printf()
 * @plus_format: format for the '+' character
 * @space_format: format for the ' ' character
 * @hash_format: format for the '#' character
 * @hash_format: format for the '#' character
 */

 typedef struct format
 {
     int plus_format;
     int space_format;
     int hash_format;
 } param_func;

 /**
  * struct func_convert - this gets structure for the symbols and function
  * @type: operator symbols
  * @func: the associated function
  */

  typedef struct func_convert
  {
      char type;
      int (*func)(va_list list, param_func *func);
  } f_convert;


  /* function prototyes */
int _printf(const char *format, ...);
int (*func_parse(char c))(va_list, param_func *);
int print_chars(va_list list, param_func *func);
int print_strings(va_list list, param_func *func);
int print_percentage(va_list list, param_func *func);
int print_integer(va_list list, param_func *func);
int print_binary(va_list list, param_func *func);
int print_unsigned_integer(va_list list, param_func *func);
int print_heX(va_list list, param_func *func);
int print_hexa(va_list list, param_func *func);
int print_octal(va_list list, param_func *func);
int print_stringUpper(va_list list, param_func *func);
int print_address(va_list list, param_func *func);
int print_rot13(va_list list, param_func *func);

/*putchar function*/
int _putchar(char c);
int _puts(char *str);

/* Utils */
int get_flags(char s, param_func *func);
int get_digits(int i);
void print_num(int i);
unsigned int get_base_len(unsigned int num, unsigned int base);
void get_write_base(char *str);
char *reverse_string(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);
char *convert_num(unsigned long int num, int base, int lowercase);

#endif
