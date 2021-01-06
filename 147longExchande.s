	.file	"147longExchande.cpp"
	.text
	.globl	_Z8exchangePll
	.def	_Z8exchangePll;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z8exchangePll
_Z8exchangePll:
.LFB0:
	.seh_endprologue
	movl	(%rcx), %eax
	movl	%edx, (%rcx)
	ret
	.seh_endproc
	.ident	"GCC: (tdm64-1) 4.9.2"
