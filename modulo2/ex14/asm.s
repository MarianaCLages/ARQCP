.section .data

base:
	.int 6

height:
	.int 3

.section .text

.global getArea 

getArea:
		movl base(%rip), %eax
		movl height(%rip), %ecx
		
		imull %ecx
		
		movl $2, %ecx
		cmpl $0, %eax
		je zero_condition
		
		idiv %ecx
		jmp end
		
zero_condition:
	movl $0, %eax
	jmp end
	
end:	
   ret   
