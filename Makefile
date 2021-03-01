##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## principal Makefile
##

make_antman:
		$(MAKE) -C antman/
		$(MAKE) -C giantman/

clean:
		$(MAKE) clean -C antman/
		$(MAKE) clean -C giantman/

fclean:		clean
		$(MAKE) fclean -C antman/
		$(MAKE) fclean -C giantman/

re:		fclean
		$(MAKE) re -C antman/
		$(MAKE) re -C giantman/