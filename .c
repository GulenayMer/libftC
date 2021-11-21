/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   *.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 22:15:34 by mgulenay          #+#    #+#             */
/*   Updated: 2021/11/20 18:26:59 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



/* to be used in the isalpha function*/

static int   ft_isupper (int c)
{
	return(c >= 'a' && c <= 'z');
}

static int    ft_islower(int c)
{
  return ((c >= 'A' &&  c <= 'Z'));
}

/*  isalpha()- 
    checks for an character 
*/

int    ft_isalpha(int c)
{	
 return (ft_isupper(c) || ft_islower(c));
}


/* -------isdigit----------- 
checks for digit/numeric character 
*/
int    ft_isdigit(int c)
{
  return ((c>= '0' && c<= '9')); 
}

/* -------- isalnum ------ 
checks for alphanumeric character
 */
int    ft_isalnum(int c)
{
  return(ft_isdigit || ft_isalpha);
}

/* ------- isascii -----------
 checks for a valid 7 bit ascii character 
 */
int    ft_isascii(int c)
{
  return(c >= 0 && c <= 127);

}


/* -------- isprint ------------
checks for any printable character including space
*/
int ft_isprint(int c)
{
	return(c >= 32 && c <= 126);
}

/* --------- toupper ------------
 convert lowercase letters to uppercase 
 */
int    ft_toupper(int c)
{
	if(c >= 'a' && c <= 'z')
	{
      return (c - 32);
	  return(c);
	}	
}

/* --------- tolower func ----------
convert uppercase letters to lowercase 
*/
int    ft_tolower(int c)
{
	if(c >= 'A' &&  c <= 'Z')
	{
    return (c + 32);
	  return(c);
	}	
}

/* --------- strlen ------
 calculate the lenght of a string
*/
size_t    ft_strlen(const char *s)
{
  int length;
  length = 0;
  while(*s!='\0')
    {
      length++;
    }

	return(length);
}

/* ------ strchr ------
 searches for the first occurrence of the character c 
(an unsigned char) in the string pointed to by the argument str 
*/
*char    ft_strchr(const char *s, int c)
{
    if(s == NULL )
    {
      return NULL;
    }

   int slength;
   int i;
   slength = ft_strlen(s);


	  while(*s!='\0')
	 {
    *s++;
      if(*s == c)
		{    
      return((char *)s + );
                   
		}
	}
}


/* ------ strrchr()------ 
The  returns a pointer to the last occurrence
of the character c in the string s
*/
*char   ft_strrchr(const char *s, int c)
{

	return;
}


/* -------- memset() --------
 fills the first n bytes of the memory area pointed to by s with
 the constant byte c,  s is a void pointer, so we can pass any 
 type of pointer to the function 
 */
 void    *ft_memset(void *s, int c, size_t n)
 {
   
      int i;
      i = 0;
      unsigned char *p = s;
   while(*p != 0 && n > 0)
   {
       *p = c;
       p++;
       n--;
     
      return(b);
   }
 }


/* -------bzero() ------
erases the data in the n bytes of the memory starting at the 
location pointed to by s, by writing zeros (bytes containing '\0') to that area  
*/
 void ft_bzero(void *s, size_t n)
 {

    int i;
    i = 0;
    unsigned char *p = s;
    while(*p != 0 && n > 0)
   {
      *p = '0';
      p++;
      n--; 
   }

    return(b);
 }

/* --- memcpy() -------
copy block of memory -- copies n bytes from memory area src to
memory area dest.  The memory areas must not overlap
the functions returns a pointer to dest 
*/
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
   
/* ------ memmove() ----------
 move block of memory -- copies n bytes from memory area src to
memory area dest.  The memory areas may overlap: copying takes
place as though the bytes in src are first copied into a
temporary array that does not overlap src or dest, and the bytes
are then copied from the temporary array to dest. 
*/
void *ft_memmove(void *dest, const void *src, size_t n)
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


/* ------- strncmp --- 
compares the first n bytes of two strings, s1 and s2 -- 
return an integer as a result of the comparasion - 
0 if s1 == s2; a negative value if s1<s2 (ascii value of first umatched character);
 a postive value if s1>s2 (ascii value of first unmached character)
  */
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
  int result;
  size_t i;
  i = 0;
   while(i < n)
   {
     if(*s1 == *s2)
    {
       result == 0;
    }
    else if(*s1 < *s2)
    {
      result < 0;
    }
    else
    {
      result > 0;
    }
     i++;
    *s1++;
    *s2++;
    return result;
   }
   
}


/* -------  memchr ------------- 
scans the initial n bytes of the memory area pointed by s for the first 
instance of c. Both c and the bytes of the memory area pointed to by s are interpreted as
unsigned char
-- returns a pointer to the matching byte or NULL if the character does not occur
in the given memory area
*/
void *ft_memchr(const void *s, int c, size_t n)
{
unsigned char *p1 = s;
size_t i;
i = 0;
while(i < n)
{
  if(p1 != NULL && *p1 == c)
{

*p1++;
return *p1;

}
else
{
  return NULL;
}
}
}

/* ------memcmp ----------
 compare memory areas- compares the first n bytes (each interpreted as unsigned char)
of the memory areas s1 and s2
returns an integer as a result of the first n bytes of s1 greater,less or equal to/than
the first n bytes of s2 
*/
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
  unsigned const char *p1 = s1;
  unsigned const char *p2 = s2;

  int result;
  size_t i;
  i = 0;
   while(i < n)
   {
     if(*p1 == *p2)
    {
       result == 0;
    }
    else if(*p1 < *p2)
    {
      result < 0;
    }
    else
    {
      result > 0;
    }
     i++;
    *p1++;
    *p2++;
    return result;
   }
}


/* */