.section .data

.global op1
.global op2

.section .text

.global sum2ints 

sum2ints:
		movl op1(%rip), %eax
	
		addl op2(%rip), %eax
		
		movslq %eax, %rax
		
ret   
