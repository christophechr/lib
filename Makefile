##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## first makefile
##

SRC	=	$(addprefix src/,	\
		)

PARSE = $(addprefix my_str_to_array/,	\
		)

OBJ	=	$(SRC:.c=.o)

PARSEOBJ	=	$(PARSE:.c=.o)

COMPILATION	=	libmy.a

COMPILPARSE =	libparse.a

INCLUDEPATH =	include

CFLAGS	=	-Wextra -Wall $(addprefix -I, $(INCLUDEPATH))

$(COMPILATION):	$(SRC)	$(OBJ)
	ar rc $(COMPILATION) $(OBJ)

$(COMPILPARSE):	$(PARSE)	$(PARSEOBJ)
	ar rc $(COMPILPARSE) $(OBJ)

all :   $(COMPILATION)

clean:
	rm -f $(OBJ)
	rm -f *~

fclean:	clean
	rm -f $(COMPILATION)

parse:	$(COMPILPARSE)

re: fclean all
