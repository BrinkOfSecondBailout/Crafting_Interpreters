CFLAGS = -Wno-implicit-function-declaration

all: final

final: main.o chunk.o debug.o memory.o value.o vm.o
	echo "Linking and compiling the final application"
	gcc $(CFLAGS) main.o chunk.o debug.o memory.o value.o vm.o -o final
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

clean:
	echo "Removing all but the source files"
	rm main.o chunk.o debug.o memory.o value.o vm.o final