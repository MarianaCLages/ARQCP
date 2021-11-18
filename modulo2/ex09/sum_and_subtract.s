.section .data

.global op3
.global op4
		
.section .text
	.global sum_and_subtract
	
sum_and_subtract:
		
		movw op3(%rip),%ax
		movw op4(%rip),%cx
		
		addb %cl,%ah
		addb %ch,%al
		
		movswl %ax,%eax
		
ret
		
