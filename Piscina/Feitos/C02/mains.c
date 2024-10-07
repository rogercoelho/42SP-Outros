// ex00


#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main(void)
{
	char			*src_main;
	char			dest_main[100];
	unsigned int	t;

	t = 5;
	src_main = "abracadabra...";
	ft_strncpy(dest_main, src_main, t);
	printf("%s", dest_main);
}
//============================

// ex01

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main(void)
{
	char			*src_main;
	char			dest_main[100];
	unsigned int	t;

	t = 5;
	src_main = "abracadabra...";
	ft_strncpy(dest_main, src_main, t);
	printf("%s", dest_main);
}

//===================================

//ex02

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	*ptr_str;
	int		print_value;

	ptr_str = "testedefuncao";
	print_value = ft_str_is_alpha(ptr_str);
	printf("%d\n", print_value);
}

int	ft_str_is_alpha(char *str)
{
	int	returned_value;
	int	i;

	returned_value = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

//===================================

// ex03


#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	*ptr_str;
	int		return_value;

	ptr_str = "000045466";
	return_value = ft_str_is_numeric(ptr_str);
	printf("%d\n", return_value);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 48 || str[i] > 57))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

//===========================================

// ex04

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	*ptr_str;
	int		return_value;

	ptr_str = "ab-cdefghi";
	return_value = ft_str_is_lowercase(ptr_str);
	printf("%d\n", return_value);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] < 97) || (str[i] > 122))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

//===============================================

// ex05

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	*ptr_str;
	int		result;

	ptr_str = "ABCDF";
	result = ft_str_is_uppercase(ptr_str);
	printf("%d\n", result);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 41) || (str[i] > 90))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

//=================================================

// ex06

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	*ptr_str;
	int		result;

	ptr_str = "\t\n\v\f";
	result = ft_str_is_printable(ptr_str);
	printf("%d\n", result);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (0);
	}

	while (str[i] != '\0')
	{
		if ((str[i] < 32) || (str[i] > 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

//==================================================

//ex07

#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	ptr_str[] = "teste uper case";
	char	*ptr_str_return;

	ptr_str_return = ft_strupcase(ptr_str);
	printf("%s\n", ptr_str_return);
}

char	*ft_strupcase(char *str)
{
	int		i;
	char	change;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			i++;
		}
		change = str[i] - 32;
		str[i] = change;
		i++;
	}
	str[i] = '\0';
	return (str);
}

//===============================================

//ex08

#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	tolow[] = "TESTE DE LOWERCASE";
	char	*ptr_tolow;

	ptr_tolow = ft_strlowcase(tolow);
	printf("%s\n", ptr_tolow);
}

char	*ft_strlowcase(char *str)
{
	int		i;
	char	change;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			i++;
		}
		change = str[i] +32;
		str[i] = change;
		i++;
	}
	str[i] = '\0';
	return (str);
}
//=============================
