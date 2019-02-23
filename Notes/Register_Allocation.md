var

​	a, b: integer

​	0  4 (offsets)

begin

​	a := 3;

​	b := 6;

​	a := b % a + b * b - (a-b) * (a-b);

​	write(a);

end.



a -> 3		a -> $1		$1 -> 3

b -> 6		b -> $2		$2 ->6

b%a -> 0					$2 % $1 -> $3

​						$3 -> 0

b * b -> 36				$2 * $2 -> $4

​						$4 -> 36

b%a + b*b -> 36			$3 + $4 -> $5

​						$5 -> 36

​						$1 - $2 -> $6

​						$6 -> -3

​						$6*$6 -> $7

​						$7 -> 9

​						$5 - $7 -> $8

​						$8 -> 27

​						$8 - $2 -> $9

​						$9 -> 21 



a -> 27



li $1, 3			#save a :=3

sw $1, 0($sp)

li $2, 6			#save b:=6

sw $2, 4($sp)

li $8, 27			# save result of above arithmetic

sw $8, 0($sp)



li $9, 21 			# save result of above arithmetic

sw $9, 4($sp)

Different if we have to read in values

var

​	a, b: integer

​	0  4 (offsets)

begin

​	read(a, b)

​	a := b % a + b * b - (a-b) * (a-b);

​	write(a);

end.



a -> $1				$1 % $2 -> $3

b -> $2				$2 * $2 -> $4

​					$1 - $2 ->$5

​					$4 - $3 -> $6

​					$5 * $5 -> $7

​					$6 - $7 -> $8

​					$8 - $2 -> $9

Make code that can use "infinite" registers

li $a0, 4			# reads value

syscall

ori $1, $u0, 0

li $a0, 4			# reads value

syscall

ori $2, $u0, 0



div $1, $2

mflo $3

mult $2, $2

mflo $4

sub $5, $1, $2

add $6, $3, $4

mult $5, $5

mflo $7

sub $8, $6, $7

sub $9, $8, $2



Once we have our code with "infinite" registers, we'll find how long each register is used, and deallocate them after they are no longer used





