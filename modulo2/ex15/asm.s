.section data

.global A
.global B
.global C
.global D

.section .text

.global compute 

compute:

		movl A(%rip), %eax
		
		movl B(%rip), %ecx
		
		imull %ecx
		
		addq C(%rip), %rax
		
		movl D(%rip), %ecx
		cmpl $0, %ecx
		je end
		
		idiv %ecx
	
end:
ret   
