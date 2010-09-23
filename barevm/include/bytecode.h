/******************************************************************************
** bob: Bytecode - code objects, instructions and deserialization.
**
** Eli Bendersky (eliben@gmail.com)
** This code is in the public domain
******************************************************************************/
#ifndef BYTECODE_H
#define BYTECODE_H


/* Bob bytecode op-codes.
*/
const unsigned OP_CONST    = 0x00;
const unsigned OP_LOADVAR  = 0x10;
const unsigned OP_STOREVAR = 0x11;
const unsigned OP_DEFVAR   = 0x12;
const unsigned OP_FUNCTION = 0x20;
const unsigned OP_POP      = 0x30;
const unsigned OP_JUMP     = 0x40;
const unsigned OP_FJUMP    = 0x41;
const unsigned OP_RETURN   = 0x50;
const unsigned OP_CALL     = 0x51;


/* Bytecode instruction executable by the VM.
*/
typedef struct BobInstruction {
    unsigned opcode;
    unsigned arg;
} BobInstruction;


/* Code object - a Scheme procedure in its compiled and assembled form,
** suitable for execution by the VM.
*/
typedef struct BobCodeObject {
    char* name;
    unsigned num_args;
    char** args;
    unsigned num_constants;
    
} BobCodeObject;

#endif /* BYTECODE_H */