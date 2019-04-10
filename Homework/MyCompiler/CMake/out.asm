.globl main
#Start program here
main:
	la	$gp, GLOBAL		#load in the global address
	j	program_start		#Jump to main method

func_label_1:
	addi	$sp, $sp, -8		#add to sp to make room for local variables
	li	$t0, 0		#Int expression
	sw	$t0, 4($sp)	#Assign Statement
	li	$t0, 1		#Int expression
	sw	$t0, 0($sp)	#Assign for loop variable
for_head_1:
	li	$t0, 12		#Int expression
	lw	$t1, 0($sp)	#lvalue being retrieved
	slt	$t2, $t1, $t0		#Less Than or Equal To expression
	bne	$t2, $zero, label1# right was less than left, so left is greater than right. Thus, we can return slt
	li	$t2, 1		#Eq after greater than expression
	beq	$t1, $t0, label1
	li	$t2, 0
label1:
	beq	$t2, $zero, for_end_1		#If false, end for loop
	lw	$t0, 4($sp)	#lvalue being retrieved
	lw	$t1, 0($sp)	#lvalue being retrieved
	addi	$t1, $t1, -1		#Add the lower bound to the array index
	li	$t3, 4		#Multiply by the size of items in the array
	mult	$t1, $t3
	mflo	$t1		#Save multiplied value in expr register
	add	$t1, $t1, 4		# This is now the offset in absolute terms into memory
	add	$t1, $t1, $fp		#This is now the offset into the global memory location
	lw	$t1, 0($t1)		#the value of the array is now stored in a location
	add	$t2, $t0, $t1	#Add expression
	sw	$t2, 4($sp)	#Assign Statement
	lw	$t1, 0($sp)	#lvalue being retrieved
	addi	$t2, $t1, 1		#Succ expression
	sw	$t2, 0($sp)	#Assign Statement
	j for_head_1
for_end_1:
	lw	$t2, 4($sp)	#lvalue being retrieved
	sw	$t2, 0($fp)		#Loading return value
	j	func_epilogue_1		#Jump to end of function
func_epilogue_1:
	addi	$sp, $sp, 8		#add to sp to make room for local variables
	jr	$ra		#Exit function
program_start:
	li	$t1, 1		#Int expression
	sw	$t1, 20($gp)	#Assign for loop variable
for_head_2:
	li	$t1, 12		#Int expression
	lw	$t0, 20($gp)	#lvalue being retrieved
	slt	$t3, $t0, $t1		#Less Than or Equal To expression
	bne	$t3, $zero, label2# right was less than left, so left is greater than right. Thus, we can return slt
	li	$t3, 1		#Eq after greater than expression
	beq	$t0, $t1, label2
	li	$t3, 0
label2:
	beq	$t3, $zero, for_end_2		#If false, end for loop
	lw	$t3, 20($gp)	#lvalue being retrieved
	addi	$t3, $t3, -1		#Add the lower bound to the array index
	li	$t1, 4		#Multiply by the size of items in the array
	mult	$t3, $t1
	mflo	$t3		#Save multiplied value in expr register
	add	$t3, $t3, 24		# This is now the offset in absolute terms into memory
	add	$t3, $t3, $gp		#This is now the offset into the global memory location
	li	$t0, 5		#Int expression
	lw	$t4, 20($gp)	#lvalue being retrieved
	add	$t1, $t0, $t4	#Add expression
	sw	$t1, 0($t3)	#Assign Array Value
	lw	$t1, 20($gp)	#lvalue being retrieved
	addi	$t3, $t1, 1		#Succ expression
	sw	$t3, 20($gp)	#Assign Statement
	j for_head_2
for_end_2:
	li	$v0,4		#Write string
	la	$a0, msg1
	syscall
#Calling function
	addi	$sp, $sp, -124		#add enough space to the stack to hold all the registers, the frame pointer, and the return address
#spilling all registers
	sw	$t0, 52($sp)
	sw	$s0, 56($sp)
	sw	$t1, 60($sp)
	sw	$s1, 64($sp)
	sw	$t2, 68($sp)
	sw	$s2, 72($sp)
	sw	$t3, 76($sp)
	sw	$s3, 80($sp)
	sw	$t4, 84($sp)
	sw	$s4, 88($sp)
	sw	$t5, 92($sp)
	sw	$s5, 96($sp)
	sw	$t6, 100($sp)
	sw	$s6, 104($sp)
	sw	$t7, 108($sp)
	sw	$s7, 112($sp)
	sw	$fp, 116($sp)
	sw	$ra, 120($sp)
#saving args
#Copy big arg here
	lw	$t3, 24($gp)	#load Array Value to copy
	sw	$t3, 4($sp)	#Copy array val into argument
	lw	$t3, 28($gp)	#load Array Value to copy
	sw	$t3, 8($sp)	#Copy array val into argument
	lw	$t3, 32($gp)	#load Array Value to copy
	sw	$t3, 12($sp)	#Copy array val into argument
	lw	$t3, 36($gp)	#load Array Value to copy
	sw	$t3, 16($sp)	#Copy array val into argument
	lw	$t3, 40($gp)	#load Array Value to copy
	sw	$t3, 20($sp)	#Copy array val into argument
	lw	$t3, 44($gp)	#load Array Value to copy
	sw	$t3, 24($sp)	#Copy array val into argument
	lw	$t3, 48($gp)	#load Array Value to copy
	sw	$t3, 28($sp)	#Copy array val into argument
	lw	$t3, 52($gp)	#load Array Value to copy
	sw	$t3, 32($sp)	#Copy array val into argument
	lw	$t3, 56($gp)	#load Array Value to copy
	sw	$t3, 36($sp)	#Copy array val into argument
	lw	$t3, 60($gp)	#load Array Value to copy
	sw	$t3, 40($sp)	#Copy array val into argument
	lw	$t3, 64($gp)	#load Array Value to copy
	sw	$t3, 44($sp)	#Copy array val into argument
	lw	$t3, 68($gp)	#load Array Value to copy
	sw	$t3, 48($sp)	#Copy array val into argument
	ori	$fp, $sp, 0		#Set frame pointer to the stack pointer
	jal	func_label_1		#Go to function
#loading all registers
	lw	$t0, 52($sp)
	lw	$s0, 56($sp)
	lw	$t1, 60($sp)
	lw	$s1, 64($sp)
	lw	$t2, 68($sp)
	lw	$s2, 72($sp)
	lw	$t3, 76($sp)
	lw	$s3, 80($sp)
	lw	$t4, 84($sp)
	lw	$s4, 88($sp)
	lw	$t5, 92($sp)
	lw	$s5, 96($sp)
	lw	$t6, 100($sp)
	lw	$s6, 104($sp)
	lw	$t7, 108($sp)
	lw	$s7, 112($sp)
	lw	$fp, 116($sp)
	lw	$ra, 120($sp)
	lw	$t3, 0($sp)		#load return value
	addi	$sp, $sp, 124		#get that space back
	li	$v0,1		#Write integer
	move	$a0, $t3
	syscall
	li	$t3, 10	#Char expression
	li	$v0,11		#Write character
	move	$a0, $t3
	syscall
	li	$v0,4		#Write string
	la	$a0, msg2
	syscall
	li	$v0, 10		#End of program
	syscall
.data


# Writing out strings used in the program
msg2:	.asciiz "Expected value         : 138\n"
msg1:	.asciiz "The sum of the array is: "


.align 2
GLOBAL:
