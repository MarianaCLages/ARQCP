.section .data

op5:
	.int 15
		
op6:
	.int 30
		
.section .text

.global crossSumBytesAss
	
crossSumBytesAss:
		
		movw op5(%rip),%ax
		movw op6(%rip),%cx
		
		addb %cl,%ah
		addb %ch,%al
		
		movswl %ax,%eax
		
ret
		
