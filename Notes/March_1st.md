for(auto iter = st.rbegin(); iter != st.rend(); ++iter){

​	auto found = iter->find(id);

​	if (found != iter -> end()) return found -> second;

}

throw "Undefined " + id;





b[c] [c] = b [0] [0]



lw $t0, 528($sp)	#get c

li $t1, 44			#where b is in memory

mult $t0, $t1

mflo $t0

add $t0, $t0, $gp	#because offset must be constant, we add the distance from memory start and the offset in the array together

lw $t1, 528($gp)

li $t2, 4

mult $t1, t2

mflo $t1

add $t1, $t1, $t0

lw $t0, 44($sp)

sw $t0, 44($t1)	



Records:

