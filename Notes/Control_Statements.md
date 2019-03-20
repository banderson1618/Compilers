while statement -> while( expr ) statement_seq

head:

​	evaluate expression

​	beq

​	statement list

​	jump to head





if statement -> if expr then statement_seq elseif else end



​	expr

​	beq to end

​	statement list

​	j end

end

​	next if else statement

end

​	else statements



Playing compiler:

const

​	size = 10

type

​	a as array[0..size-1] of integer

var

​	sum : integer

​	vals : a

​	i : integer

begin

​	sum := 0;

​	i := 0;

​	while ( i < size)

​	begin

​		sum := sum + a[i]

​		if (sum > 100) then stop endl;

​	endl;

​	write (sum);

end.



code to load 0 into i and sum

wb0:

​	lw $t0, 44($sp)	# load i

​	li $t1, 10			# load SIZE

​	slt $t0, $t0, $t1

​	beq $t0, $zero, we1

​	lw $t0, 





For loops

for ID := EXPR TO/DOWNTO EXPR begin statement_seq end;

​	enter a new scope

​	init expression

​	id := new expression

label:

​	eval end expr

​	check condition -> if false, branch to end

​	statement_seq

​	update end expr

​	j label	

end: