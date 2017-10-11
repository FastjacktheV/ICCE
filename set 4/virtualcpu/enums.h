#ifndef INCLUDED_ENUMS_
#define INCLUDED_ENUMS_

enum RAM : size_t {
	SIZE = 20
};

enum class Opcode{
	ERR,
	MOV,
	ADD,
	SUB,
	MUL,
	DIV,
	NEG,
	DSP,
	STOP
};

enum class OperandType {
	SYNTAX,
	VALUE,
	REGISTER,
	MEMORY
};

#endif