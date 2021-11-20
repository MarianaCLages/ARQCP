.section .data

.global varA
.global varB

.section .text

.global test_flags 

test_flags:
		movl varA(%rip), %eax
	
		addl varB(%rip), %eax
		
		jc carry_detected
		movl $0, %eax
		jmp end
		
carry_detected:
	
	movl $1, %eax
		
end:		
   ret   
