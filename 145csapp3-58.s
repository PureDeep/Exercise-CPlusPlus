	.file	"145csapp3-58.cpp"
	.text
	.globl	_Z7decode2xxx
	.def	_Z7decode2xxx;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z7decode2xxx
_Z7decode2xxx:
.LFB0:
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
