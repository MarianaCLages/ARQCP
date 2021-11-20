.section .data
	.global code
	.global currentSalary
	
.section .text
	.global new_salary
	
new_salary:
	movl code(%rip), %ecx
	movl currentSalary(%rip), %eax
	
	cmpl $10, %ecx
	je manager
	
	cmpl $11, %ecx
	je engineer
	
	cmpl $12, %ecx
	je technician
	
	addl $100, %eax
	jmp end
	
manager:
	addl $300, %eax
	jmp end
	
engineer:
	addl $250, %eax
	jmp end
	
technician:
	addl $150, %eax
	jmp end

end:
	ret
