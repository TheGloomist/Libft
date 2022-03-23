int     ft_isprint(int c)
{
    if (c >= ' ' && c <= '˜')
        return (1);
    else
        return (0);    
}