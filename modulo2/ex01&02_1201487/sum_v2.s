.section data

.global op1
.global op2

constant:
		.int 10

.section .text

.global sum_v2   # long sum_v2(void)
 sum_v2:
   movl op1(%rip), %ecx #place op1 in ecx
   movl op2(%rip), %eax #place op2 in eax
   
   subl constant(%rip) , %eax
   subl constant(%rip), %ecx
   
   subl %ecx,%eax
   
   ret
   
   
