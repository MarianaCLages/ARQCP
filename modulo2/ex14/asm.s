.section data

varA:
	.int 6

varB:
	.int 3

.section .text

.global getAreaAsm 

getAreaAsm:

		movl varA(%rip), %eax
		movl varB(%rip), %ecx
		
		imull %ecx
		
   ret   
