##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## principal Makefile
##

NAME		=	giantman

SRC_PATH	=	src/

SRC			=	main.c											\
				open_and_read/size_of_bytes.c					\
				open_and_read/read_file.c						\
				open_and_read/get_file.c						\
				text_decompression/my_str_to_word_array_mod.c	\
				text_decompression/print_uncompressed.c			\
				text_decompression/count_spaces.c 	\
				PPM_images/image_algorithm.c					\
				PPM_images/print.c								\
				PPM_images/get_and_print_num.c					\

SRCS		=	$(addprefix $(SRC_PATH), $(SRC))

OBJ			=	$(SRCS:.c=.o)

RM			=	rm -f

LDLIBS		+=	-L./lib/my/ -lmy

CFLAGS		+=	-I./include/ -I./lib/my/include
##-g3 -pedantic -W -Wall -Wextra -Wpedantic -Wno-long-long -Werror -g

all:		$(NAME)

$(NAME):	make_lib $(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(LDLIBS) $(CFLAGS)

make_lib:
		$(MAKE) -C lib/my/

clean:
		$(RM) $(OBJ)
		$(MAKE) clean -C lib/my/

fclean:		clean
		rm -rf $(NAME)
		$(MAKE) fclean -C lib/my/

re:		fclean all
		$(MAKE) re -C lib/my/