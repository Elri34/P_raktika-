all: createstaticlib labcompile

createstaticlib:
	@gcc -c fun.c
	@ar cr libBEgor.a fun.o
	@rm *.o

createdynamiclib:
	@gcc -c fun.c
	@export LD_LIBRARY_PATH="$$LD_LIBRARY_PATH:$$PWD"
	@gcc -shared -o libBEgor.so fun.o
	@rm *.o

labcompile:
	@if [ $(number) != 3 ] && [ $(number) != 4 ] && [ $(number) != 7 ]; then \
		gcc -c $(number)/$(number).c; \
		gcc -o temp $(number).o -L ./ -lBEgor -lm; \
		./temp; \
	else \
		echo -n "a or b: "; \
		read letter; \
		gcc -c $(number)/$(number)$$letter.c; \
		gcc -o temp $(number)$$letter.o -L ./ -lBEgor -lm; \
		./temp; \
	fi; \

	@rm -rf *.o
	@rm -rf temp

clean:
	@rm -rf *.o
	@rm -rf *.a
	@rm -rf *.so
	@rm -rf temp