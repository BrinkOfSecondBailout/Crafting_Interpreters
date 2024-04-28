CFLAGS = -Wno-implicit-function-declaration

all: final

final: main.o chunk.o debug.o memory.o value.o vm.o scanner.o compiler.o object.o table.o
	echo "Linking and compiling the final application"
	gcc $(CFLAGS) main.o chunk.o debug.o memory.o value.o vm.o scanner.o compiler.o object.o table.o -o final
	chmod +x final
	echo "Successful overall compilation"

main.o: main.c
	echo "Compiling the main file"
	gcc $(CFLAGS) -c main.c

debug.o: debug.c
	echo "Compiling the debug file"
	gcc $(CFLAGS) -c debug.c

chunk.o: chunk.c
	echo "Compiling the chunk file"
	gcc $(CFLAGS) -c chunk.c

memory.o: memory.c
	echo "Compiling the memory file"
	gcc $(CFLAGS) -c memory.c

value.o: value.c
	echo "Compiling the value file"
	gcc $(CFLAGS) -c value.c

vm.o: vm.c
	echo "Compiling the vm file"
	gcc $(CFLAGS) -c vm.c

scanner.o: scanner.c
	echo "Compiling the scanner file"
	gcc $(CFLAGS) -c scanner.c

compiler.o: compiler.c
	echo "Compiling the compiler file"
	gcc $(CFLAGS) -c compiler.c

object.o: object.c
	echo "Compiling the object file"
	gcc $(CFLAGS) -c object.c

table.o: table.c
	echo "Compiling the table file"
	gcc $(CFLAGS) -c table.c

clean:
	echo "Removing all but the source files"
	rm main.o chunk.o debug.o memory.o value.o vm.o scanner.o compiler.o object.o table.o final