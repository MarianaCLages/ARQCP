.section data

.global i
.global a
.global b

.section .text

.global mulloop 

mulloop:
		
		movl i(%rip), %ecx
		movq $0, %r9
	  
my_loop:

		cmpl $0, %ecx
		je end_my_loop
		
		movl a(%rip), %eax
		movl %eax, %r8d

		imull %r8d
		
		movl b(%rip), %r8d
		idivl %r8d
		
		cmpl $0, %edx
		jg resto_inteiro
		
		movl %eax, %r8d
		
		movl %ecx, %eax
		movl %eax, %edx
		
		imull %edx
		
		idivl %r8d
		
		addl %eax, %r9d

		decq %rcx
		jmp my_loop
		
		
resto_inteiro:

		addl %edx, %eax
		cmpl b(%rip), %eax
		jl resto_inteiro_v2
		
		movl $2, %r8d
		
		movl %ecx, %eax
		movl %eax, %edx
				
		imull %edx
		
		idivl %r8d
		
		addl %eax, %r9d

		decq %rcx
		jmp my_loop
		
		
resto_inteiro_v2:

		movl b(%rip), %r8d
		
		movl %ecx, %eax
		movl %eax, %edx
				
		imull %edx
		
		idivl %r8d
		
		addl %eax, %r9d

		decq %rcx
		jmp my_loop

		
end_my_loop:

		movl %r9d, %eax
				
		ret   
