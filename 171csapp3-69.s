	.file	"171csapp3-69.cpp"
	.text
	.globl	_Z4testlP8b_struct
	.def	_Z4testlP8b_struct;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z4testlP8b_struct
_Z4testlP8b_struct:
.LFB0:
	.seh_endprologue
	movslq	%ecx, %rcx
	leaq	0(,%rcx,4), %r8
	leaq	(%r8,%rcx), %rax
	movslq	4(%rdx,%rax,4), %rax
	addq	%r8, %rcx
	addq	%rax, %rcx
	movl	144(%rdx), %eax
	addl	(%rdx), %eax
	movl	%eax, 8(%rdx,%rcx,4)
	ret
	.seh_endproc
	.ident	"GCC: (tdm64-1) 4.9.2"
