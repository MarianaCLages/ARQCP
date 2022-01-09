.section .data
	
.section .text
	.global cube
	
cube:
	movl %edi, %eax
	imull %edi
	imull %edi
	
	ret
