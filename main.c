
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
} */
 


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
/*  size_t    ft_strlen(const char *s);

int main(void)
{
   const char *str = " HELLO WOLRD, how are you?";

    printf("%zu\n",ft_strlen(str));
    return 0;
}   */

//         ft_strchr //
/*  char *ft_strchr(const char *s, int c);

   int main (void) 
   {
   const char str[] = "http://www.helloworld.com";
   const char ch = 'w';
   //const char ch = '\0';
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
/*  #include <string.h>
int ft_strncmp(const char *s1, const char *s2, size_t n);

int main (void)
{
	char str1[20];
	char str2[20];

   strcpy(str1, "Hello");
   strcpy(str2, "hello");

   int result = ft_strncmp(str1, str2, 5);
    if (result < 0) 
	{
     	printf("-1\n");
    } 
	else if (result > 0) {
		printf("1\n");
	} else {
		printf("0\n");
	}
   return(0);
}  */


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
   	if(result > 0) 
   	{
		printf("1\n");
    } 
	else if(result < 0) {
       printf("-1\n");
   } 
   	else 
	{
    	  printf("0\n");
    }

   return(0);
}  */


//       ft_memset //
/*  void    *ft_memset(void *s, int c, size_t n);

 int main()
{
    char str[50] = "hello world, I am just a friend.";
    printf("\nBefore ft_memset(): %s\n", str);
  int c = '1';
    // Fill 6 characters starting from str[13] with '.'
    ft_memset(str + 13, a, 6);
  
    printf("After ft_memset():  %s\n", str);
    return 0;
} 
 */

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
   char src1[20] = "lalalaohla";
   char dest1[100] = "no";
   char src2[20] = "lalalaohla";
   char dest2[100] = "no";

	ft_memcpy(dest1, src1, sizeof(src1));
	printf("Copied string is %s\n", dest1);
    memcpy(dest2, src2, sizeof(src2));
   printf("Copied string is %s\n", dest2);
return 0;
}   */


//      ft_memmove //

 /* #include <string.h>
void	*ft_memmove(void *dest, const void *src, size_t n);
  int main(void)
{
   char src1[20] = "lalalaohla";
   char dest1[100] = "No";
	char src2[20] = "lalalaohla";
   char dest2[100] = "No";

   ft_memmove(dest1, src1, 5);
   printf("Copied string is %s\n", dest1);

   memcpy(dest2, src2, 5);
   printf("Copied string is %s\n", dest2);
return 0;
} 
 */

//   ft_strlcpy  //
/*  #include <string.h>
 #include <stdio.h>
size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
int main (void)
 {
   char src[20] = "Hello";
   char dest[10];
   //char dest2[10];

   printf("Final destination string : %zu %s/n", ft_strlcpy(dest, src, 4), dest);
   //printf("Final destination string :%u %s/n",  strncpy(dest2, src, 4), dest2);
   return(0);
}
  */


//   ft_strlcat //
/*  #include <string.h>

size_t		ft_strlcat(char *dst, const char *src, size_t size);

int main (void) 
{
  	char src[10] = "Hello";
	char dest[10] = "World";
    char dest2[10] = "World";

   	printf("Final destination string : %zu %s\n", ft_strlcat(dest, src, 5), dest);
   printf("Final destination string :%u %s\n",  strlcat(dest2, src, 5), dest2);
   	return(0);
} */


//   ft_strnstr  //
/* char *ft_strnstr(const char *big, const char *little, size_t len);

int main (void) {

    // const char big[20] = "bar bar bear";
    //const char little[10] = "bar";
	//const char little[10] = "aaaa";
	//const char little[10] = "";
	const char big[30] = "lorem ipsum dolor sit amet";
	const char little[10] = "loremm";
    char *result;

	result = ft_strnstr(big, little, 15);
	printf("The substring is: %s\n", result);
   
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


// -------------------------2.Part --------------------//
//   ft_substr  //
/* 
 char *ft_substr(char const *s, unsigned int start, size_t len);

int main(void)
{
   	// char s[255] = "Hello, how are you?";
	//char s[30] = "lorem ipsum dolor sit amet";
   	char s[255] = "";
   	//int start = 2;
    //int length = 5;

	char *result = ft_substr(s, 6, 10);
	printf("Substring is %s\n", result);
	return 0;
}  */


//  -- ft_strjoin  ----- //
/*  char	*ft_strjoin(char const *s1, char const *s2);
int main()
{
	//char s1[20] = "Look Here!";
	 char s1[20] = "lorem ipsum";

	// char s1[20] = "";
	// char s2[20] = " Unimaginable";
	char s2[20] = "dolor sit amet";
	//char s1[20] = "";
	
	char *result = ft_strjoin(s1, s2);
	printf("%s\n", result);

	return 0;
}  */

//  -- ft_strtrim.c -- //
/*   char	*ft_strtrim(char const *s1, char const *set);
int main(void)
{
	//char s1[20] = "??Hello?";
	//char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
	char s1[] = "lorem ipsum dolor sit amet";
	char set[20] = " ";
    char *result;
	result = ft_strtrim(s1, set);
	printf("%s", result);
}  */


// -- ft_itoa -- //
/* 
int main(void)
{
	int a = -9876;
	int b = 9876;
	char *result1 = ft_itoa(a);
	printf("%s\n", result1);

	char *result2 = ft_itoa(b);
	printf("%s\n", result2);
	return(0);
} */

//   -- ft_strmapi.c  //
/* char my_function(unsigned int i, char c)
{

printf("index = %d and %c\n", i, c);
return c;
}

int main()
 {
	char str[10] = "hello!";
 	printf("%s\n", str);
 	char *result = ft_strmapi(str, my_function);
 	printf("The result is %s\n", result);
return 0;
 } */


// -- ft_striteri.c  //
/* void my_function(unsigned int i, char *s)
{
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
printf("index = %d and %s\n", i, s);
}

int main()
 {
	char str[10] = "hello!";
 	printf("%s\n", str);
 	ft_striteri(str, my_function);
 	printf("The result is %s\n", str);
return 0;
 } */

// --- ft_putchar_fd -- 
/* int main (void)
{
	char a = 'H';
	ft_putchar_fd(a, 1);
	return(0);
} */

 // ---ft_putstr_fd
/*  int main (void)
{
	char s[20] = "Hello!";
	ft_putstr_fd(s, 1);
	return(0);
} */

//   ft_putendl_fd.c  //
/* int main (void)
{
	char s[20] = "Hello!";
	ft_putendl_fd(s, 1);
	return(0);
}
 */
//


// 

/* void	ft_putnbr_fd(int n, int fd);
int main (void)
{
	int c = -2147483647;
	ft_putnbr_fd(c, 1);
	return(0);
} */

// itoa
/* char	*ft_itoa(int n);
 int main (void)
{
	//int n = -2147483647;
	//int n = -2147483647;
	//int n = -2147483647;
	int n = -543000;
	char *result;
	result = ft_itoa(n);
	printf("return value %s\n", result);
	return (0);
}  */

// 
/*  char	**ft_split(char const *s, char c);
int main(void)
{
	char **s;
	int i = 0;
	char c = ' ';
	//s = ft_split("Test Tested Testing", c);
	s = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", c);

	while (i < 12)
	{
	printf("%s\n", s[i]);
	i++;
	}
	return (0);
} */


///  ls_new  
/* t_list	*ft_lstnew(void *content);

int main(void)
{
	char content[20] = "CONTENT.";
	t_list *result = ft_lstnew((void *)content);
	printf("The content is %s", (char *)result->content);
	return 0;
} */


//  lst_front

/* int main()
{
	t_list *my_tlist = (t_list *)malloc(sizeof(t_list) * 5);
	char content[20] = "CONTENT.";
 	t_list *linked_list_item1 = ft_lstnew((void *)content);
	char content2[20] = "CONTENT2.";
	t_list *linked_list_item2 = ft_lstnew((void *)content2);
	ft_lstadd_front(&my_tlist, linked_list_item1);
 	ft_lstadd_front(&my_tlist, linked_list_item2);
 	printf("The result is %s\n", (char *)my_tlist[0].content);
 	printf("The result is %s\n", (char *)my_tlist[0].next->content);
 	return 0;
 } */


// lst_size
 int main(void)
{
	char content[20] = "CONTENT.";
	t_list *result = ft_lstsize((void *)content);
	ft_lstsize(&result);
	printf("The size is %p", result->content);
return 0;
}