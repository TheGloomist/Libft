#ifndef LIBFT_H
# define LIBFT_H

typedef struct  s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;

void	ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);



void	ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);
#endif