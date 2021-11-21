.section .data

.global A
.global B

.section .text

.global isMultiple 

isMultiple:
		movl A(%rip), %eax
		
		cltd

		movl B(%rip), %ecx
		
		cmpl $0, %ecx
		je end
		
		idiv %ecx
		
		cmpl $0, %edx
		je multiple_detected

		movl $0, %eax
		jmp end
		
multiple_detected:
	
	movl $1, %eax
		
end:		
   ret   
