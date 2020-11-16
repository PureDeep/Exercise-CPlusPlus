	.file	"149csapp3-58.c"
	.text
	.globl	decode2
	.def	decode2;	.scl	2;	.type	32;	.endef
	.seh_proc	decode2
decode2:
	.seh_endprologue
	subq	%r8, %rdx
	movq	%rcx, %rax
	imulq	%rdx, %rax
	salq	$63, %rdx
	sarq	$63, %rdx
	xorq	%rdx, %rax
	ret
	.seh_endproc
	.ident	"GCC: (tdm64-1) 4.9.2"
