.section data

.global a
.global b
.global c
.global d

.section .text

.global compute 

compute:

		movl a(%rip), %eax
		
		movl b(%rip), %ecx
		
		imull %ecx
		
		addq c(%rip), %rax
		
		movl d(%rip), %ecx
		
		idiv %ecx
		
   ret   
