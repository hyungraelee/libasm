NAME = libasm.a

SRCS_DIR = ./srcs
OBJS_DIR = ./objs
INC_DIR = ./inc
NASM = nasm -f macho64
AR = ar rc
RM = rm -f
CC = gcc
CFALGS = -Wall -Wextra -Werror
SRCS =	$(wildcard $(SRCS_DIR)/*.s)
vpath %.s $(SRCS_DIR)
OBJS = $(addprefix $(OBJS_DIR)/, $(notdir $(SRCS:.s=.o)))

all : $(NAME)

$(NAME) : $(OBJS)
	@$(AR) $(NAME) $^

$(OBJS_DIR)/%.o : %.s | $(OBJS_DIR)
	@$(NASM) -o $@ $^

$(OBJS_DIR) :
	@mkdir -p $(OBJS_DIR)

test : re
	@$(CC) $(CFALGS) test.c -L. -lasm -I$(INC_DIR) -o test
	@./test

clean :
	@$(RM) -r $(OBJS_DIR)
	@$(RM) test.o test

fclean : clean
	@$(RM) $(NAME)

re : fclean all
