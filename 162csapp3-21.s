	.file	"162csapp3-21.c"
	.text
	.globl	test
	.def	test;	.scl	2;	.type	32;	.endef
	.seh_proc	test
test:
	.seh_endprologue
	leal	0(,%rcx,8), %eax
	testl	%edx, %edx
	jle	.L2
	cmpl	%edx, %ecx
	jge	.L3
	movl	%edx, %eax
	subl	%ecx, %eax
	ret
.L3:
	movl	%ecx, %eax
	andl	%edx, %eax
	ret
.L2:
	cmpl	$-1, %edx
	jge	.L4
	leal	(%rcx,%rdx), %eax
.L4:
	rep ret
	.seh_endproc
	.ident	"GCC: (tdm64-1) 4.9.2"
