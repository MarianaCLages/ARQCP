.section .data

.global s
		
.section .text
	.global swapBytes
	
swapBytes:
		
		movw s(%rip),%ax
		movb %al , %ch
		movb %ah , %al
		movb %ch , %ah
		
ret
		
		

