.section .data
	
a:
  .byte 5
		
b:
  .word 15
  
c:
  .int 50
  
d:
  .int 100
  
.section .text
	.global sum_and_subtract
	
sum_and_subtract:

	movslq c(%rip), %rax
	
	movsbq a(%rip), %rcx
	addq %rcx, %rax
	
	movslq d(%rip), %rcx
	subq %rcx, %rax
	
	movswq b(%rip), %rcx
	addq %rcx, %rax
	
	ret
