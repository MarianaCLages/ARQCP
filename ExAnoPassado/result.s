.section .data
.global tempo
.global proximidade

.section .text
.global result

result:
	cmpl $0, tempo(%rip)
	jl end_result
	
	cmpl $0, proximidade(%rip)
	jl end_result
	
	movl tempo(%rip), %eax
	movl proximidade(%rip), %ecx
	
	imull %ecx
	
	jmp end
	
end_result:
	movl $-1, %eax
	jmp end
	
end:
	ret
