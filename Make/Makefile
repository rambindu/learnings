files:= $(patsubst %.c,%.o,$(wildcard *.c))
.PHONY:all
all:$(files)

.PHONY:run
run: all
	gcc $(files) -o result
	./result

.PHONY:clean
clean: 
	rm -f  $(files) result  

.PHONY: debug
debug:
	echo $(files)




