.section data

.global varA
.global varB

.section .text

.global sum2ints 

sum2ints:

		movl varA(%rip), %eax
	
		addl varB(%rip), %eax
		
		movslq %eax, %rax
		
   ret   
