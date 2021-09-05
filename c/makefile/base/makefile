TAG:=main
OUT_DIR:=build
BIN_DIR:=bin
VPATH:=src
SRC:=$(foreach i,$(subst :, ,$(VPATH)),$(wildcard $(i)/*.c))
OBJ:=$(SRC:.c=.o)
INC:=-Iinc
CC:=gcc
RM:=rm
CP:=cp

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
all:DIR $(TAG)
DIR:
	$(call DIR_CHECK,$(OUT_DIR))
	$(call DIR_CHECK,$(BIN_DIR))
	$(foreach i,$(subst :, ,$(VPATH)),$(call DIR_CHECK,$(OUT_DIR)/$(i)))
$(TAG):$(OBJ)
	$(CC) -o $(OUT_DIR)/$@ $(foreach i,$^,$(OUT_DIR)/$(i))
	@echo "\nbuild completed, run \"make install\" to install it\n"
%.o:%.c 
	$(CC) -c $< $(INC) -o $(OUT_DIR)/$@
exec:install
	@./$(BIN_DIR)/$(TAG)
install:all
	$(CP) $(OUT_DIR)/$(TAG) $(BIN_DIR)/
	@echo "\ninstall completed, run \"make exec\" to install it\n"
clean:
ifneq ($(wildcard $(OUT_DIR)),)
	$(RM) -r $(OUT_DIR) $(BIN_DIR)
else
	@echo "not build yet"	
endif
