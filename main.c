
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
*char    ft_strchr(const char *s, int c);

int main(void)
{
	
} 


//         ft_strchr //
/* int main(void)
{
	
}
 */
//        ft_strrchr //
/* int main(void)
{
	
} */

//        ft_ strncmp //
/* int main (void)
{
    char str1[20];
   char str2[20];

   strcpy(str2, "hello");
   strcpy(str1, "WORLD");
   int result = ft_strncmp(str1, str2, 5);
   printf("%d", result);
    return 0;
} */

//       ft_memset //
/* int main()
{
  char *str;
  str = "Hello World";

  printf("%s", memset(str, "/", 7));
  return(0);
} */

//      ft_bzero //
/* int main(void)
{

}
 */
//      ft_memcpy //
/* int main()
{
   char csrc[20] = "lalalaohla";
   char cdest[100];
   ft_memcpy(cdest, csrc, strlen(csrc)+1);
   printf("Copied string is %s", cdest);
return 0;
} */


//      ft_memmove //
/* int main(void)
{


} */



//      ft_memchr//
/* int main(void)
{

	
}  */