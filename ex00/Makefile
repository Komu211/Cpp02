NAME = tests

OUT_DIR = out

SRCS = main.cpp Fixed.cpp

OBJS = $(addprefix $(OUT_DIR)/, $(SRCS:.cpp=.o))

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++17


all: $(NAME)


$(NAME): $(OUT_DIR) $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OUT_DIR):
		@mkdir -p $(OUT_DIR)

$(OUT_DIR)/%.o: %.cpp
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -rf $(OUT_DIR)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re