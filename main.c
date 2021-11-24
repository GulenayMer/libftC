
#include <stdlib.h>
#include "libft.h"

//            isaplha  //
/* int    ft_isalpha(int c);
 int main(void)
 {
    int c;
    c = 'C';
    printf("%d\n",ft_isalpha(c));

   int d;
    d = '+';
   printf("%d\n",ft_isalpha(d));

   int e;
    e = 1;
   printf("%d\n",ft_isalpha(e));
    return(0);
 }  */

//           isdigit  //
/* int    ft_isdigit(int c);
 int main(void)
{
 	int c;
    c = 'a';
    printf("%d\n", ft_isdigit(c));

	int d;
    d = '0';
    printf("%d\n", ft_isdigit(d));

    int e;
    e = 1;
    printf("%d\n", ft_isdigit(e));
    return(0);
} */
 

//           isalnum  //
 /* int    ft_isalnum(int c);

 int main(void)
{
   int c;
   c = '+';
   printf("%d\n",ft_isalnum(c));

    int d;
    d = '0';
    printf("%d\n", ft_isalnum(d));

    int e;
    e = 1;
    printf("%d\n", ft_isalnum(e));
    
	int f;
    f = 'y';
    printf("%d\n", ft_isalnum(f));
    
 return(0);
}
 */


//          isascii  //
 /* int    ft_isascii(int c);

int main(void)
{
   int c;
   c = '+';
   printf("%d\n",ft_isascii(c));

    int d;
    d = '0';
    printf("%d\n", ft_isascii(d));

    int e;
    e = 1;
    printf("%d\n", ft_isascii(e));
    
	int f;
    f = '@';
    printf("%d\n", ft_isascii(f));
    
 return(0);
}

 */


//          isprint  //
/* int ft_isprint(int c);

int main(void)
{
int c;
   c = '+';
   printf("%d\n",ft_isprint(c));

    int d;
    d = '0';
    printf("%d\n", ft_isprint(d));

    int e;
    e = 1;
    printf("%d\n", ft_isprint(e));
} */
 
 //          toupper  //
 /* int    ft_toupper(int c);

 int main(void)
{
int c;
c = 'a';
printf("%c\n", ft_toupper(c));
} */

/* int main(void)
{
    char *str = "hello world\n";
    char ch;
 
    while (*str != 0) {
        ch = *str;
        putchar(ft_toupper(ch));
        *str++;
    }
 
    return 0;
} */

//          tolower  //
/* int    ft_tolower(int c);

 int main(void)
{
int c;
c = 'A';
printf("%c\n", ft_tolower(c));
} */ 

 /* int main(void)
{
    char *str = "HELLO WOLRD\n";
    char ch;
 
    while (*str != 0) {
        ch = *str;
        putchar(ft_tolower(ch));
        *str++;
    }
    return 0;
} */ 


//         ft_strlen //
/* size_t    ft_strlen(const char *s);

int main(void)
{
   const char *str = "HELLO WOLRD";

    printf("%zu",ft_strlen(str));
    return 0;
}  */

//         ft_strchr //
/*  char *ft_strchr(const char *s, int c);

   int main (void) 
   {
   const char str[] = "http://www.helloworld.com";
   const char ch = 'w';
   // const char ch = '?';
   char *ret;

   ret = ft_strchr(str, ch);

   printf("String after %c is - %s\n", ch, ret);
   
   return(0);
}  */

//         ft_strrchr //
/* char   *ft_strrchr(const char *s, int c); */

 /* int main(void)
{
   const char str[] = "http://www.helloworld.com";
   const char ch = '.';
   // const char ch = '?';
   char *ret;

   ret = ft_strrchr(str, ch);

   printf("String after %c is - %s\n", ch, ret);
   
   return(0);
} */


//      ft_memchr//
/* void	*ft_memchr(const void *s, int c, size_t n);

int main(void)
{
   const char str[] = "http://www.helloworld.com";
   const char ch = 'o';
   // const char ch = '?';
   char *ret;
   ret = ft_memchr(str, ch, sizeof(str));

   printf("String after %c is - %s\n", ch, ret);
   
}  */

//        ft_ strncmp //
/* #include <string.h>
int ft_strncmp(const char *s1, const char *s2, size_t n);

int main (void)
{
	char str1[20];
	char str2[20];

   strcpy(str1, "hellD");
   strcpy(str2, "WORLd");

   int result = ft_strncmp(str1, str2, 5);
   printf("%d", result);

   return(0);
} 
 */

//       ft_memcmp  //
 /* #include <string.h>
int ft_memcmp(const void *s1, const void *s2, size_t n);

int main (void)
{
	char str1[20];
	char str2[20];

   strcpy(str1, "hellD");
   strcpy(str2, "WORLd");

   int result = ft_memcmp(str1, str2, 5);
   printf("%d", result);

   return(0);
}   */


//       ft_memset //
/* void    *ft_memset(void *s, int c, size_t n);

 int main()
{
    char str[50] = "hello world, I am just a friend.";
    printf("\nBefore ft_memset(): %s\n", str);
  
    // Fill 8 characters starting from str[13] with '.'
    ft_memset(str + 13, '.', 6);
  
    printf("After ft_memset():  %s\n", str);
    return 0;
} */


//      ft_bzero //
/* void ft_bzero(void *s, size_t n);
 int main(void)
{

    char str[50] = "hello world, I am just a friend.";
    printf("\nBefore ft_memset(): %s\n", str);
  
    // Fill 8 characters starting from str[13] with '.'
    ft_bzero(str + 13, 6);
  
    printf("After ft_memset():  %s\n", str);
    return 0;
} */
 


//      ft_memcpy //
/*  #include <string.h>
void	*ft_memcpy(void *dest, const void *src, size_t n);
 int main()
{
   char csrc[20] = "lalalaohla";
   char cdest[100];
   char csrc2[20] = "lalalaohla";
   char cdest2[100];

   ft_memcpy(cdest, csrc, strlen(csrc)+1);
    memcpy(cdest2, csrc2, strlen(csrc)+1);
   printf("Copied string is %s\n", cdest);
   printf("Copied string is %s\n", cdest2);
return 0;
}   */


//      ft_memmove //

/*  #include <string.h>
void	*ft_memmove(void *dest, const void *src, size_t n);
  int main(void)
{
   char csrc[20] = "lalalaohla";
   char cdest[100];
   ft_memmove(cdest, csrc, strlen(csrc)+1);
   // memcpy(cdest, csrc, strlen(csrc)+1);
   printf("Copied string is %s", cdest);
return 0;
} */


//   ft_strlcpy  //
/* #include <string.h>
size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
int main (void)
 {
   char src[34], dest[2];

   strcpy(src,  "mervemerve"); 
   strcpy(dest, ""); 

   ft_strlcpy(dest, src, 4);

   printf("Final destination string : %s/n", dest);
   
   return(0);
}
 */


//   ft_strlcat //
/* #include <string.h>

size_t ft_strlcat(char *dst, const char *src, size_t size);

int main () {
   char src[50], dest[50];

   strcpy(src,  "This is source");
   strcpy(dest, "This is destination");

   ft_strlcat(dest, src, 15);

   printf("Final destination string : %s", dest);
   
   return(0);
}
 */


//   ft_strnstr  //

/* #include <string.h>
char *ft_strnstr(const char *big, const char *little, size_t len);

int main (void) {
   char big[50], little[50];

   strcpy(big,  "bar bar bear");
   strcpy(little, "bar");
   char *result;
   // strcpy(dest, "no"); 
	result = ft_strnstr(big, little, 3);

   printf("Final destination string : %s", result);
   
   return(0);
} */



//   ft_atoi    //
/* int		ft_atoi(const char *nptr);

int main(void)
{
	char str1[] = "-9876";
	char str2[] = "9876";
	int result1 = ft_atoi(str1);
	printf("%d\n", result1);

	int result2 = ft_atoi(str2);
	printf("%d\n", result2);
	return(0);
}
 */

//     ft_calloc  //
/* void *ft_calloc(size_t nmem, size_t size);

int main(void)
{
	char *p;

	p = ft_calloc(1, sizeof(char));

	if(p != NULL)
	{
		printf("Memory created successfully\n");
	}
	return(0);
} */


//    ft_strdup  //
/* char *ft_strdup(const char *s);
int main(void)
{
	char *s = "Hello";
	char *p;

	p = ft_strdup(s);

	if(p != NULL)
	{
		printf("Memory created successfully, %s\n", p);
	}
	return(0);
} */