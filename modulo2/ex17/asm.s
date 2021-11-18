.section data

.global varA
.global varB

.section .text

.global sum 
.global subtraction
.global multiplication
.global divison
.global modulus
.global powers2
.global powers3

sum:

	movl varA(%rip), %eax
	addl varB(%rip), %eax		
			
		
ret   

subtraction:

	movl varA(%rip), %eax
	subl varB(%rip), %eax	
	
ret

multiplication:

	movl varA(%rip), %eax
	movl varB(%rip), %ecx
	
	imull %ecx
	
ret

divison:

	movl varA(%rip), %eax
	
	cltd
	
	movl varB(%rip), %ecx
	
	idivl %ecx
	
ret	
	
modulus:

	movl varA(%rip), %eax
	
	cltd
	
	movl varB(%rip), %ecx
	
	idivl %ecx
	
	movl %edx, %eax
	
ret

powers2:

	movl varA(%rip), %eax
	movl varA(%rip), %ecx
	
	imull %ecx
	
ret	

powers3:

	movl varA(%rip), %eax
	movl varA(%rip), %ecx
	
	imull %ecx
	imull %ecx
	
ret	
