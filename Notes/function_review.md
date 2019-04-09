prologue: set stack pointer for local variables

return: jump to epilogue

epilogue: reset stack pointer

evaluate args

subtract space for registers, func params, return val from stack pointer

spill registers

set args

call function

load registers

load return val

reset stack pointer

