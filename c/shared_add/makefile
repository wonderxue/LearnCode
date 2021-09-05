TAG:=main
CC:=gcc
CP:=cp
RM:=rm
BIN_DIR:=bin
BUILD_DIR:=build
LIB_DIR:=lib
INC_DIR=inc
SRC_DIR:=src
LIB_SRC:=$(SRC_DIR)/shared_add.c
MAIN_SRC:=$(SRC_DIR)/main.c
LIB_OBJ:=$(notdir $(LIB_SRC:.c=.o))
MAIN_OBJ:=$(notdir $(MAIN_SRC:.c=.o))
LIB_NAME:=libshared_add.so
.PHONY: all lib install install_lib exec clean
all:lib $(TAG)
$(TAG):$(MAIN_OBJ)#按调用顺序链接
	$(CC) $(BUILD_DIR)/$^ -I$(INC_DIR) -L$(BUILD_DIR) -l$(subst lib,,$(basename $(LIB_NAME))) -o $(BUILD_DIR)/$@
lib:$(LIB_OBJ)
	$(CC) $(BUILD_DIR)/$^ -I$(INC_DIR) -shared -o $(BUILD_DIR)/$(LIB_NAME)

$(MAIN_OBJ):$(MAIN_SRC)
	$(CC) -c $< -I$(INC_DIR) -o $(BUILD_DIR)/$@
$(LIB_OBJ):$(LIB_SRC)
	$(CC) -c -fPIC $< -I$(INC_DIR) -o $(BUILD_DIR)/$@
install:all
	@$(CP) $(BUILD_DIR)/*.so $(LIB_DIR)
	@$(CP) $(BUILD_DIR)/$(TAG) $(BIN_DIR)
install_lib:lib
	@$(CP) $(BUILD_DIR)/*.so $(LIB_DIR)
exec:install#执行前指定动态库路径，同时export和运行应该同一行';'分开，不然是两个shell环境
	export LD_LIBRARY_PATH=./$(LIB_DIR);./$(BIN_DIR)/$(TAG)
clean:
	$(RM) -f $(LIB_DIR)/* $(BUILD_DIR)/* $(BIN_DIR)/* 

