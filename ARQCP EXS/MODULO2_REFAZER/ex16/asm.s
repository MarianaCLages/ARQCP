.section .data
.global num

.section .text
.global func

func:
	movq num(%rip), %rax
	
	movq $3, %rcx
	imulq %rcx 		#a)
	
	addq $6, %rax	#b)
	
	movq $3, %rcx
	idivq %rcx		#c)
	
	addq $12, %rax	#d)
	
	subq num(%rip), %rax #e)
	
	decq %rax	#f)
	
	ret
	
	
