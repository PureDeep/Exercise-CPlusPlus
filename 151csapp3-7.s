	.file	"151csapp3-7.cpp"
	.text
	.globl	_Z6scale2lll
	.def	_Z6scale2lll;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z6scale2lll
_Z6scale2lll:
.LFB0:
	.seh_endprologue
	leal	(%rcx,%rcx,4), %eax
	leal	(%rax,%rdx,2), %eax
	leal	(%rax,%r8,8), %eax
	ret
	.seh_endproc
	.ident	"GCC: (tdm64-1) 4.9.2"
