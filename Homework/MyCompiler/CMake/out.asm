li $t0, 1	# Saving True as 1
sw $t0, 0($sp)
li $t0, 0	# Saving False as 0
sw $t0, 4($sp)


.globl main
#Start program here
main:
	li	$t0, 3		#Int expression
	sw	$t0, 8($sp)	#Assign Statement
	li	$t0, 2		#Int expression
	sw	$t0, 12($sp)	#Assign Statement
	li	$t0, 1		#Int expression
	sw	$t0, 16($sp)	#Assign Statement
	li	$t0, 4		#Int expression
	sw	$t0, 20($sp)	#Assign Statement
	li	$t0, 5		#Int expression
	sw	$t0, 24($sp)	#Assign Statement
	li	$t0, 6		#Int expression
	sw	$t0, 28($sp)	#Assign Statement
	li	$t0, 7		#Int expression
	sw	$t0, 32($sp)	#Assign Statement
	li	$t0, 8		#Int expression
	sw	$t0, 36($sp)	#Assign Statement
	li	$t0, 9		#Int expression
	sw	$t0, 40($sp)	#Assign Statement
	li	$t0, 10		#Int expression
	sw	$t0, 44($sp)	#Assign Statement
	li	$t0, 11		#Int expression
	sw	$t0, 48($sp)	#Assign Statement
	li	$t0, 12		#Int expression
	sw	$t0, 52($sp)	#Assign Statement
	li	$t0, 13		#Int expression
	sw	$t0, 56($sp)	#Assign Statement
	li	$t0, 14		#Int expression
	sw	$t0, 60($sp)	#Assign Statement
	li	$t0, 15		#Int expression
	sw	$t0, 64($sp)	#Assign Statement
	li	$t0, 16		#Int expression
	sw	$t0, 68($sp)	#Assign Statement
	lw	$t0, 56($sp)	#lvalue being retrieved
	lw	$t1, 60($sp)	#lvalue being retrieved
	add	$t2, $t0, $t1	#Add expression
	lw	$t1, 64($sp)	#lvalue being retrieved
	lw	$t0, 68($sp)	#lvalue being retrieved
	add	$t3, $t1, $t0	#Add expression
	mult	$t2, $t3	#Mult expression
	mflo	$t3
	lw	$t2, 40($sp)	#lvalue being retrieved
	lw	$t0, 44($sp)	#lvalue being retrieved
	add	$t1, $t2, $t0	#Add expression
	lw	$t0, 48($sp)	#lvalue being retrieved
	lw	$t2, 52($sp)	#lvalue being retrieved
	add	$t4, $t0, $t2	#Add expression
	mult	$t1, $t4	#Mult expression
	mflo	$t4
	sub	$t1, $t4, $t3	#Sub expression
	lw	$t3, 24($sp)	#lvalue being retrieved
	lw	$t4, 28($sp)	#lvalue being retrieved
	add	$t2, $t3, $t4	#Add expression
	lw	$t4, 32($sp)	#lvalue being retrieved
	lw	$t3, 36($sp)	#lvalue being retrieved
	add	$t0, $t4, $t3	#Add expression
	mult	$t2, $t0	#Mult expression
	mflo	$t0
	lw	$t2, 8($sp)	#lvalue being retrieved
	lw	$t3, 12($sp)	#lvalue being retrieved
	add	$t4, $t2, $t3	#Add expression
	lw	$t3, 16($sp)	#lvalue being retrieved
	lw	$t2, 20($sp)	#lvalue being retrieved
	add	$t5, $t3, $t2	#Add expression
	mult	$t4, $t5	#Mult expression
	mflo	$t5
	sub	$t4, $t5, $t0	#Sub expression
	div	$t4, $t1	#Div expression
	mflo	$t1
	sw	$t1, 72($sp)	#Assign Statement
	lw	$t1, 8($sp)	#lvalue being retrieved
	lw	$t4, 12($sp)	#lvalue being retrieved
	add	$t0, $t1, $t4	#Add expression
	lw	$t4, 16($sp)	#lvalue being retrieved
	add	$t1, $t0, $t4	#Add expression
	lw	$t4, 20($sp)	#lvalue being retrieved
	add	$t0, $t1, $t4	#Add expression
	lw	$t4, 24($sp)	#lvalue being retrieved
	add	$t1, $t0, $t4	#Add expression
	lw	$t4, 28($sp)	#lvalue being retrieved
	add	$t0, $t1, $t4	#Add expression
	lw	$t4, 32($sp)	#lvalue being retrieved
	add	$t1, $t0, $t4	#Add expression
	lw	$t4, 36($sp)	#lvalue being retrieved
	add	$t0, $t1, $t4	#Add expression
	lw	$t4, 40($sp)	#lvalue being retrieved
	add	$t1, $t0, $t4	#Add expression
	lw	$t4, 44($sp)	#lvalue being retrieved
	add	$t0, $t1, $t4	#Add expression
	lw	$t4, 48($sp)	#lvalue being retrieved
	add	$t1, $t0, $t4	#Add expression
	lw	$t4, 52($sp)	#lvalue being retrieved
	add	$t0, $t1, $t4	#Add expression
	lw	$t4, 56($sp)	#lvalue being retrieved
	add	$t1, $t0, $t4	#Add expression
	lw	$t4, 60($sp)	#lvalue being retrieved
	add	$t0, $t1, $t4	#Add expression
	lw	$t4, 64($sp)	#lvalue being retrieved
	add	$t1, $t0, $t4	#Add expression
	lw	$t4, 68($sp)	#lvalue being retrieved
	add	$t0, $t1, $t4	#Add expression
	sw	$t0, 76($sp)	#Assign Statement
	lw	$t0, 72($sp)	#lvalue being retrieved
	li	$v0,1		#Write integer
	move	$a0, $t0
	syscall
	li	$t0, 10	#Char expression
	li	$v0,11		#Write character
	move	$a0, $t0
	syscall
	lw	$t0, 76($sp)	#lvalue being retrieved
	li	$v0,1		#Write integer
	move	$a0, $t0
	syscall
	li	$t0, 10	#Char expression
	li	$v0,11		#Write character
	move	$a0, $t0
	syscall
	lw	$t0, 80($sp)	#lvalue being retrieved
	li	$v0,1		#Write integer
	move	$a0, $t0
	syscall
	li	$t0, 10	#Char expression
	li	$v0,11		#Write character
	move	$a0, $t0
	syscall
	li	$v0, 10
	syscall
.data


# Writing out strings used in the program
