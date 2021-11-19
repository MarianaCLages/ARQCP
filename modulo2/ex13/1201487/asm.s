.section data

.global varA
.global varB

.section .text

.global getArea 

getArea:

		movl varA(%rip), %eax
		movl varB(%rip), %ecx
		
		imull %ecx
		
   ret   
