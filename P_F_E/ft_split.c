/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 20:19:06 by iobba             #+#    #+#             */
/*   Updated: 2022/08/11 10:17:48 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Assignment name  : ft_split
Expected files   : ft_split.c
Allowed functions: malloc
--------------------------------------------------------------------------------
 
Write a function that takes a string, splits it into words, and returns them as
a NULL-terminated array of strings.
 
A "word" is defined as a part of a string delimited either by spaces/tabs/new
lines, or by the start/end of the string.
 
Your function must be declared as follows:
 
char    **ft_split(char *str);
------------------------------------------------*/
#include <stdlib.h>
 
int     ft_wordlen(char *str)
{
    int i = 0;
    while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        ++i;
    return (i);
}
 
char    *word_dupe(char *str)
{
    int i = 0;
    int len = ft_wordlen(str);
    char *word = malloc(sizeof(char) * (len + 1));
    word[len] = '\0';
 
    while (i < len)
    {
        word[i] = str[i];
        ++i;
    }
    return (word);
}
 
void    fill_words(char **array, char *str)
{
    int word_index = 0;
    while (*str == ' ' || *str == '\t' || *str == '\n')
        ++str;
    while (*str != '\0')
    {
        array[word_index] = word_dupe(str);
        ++word_index;
        while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
            ++str;
        while (*str == ' ' || *str == '\t' || *str == '\n')
            ++str;
    }
}
 
int     count_words(char *str)
{
    int num_words = 0;
    while (*str == ' ' || *str == '\t' || *str == '\n')
        ++str;
    while (*str != '\0')
    {
        ++num_words;
        while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
            ++str;
        while (*str == ' ' || *str == '\t' || *str == '\n')
            ++str;
    }
    return (num_words);
}
 
char    **ft_split(char *str)
{
    int     num_words;
    char    **array;
 
    num_words = count_words(str);
    array = malloc(sizeof(char *) * (num_words + 1));
    array[num_words] = 0;
 
    fill_words(array, str);
    return (array);
}
 
//-----------------------------------------------------------------
 #include <stdio.h>
 
 int      main(void)
 {
     char *test;
     test = "abc 1234abcd 7654 09876 malk &^^$FTV       *((()(&#@#$ ";
     
     char **arr = ft_split(test);
     int i = 0;
     while (arr[i] != 0)
     {
         printf("%s\n", arr[i]);
         ++i;
     }
 }
