Private members is just error thrown at compile time

enum ()





type

​	p as record{

​		x, integer

​		y, integer

}

a as array[-10..-10] of p



var 

​	a: a

​	p:p

​	i:integer

begin

​	read(i);

​	a[i].x := i;

​	p := a[i+1];

​	write(p.y);

end.



Playing compiler:

​	Types:

​		integer -> int, size 4

​		p -> record,

​				x-> int 0;

​				y-> int 4;

​				size = 8;

​		a -> array

​				-10..10 of p

​				21 elements, size 8

​				total size = 168

var

​	a -> a, offset 0

​	p -> p offset 168

​	i -> integer 176



read (i) // we know how to do this

a -> 0 $sp

lw $t0, 176($sp)

addi $t0, t0, 10 		// addi reg, reg, -ret->type

li $t1, 8

mult $t0, $t1

mflo $t0				// this should be the offset into our array in bytes

add $t0, $t0, $gp		// this should be the global offset into our array

​					#a[i] -> 4 $t0, int

lw $t1, 176 (sp)		// get the value of i in a register

sw $t1, 4($t0)		// save the value

lw $t0, 176($sp)

addi $t0, $t0, 1

addi $t0, $t0, 10

li $t1, 8

mult $t0, $t1

mflo $t0				// this is now the offset in the array

add  $t0, $t0, $gp		// this is the position of a[i + 1]

lw $t1, 0($t0)			// repeat this pattern for every element in p

sw $t1, 168($sp)

lw $t1, 4($t0)

sw $t1, 172($sp)





Long expression error:

​	return Expression result, which has a const, an lval offset, or a register

​	if register, use normally

​	if const, li, then use normally

​	if lva, lw, then use normally