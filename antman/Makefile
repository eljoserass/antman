##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## principal Makefile
##

NAME		=	antman

SRC_PATH	=	src/

SRC			=	main.c										\
				open_and_read/get_file.c					\
				open_and_read/read_file.c					\
				open_and_read/size_of_bytes.c				\
				PPM_images/get_and_save_num.c				\
				PPM_images/get_next_elem.c					\
				PPM_images/get_next_pos.c					\
				PPM_images/image_algorithm.c				\
				PPM_images/print.c							\
				text_compression/my_str_to_word_array.c		\
				text_compression/get_compressed_txt_file.c	\
				text_compression/my_arrdup.c 				\
				text_compression/get_dictionary.c 			\
				text_compression/print_compressed.c 		\
				text_compression/count_spaces.c 			\

SRCS		=	$(addprefix $(SRC_PATH), $(SRC))

OBJ			=	$(SRCS:.c=.o)

RM			=	rm -f

LDLIBS		+=	-L./lib/my/ -lmy

CFLAGS		+=	-I./include/ -I./lib/my/include
##-g3 -pedantic -W -Wall -Wextra -Wpedantic -Wno-long-long

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