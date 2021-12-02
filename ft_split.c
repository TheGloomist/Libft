#include <stdio.h>
#include <stdlib.h>

// function that counts the number of words
static  int     word_count(const char *s, char c)
{
    int    i;
    int    w_count;

    i = 0;
    w_count = 0;
    while(s[i] == c)
        i++;
    while(s[i])
    {
        while(s[i] && s[i] != c)
            i++;
        w_count++;
        while(s[i] == c)
            i++;
    }
    return(w_count);
}

// function that counts the number of letters
static int      let_count(const char *s, char c)
{
    int     i;
    int     let_count;
    
    i = 0;
    let_count = 0;
    while(s[i])
    {
        while(s[i] && s[i] != c)
        {
            i++;
            let_count++;
        }
        while(s[i] == c)
            i++;
    }
    return(let_count);
}

char	**ft_split(char const *s, char c)
{
    char    **str_array;
    int     w_count;
    int     i;

    w_count = word_count(s,c);
    str_array = malloc((w_count + 1) * sizeof(char*));
    i = 0;



    
    
    str_array[i] = '\0';
    return(str_array);
}

int main(void)
{
    printf("%d\n", ft_split("one two three", ' '));
    return(0);
}