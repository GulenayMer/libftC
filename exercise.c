#include <stdio.h>

// /*---------- ---------isalpha---------- */
//  int ft_isalpha(int check)
//  {	
// return ((check >= 'a' && check <= 'z') || (check >= 'A' &&  check <= 'Z'));
//  }


// // int main()
// // {
// //     int c;
// //     c = 'c';
// //     printf("is alpha %d",ft_isalpha(c));
// //     return(0);
// // }


// /*---------- ---------isdigit---------- */
//  int ft_isdigit(int check)
//  {
//     return (check >= '0' && check <= '9'); 

//  }

// int main()
// {
//     int c;
//     c = 'a';
//     printf("%d",ft_isdigit(c));
//     return(0);
// }

// int ft_isalnum(int check)
// {
//   return(ft_isdigit || ft_isalpha);

// }

// int main()
// {
//     int c;
//     c = '+';
//     printf("%d",ft_isalnum(c));
//     return(0);
// }




/* 7) isprint func- calculate the lenght of a string*/
//The strlen() function calculates the length of the string 
//pointed to by s, excluding the terminating null byte ('\0')

// size_t is unsigned- cannot represent negative values;
//strlen() returns a size_t because the length of a string has to be at least 0. 
// size_t ft_strlen(const char *s)
// {
//   int length;
//   length = 0;
//     while(*s!='\0')
//     {
//       length++;
//     }

// 	return(length);

// }


// 
int main()
{
  char *str;
  str = "Hello World";

  printf("%s", memset(str, "/", 7));
  return(0);

}



/* 13) memcpy() -- copies n bytes from memory area src to
       memory area dest.  The memory areas must not overlap
       the functions returns a pointer to dest */
void *ft_memcpy(void *dest, const void *src, size_t n)
{
   unsigned char *p1 = dest;
   unsigned const char *p2 = src;
  
   size_t i=0;
   while(i < n)
  {
    // p1[i] = p2[i];
    *(p1+i) = *(p2+i);
    i++;   
  }
  return(*p1);
}

int main()
{
   char csrc[20] = "lalalaohla";
   char cdest[100];
   ft_memcpy(cdest, csrc, strlen(csrc)+1);
   printf("Copied string is %s", cdest);
return 0;
}

///////

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
  int result;
  size_t i;
  i = 0;
   while(i < n)
   {
     if(*s1 == *s2)
    {
       result = 0;
    }
    else if(*s1 < *s2)
    {
      result = -1;
    }
    else
    {
      result = 1;
    }
    i++;
    *s1++;
    *s2++;
  
   }
     return result;
}

int main (void)
{
    char str1[20];
   char str2[20];

   strcpy(str2, "hello");
   strcpy(str1, "WORLD");
   int result = ft_strncmp(str1, str2, 5);
   printf("%d", result);
    return 0;
}




