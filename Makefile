NAME = libasm.a

SRCS_DIR = ./srcs
OBJS_DIR = ./objs
INC_DIR = ./inc
NASM = nasm -f macho64
AR = ar rcv
RM = rm -f
SRCS = hello.s

# OBJS = $(addprefix $(OBJS_DIR)/, $(SRCS:.s=.o))
OBJS = $(SRCS:.s=.o)

all : $(NAME)

$(NAME) : $(OBJS_DIR)/$(OBJS)
	@$(AR) $(NAME) $^

$(OBJS_DIR)/%.o : $(SRCS_DIR)/%.s
	@mkdir -p $(OBJS_DIR)
	@$(NASM) -o $@ $^

test : re
	gcc -o test test.c -I$(INC_DIR) -L. -lasm

clean :
	@$(RM) -r $(OBJS_DIR)

fclean : clean
	@$(RM) $(NAME)

re : fclean all

