CC = gcc

INCLUDE_DIR = inc
SOURCE_DIR = src
BIN_DIR = bin

COMPILER_FLAGS = -I$(INCLUDE_DIR) -std=c99 -Wall -Wextra 

# dependencies
_SRC = card.c stack.c player.c party.c table.c bot.c cmd_view.c cmd_input.c rules.c cmd_input.c game.c
SRC = $(addprefix $(SOURCE_DIR)/,$(_SRC))

turac: $(SRC)
	mkdir -p bin
	gcc -o $(BIN_DIR)/$@ $^ $(COMPILER_FLAGS) #&& $(BIN_DIR)/$@