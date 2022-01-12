.section .data

x1:
	.short 0xA1B2 # 41394
	
aux:
	.byte 0xC3 # 195

.section .text
	.global call_incr
	
call_incr:
	leaq x1(%rip),%rdi
	movb aux(%rip),%sil

	pushq %rdi

	call incr

	popq %rdi
	
	movzwl (%rdi), %ecx
	addl %ecx, %eax
	
	ret


incr: # %rdi: *p1 / %sil: val
	movzwl (%rdi), %eax
	movzbl %sil, %ecx
	addl %eax, %ecx
	movw %cx, (%rdi)
	
	ret
