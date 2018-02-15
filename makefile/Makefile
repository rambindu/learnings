.PHONY:all
files:= add \
	sum \

all: compile link execute
	@echo "done successfully"

compile:
	gcc -c add.c -o add
	gcc -c sum.c -o sum

link:
	gcc $(files) -o result

execute:
	./result

clean:
	rm -f result sum add


#NAME:="hello"

#.PHONY:all
#all: just 
#	@echo $(NAME)


#.PHONY:just
#just: some
#	@echo "something"
#.PHONY:some
#some:
#	@echo "some"

