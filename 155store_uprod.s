	.file	"155store_uprod.cpp"
	.text
	.globl	_Z11store_uprodPoyy
	.def	_Z11store_uprodPoyy;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z11store_uprodPoyy
_Z11store_uprodPoyy:
.LFB2:
	.seh_endprologue
	movq	%rdx, %rax
	mulq	%r8
	movq	%rax, (%rcx)
	movq	%rdx, 8(%rcx)
	ret
	.seh_endproc
	.ident	"GCC: (tdm64-1) 4.9.2"
