.section .data
.global tempo
.global proximidade

.section .text
.global result

result:
	movl tempo(%rip), %r9d
	movl proximidade(%rip), %ecx
	
	cmpl $0, %r9d
	jl end_result
	
	cmpl $0, %ecx
	jl end_result
	
	imull %ecx
	
	jmp end
	
end_result:
	movl $-1, %eax
	jmp end
	
end:
	ret
