.section data

.equ A_CONSTANT, 1
.equ B_CONSTANT, 2

.global i

.section .text

.global mulloop 

mulloop:
		movl i(%rip), %ecx
		movq $0, %r9
		movl $0, %eax
	  
my_loop:
		addl %eax, %r9d
		cmpl $0, %ecx
		je end_my_loop
		
		movl %ecx, %eax
		
		imull %ecx
		
		decl %ecx
		jmp my_loop
		
end_my_loop:
		movl $A_CONSTANT, %ecx
		movl %ecx, %eax
		
		imull %ecx
			
		imull %r9d

		movl $B_CONSTANT, %ecx
		
		idivl %ecx
		
		salq $32,%rdx
		orq %rdx,%rax
				
ret   
