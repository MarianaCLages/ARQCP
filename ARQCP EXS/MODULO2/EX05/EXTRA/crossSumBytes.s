.section .data

.global op3
.global op4
		
.section .text
	.global crossSumBytes
	
crossSumBytes:
		
		movw op3(%rip),%ax
		movw op4(%rip),%cx
		
		addb %cl,%ah
		addb %ch,%al
		
		movswl %ax,%eax
		
ret
		
