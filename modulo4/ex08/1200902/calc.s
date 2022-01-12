.section .data

z:
	.int 0

.section .text
	.global calc
	
calc: # %edi: a / %rsi: b / %edx: c
	movl (%rsi), %r9d
	
	subl %edi, %r9d
	movl %r9d, %ecx
	
	movl %edx, %eax
	imull %ecx
	
	subl $2, %eax
	
	ret
