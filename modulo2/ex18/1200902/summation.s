.section .data
	.global n

constA:
	.int 1
	
constB:
	.int 2
	
.section .text
	.global summation
	
summation:
        movl n(%rip), %ecx
        movq $0, %r9
        movl $0, %eax

loop:
        addl %eax, %r9d
        cmpl $0, %ecx
        je end

        movl %ecx, %eax

        imull %ecx

        decl %ecx
        jmp loop

end:
        movl constA(%rip), %ecx
        movl %ecx, %eax

        imull %ecx

        imull %r9d

        movl constB(%rip), %ecx

        idivl %ecx

        ret
