files:= add \
	sum \
	
.PHONY:all
all: compile link 
	@echo "done successfully"

compile:
	gcc -c add.c -o add
	gcc -c sum.c -o sum

link:
	gcc $(files) -o result

.PHONY:run
run:execute

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

