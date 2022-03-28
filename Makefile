##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## first makefile
##

SRC	=	$(addprefix src/,   \
		)

OBJ	=	$(SRC:.c=.o)

COMPILATION	=	libmy.a

INCLUDEPATH =	include

CFLAGS	=	$(addprefix -I, $(INCLUDEPATH))

$(COMPILATION):	$(SRC)	$(OBJ)
	ar rc $(COMPILATION) $(OBJ)

all :   $(COMPILATION)

clean:
	rm -f $(OBJ)
	rm -f *~

fclean:	clean
	rm -f $(COMPILATION)

re: fclean all
