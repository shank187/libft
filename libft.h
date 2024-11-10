#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>
#include <libc.h>

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t ft_strlen(char *s);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
int ft_isalnum(unsigned char c);
int ft_isalpha(unsigned char c);
int ft_isascii(int c);
int ft_isdigit(unsigned char c);
int ft_isprint(unsigned char c);
int ft_toupper(unsigned char c);
int ft_tolower(unsigned char c);
int atoi(const char *str);
int ft_memcmp(const void *s1, const void *s2, size_t n);
int ft_strncmp(const char *s1, const char *s2 ,size_t n);
void *ft_memchr(const void *s, int c, size_t n);
void *ft_memcpy(void* dst, const void*  src, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memset(void *b, int c, size_t len);
char *ft_strchr(const char *s, int c);
char  *ft_strrchr(const char *s, int c);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
void *ft_calloc(size_t count, size_t size);
char *ft_strdup(const char *s1);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);

#endif