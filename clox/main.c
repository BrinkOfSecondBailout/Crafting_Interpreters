#include "common.h"
#include "chunk.h"
#include "debug.h"
#include "vm.h"

int main(int argc, const char* argv[]) {
    initVm();

    Chunk chunk;
    initChunk(&chunk);

    writeChunk(&chunk, OP_RETURN, 123);

    int constant = addConstant(&chunk, 1.2);
    writeChunk(&chunk, OP_CONSTANT, 123);
    writeChunk(&chunk, constant, 123);


    disassembleChunk(&chunk, "test chunk");
    interpret(&chunk);

    freeVm();
    freeChunk(&chunk);

    return 0;
}