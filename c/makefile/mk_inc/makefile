TAG:=main
CC:=gcc
RM:=rm
CP:=cp
OUT_DIR:=$(PWD)/build
BIN_DIR:=bin
INC:=-I$(PWD)/inc
SUB_DIR:=./src/add \
		./src/main \
		./src/sub

define DIR_CHECK
	@echo "checking dir->$(1) whether exist"
 	@if [ -d $(1) ];then \
		echo "dir->$(1) exist"; \
	else \
		echo "dir->$(1) does not exist, creating"; \
		mkdir $(1); \
	fi
endef

.PHONY:all exec install clean
all:DIR SUB_DIR $(TAG)
DIR:
	$(call DIR_CHECK,$(OUT_DIR))
	$(call DIR_CHECK,$(BIN_DIR))
export CC OUT_DIR INC
SUB_DIR:
	for dir in $(SUB_DIR);do \
	make -C $$dir; \
	done
$(TAG):$(OBJ)
	$(CC) -o $(OUT_DIR)/$@ $(wildcard $(OUT_DIR)/*.o)
	@echo "\nbuild completed, run \"make install\" to install it\n"

exec:
	@./$(BIN_DIR)/$(TAG)
install:
	$(CP) $(OUT_DIR)/$(TAG) $(BIN_DIR)/
	@echo "\ninstall completed, run \"make exec\" to install it\n"
clean:
ifneq ($(wildcard $(OUT_DIR)),)
	$(RM) -r $(OUT_DIR) $(BIN_DIR)
else
	@echo "not build yet"	
endif
