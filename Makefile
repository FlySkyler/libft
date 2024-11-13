# Nom du compilateur et options
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Nom de la bibliothèque
NAME = libft.a

# Fichiers sources
SRCS = ft_isalpha.c \
       ft_isdigit.c \
       ft_isascii.c \
       ft_isprint.c \
       ft_strlen.c \
       ft_memset.c \
       ft_bzero.c \
       ft_memcpy.c \
       ft_memmove.c \
       ft_strlcpy.c \
       ft_strlcat.c \
       ft_toupper.c \
       ft_tolower.c \
       ft_strchr.c \
       ft_strrchr.c \
       ft_strncmp.c \
       ft_memchr.c \
       ft_atoi.c \
       ft_memcmp.c \
       ft_strnstr.c \
       ft_strdup.c \
       ft_substr.c \
       ft_strjoin.c \
       ft_calloc.c \
       ft_isalnum.c \
       ft_itoa.c \
       ft_strtrim.c \
       ft_putnbr_fd.c \
       ft_putchar_fd.c \
       ft_putstr_fd.c \
       ft_strtrim.c \
       ft_putendl_fd.c \
       ft_split.c \
       
# Fichiers objets
OBJS = $(SRCS:.c=.o)

# Règle par défaut
all: $(NAME)

# Création de la bibliothèque
$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

# Compilation des fichiers objets
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Nettoyage des fichiers objets
clean:
	rm -f $(OBJS)

# Nettoyage complet
fclean: clean
	rm -f $(NAME)

# Recompilation complète
re: fclean all