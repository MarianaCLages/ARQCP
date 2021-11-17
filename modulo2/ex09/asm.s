.section data

.global varA
.global varB
.global varC
.global varD

.section .text

.global sum_and_subtract 

sum_and_subtract:

		movl varC(%rip), %eax
	
		addb varA(%rip), %al
		
		subl varD(%rip), %eax
		
		addw varB(%rip), %ax
		
		
		

   ret   
