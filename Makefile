# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/08 12:46:46 by msimoes           #+#    #+#              #
#    Updated: 2025/04/28 10:15:58 by msimoes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = 

SRCS_BONUS = 
				
COMP_LIB = ar rcs
RM = rm -f
CC = cc
CC_FLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)


%.o : %.c
	$(CC) $(CC_FLAGS) -c $< -o $@

all: $(NAME)

bonus: $(OBJS) $(OBJS_BONUS)
	$(COMP_LIB) $(NAME) $(OBJS) $(OBJS_BONUS)
	@touch bonus

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)
	@touch bonus
	@rm bonus

fclean: clean
	$(RM) $(NAME)

re: fclean all


$(NAME): $(OBJS) 
	$(COMP_LIB) $(NAME) $(OBJS)

.PHONY: all clean fclean re
