.section .data

.global varA
.global varB

.section .text

.global isMultiple 

isMultiple:
		movl varA(%rip), %eax
		
		cltd

		movl varB(%rip), %ecx
		
		idiv %ecx
		
		cmpl $0, %edx
		je multiple_detected

		movl $0, %eax
		jmp end
		
multiple_detected:
	
	movl $1, %eax
		
end:		
   ret   
