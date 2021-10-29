.section data

.global op1
.global op2

op3:
		   .int 10
		   
op4:
			.int 10

.section .text

.global sum_v3   # long sum_v3(void)
 sum_v3:
   movl op1(%rip), %eax #place op1 in eax
   movl op2(%rip), %ecx #place op2 in ecx
   movl op3(%rip), %edx 
   movl op4(%rip), %ebx
   
  
   addl %ebx,%edx
   subl %ecx,%edx
   addl %edx,%eax
   
   ret
