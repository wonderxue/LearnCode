SRC:=$(wildcard *.c)
OBJ:=$(SRC:.c=.o)
$(OBJ):$(SRC)

%.o:%.c
	$(CC) -o $(OUT_DIR)/$@ $(INC) -c $<


