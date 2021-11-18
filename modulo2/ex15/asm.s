.section data

.global varA
.global varB
.global varC
.global varD

.section .text

.global getAreaAsm 

getAreaAsm:

		movl varA(%rip), %eax
		
		movl varB(%rip), %ecx
		
		imull %ecx
		
		addq varC(%rip), %rax
		
		movl varD(%rip), %ecx
		
		idiv %ecx
		
   ret   
