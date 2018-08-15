##
## for_norme
## File description:
## Makefile
##

NAME		=	piano

CC		=	gcc

SRCDIR		=	src/
INCDIR		=	include/

SRC		=	$(SRCDIR)main.c \
			$(SRCDIR)create_window.c \
			$(SRCDIR)menu.c \
			$(SRCDIR)game.c \
			$(SRCDIR)create_piano.c \
			$(SRCDIR)music_partition.c \
			$(SRCDIR)create_notes.c \
			$(SRCDIR)display_partition.c \
			$(SRCDIR)key_collision.c \
			$(SRCDIR)hit_functions.c \
			$(SRCDIR)collision_piano.c \
			$(SRCDIR)evt_close.c \
			$(SRCDIR)destroy_game.c \
			$(SRCDIR)my_strncat.c \
			$(SRCDIR)solfege.c \
			$(SRCDIR)place_notes.c \
			$(SRCDIR)text_collision.c \
			$(SRCDIR)music.c \
			$(SRCDIR)menu_create.c \

OBJ		=	$(SRC:.c=.o)

CFLAGS		+=	-I $(INCDIR)
CFLAGS		+=	-W -Wall -Wextra -fdiagnostics-color

LDFLAGS		+=	-l c_graph_prog

all		:	$(NAME)

$(NAME)		:	$(OBJ)
			@$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean		:
			@rm -f $(OBJ)

fclean		:	clean
			@rm -f $(NAME)

re		:	fclean all
