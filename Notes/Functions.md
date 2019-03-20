var 

  a, b : integer



function add(a, b: integer) : integer

begin

​	return a+b

end;



begin a:=1;

​	b := 2;

​	write(add(a,b), add(4,5))





ST

a -> int 0 gp

b -> int 4 gp

add -> (int, int):int 	add

​		->0 fp, 4 fp, 8 fp?



function ST

a -> int 0 fp

b -> int 4 fp

_ret -> int 8 fp



Assembly:

add:

​	addi $sp, $sp, 0 #making space for local variables

​	lw $t0, 0($fp)

​	lw $t1, 4($fp)

​	add $t0, $t0, $t1

​	sw $t0, 8($fp)

​	j addepilogue

addepilogue:

​	addi $sp, $sp, 0

​	jr $ra

#pop symbol table

main:

​	la $gp, GA

​	li $t0, 1

​	sw $t0, 0($gp)

​	li $t0, 2

​	sw $t0, 4($gp)

​	add $sp, $sp, -20 # space for a, b, return, frame pointer, return address

​	lw $t0, 0($gp)

​	sw $t0, 0($sp)

​	lw $t0, 4($gp)

​	sw $t0, 4($sp)

​	sw $fp, 12($sp)

​	sw $ra, 16($sp)

​	ori $fp, $sp, $zero

​	jal add

​	lw $fp, 12($sp)

​	lw $ra, 16 ($sp)

​	lw $t0, 8($sp)

​	addi $sp, $sp, 20