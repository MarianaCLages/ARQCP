.section data

.global num

.section .text

.global steps 

steps:

	    movq num(%rip), %rax
		
		movq $3, %rcx
		
		imulq %rcx
		addq $6, %rax
		
		movq $3, %rcx
		
		idivq %rcx
		
		addq $12, %rax
		
		subq num(%rip), %rax
		decq %rax
				
   ret   
