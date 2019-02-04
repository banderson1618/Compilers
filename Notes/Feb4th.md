Register pool

- Need to make one, apparently

Symbol table

- vect<map<id, stuff>>
  - Push symbol table on when you enter a scope, pop when you exit that scope



Example:

var

​	i : integer

​	j: integer

begin

​	read(i);

​	i := i + 2;

​	write(i);

end



Symbol Table

i -> int, $gp, 0

j -> int, $gp, 4



li $a0, int_read

syscall

sw $a0, 0($gp) #read i

li $a0, int_read

syscall

sw $a0, 4($gp) #read j

lw $t0, 0($gp) #pull i into register

li $t1, 2

add $t2, $t0, $t1

sw $t2, 0($gp)

lw $t0, 0($gp)

ori $a0, $t0, 0

li $v0, write_int

syscall