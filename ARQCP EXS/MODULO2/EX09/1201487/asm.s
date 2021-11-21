.section .data

.global varA
.global varB
.global varC
.global varD

.section .text

.global sum_and_subtract 

sum_and_subtract:
		movslq varC(%rip), %rax
		movsbq varA(%rip), %rcx
		
		addq %rcx, %rax
		
		movslq varD(%rip), %rcx
		subq %rcx, %rax
	
		movswq varB(%rip), %rcx
		addq %rcx, %rax

   ret   
