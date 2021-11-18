.section .data
	.global s1
	.global s2
	
.section .text
	.global cross_sum
	
cross_sum:
	movw s1(%rip), %ax
	movw s2(%rip), %bx
	
	addb %al, %bh
	addb %ah, %bl
	
	ret
