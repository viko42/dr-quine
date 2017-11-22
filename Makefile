PROG1		=	Colleen
PROG2		=	Grace
PROG3		=	Sully

COMPILE			=	clang
CFLAGS		=	-Wall -Werror -Wextra

EX1			=	$(PROG1).c
EX2			=	$(PROG2).c
EX3			=	$(PROG3).c

OBJ_DIR		=	o/
EX1OBJ		=	$(addprefix $(OBJ_DIR), $(EX1:.c=.o))
EX2OBJ		=	$(addprefix $(OBJ_DIR), $(EX2:.c=.o))
EX3OBJ		=	$(addprefix $(OBJ_DIR), $(EX3:.c=.o))

all: $(PROG1) $(PROG2) $(PROG3)

$(PROG1): $(EX1OBJ)
	$(COMPILE) $(CFLAGS) -o $(PROG1) $^

$(PROG2): $(EX2OBJ)
	$(COMPILE) $(CFLAGS) -o $(PROG2) $^

$(PROG3): $(EX3OBJ)
	$(COMPILE) $(CFLAGS) -o $(PROG3) $^

$(OBJ_DIR)%.o: %.c
	@mkdir -p $(@D)
	$(COMPILE) $(CFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(PROG1) $(PROG2) $(PROG3)

re: fclean all

.PHONY: all clean fclean re
