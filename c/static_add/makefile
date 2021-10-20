TAG=main
CC=gcc
CP=cp
RM=rm
AR=ar

INC_DIR=inc
SRC_DIR=src
BUILD_DIR=build
LIB_DIR=lib
BIN_DIR=bin
.PHONY:all lib install_lib install exec clean
all:lib $(TAG)
$(TAG):$(BUILD_DIR)/main.o
	$(CC) -I$(INC_DIR) $^ -L$(BUILD_DIR) -lstatic_add  -o $(BUILD_DIR)/$@
lib:$(BUILD_DIR)/static_add.o
	$(AR) -rs $(BUILD_DIR)/libstatic_add.a $^
$(BUILD_DIR)/%.o:$(SRC_DIR)/%.c
	$(CC) -I$(INC_DIR) -c $< -o $@
install_lib:lib
	$(CP) $(BUILD_DIR)/*.a $(LIB_DIR)/
install:all
	$(CP) $(BUILD_DIR)/*.a $(LIB_DIR)/
	$(CP) $(BUILD_DIR)/$(TAG) $(BIN_DIR)/
exec:install
	@./$(BIN_DIR)/$(TAG)
clean:
	$(RM) -f $(BIN_DIR)/* $(BUILD_DIR)/* $(BIN_DIR)/*