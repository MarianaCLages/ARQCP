.section data

.global varA

.section .text

.global steps 

steps:

	    movq varA(%rip), %rax
		
		movq $3, %rcx
		
		imulq %rcx
		addq $6, %rax
		
		movq $3, %rcx
		
		idivq %rcx
		
		addq $12, %rax
		
		subq varA(%rip), %rax
		decq %rax
				
   ret   
