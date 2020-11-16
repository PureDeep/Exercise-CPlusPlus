	.file	"148csapp3-5.cpp"
	.text
	.globl	_Z7decode1PlS_S_
	.def	_Z7decode1PlS_S_;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z7decode1PlS_S_
_Z7decode1PlS_S_:
.LFB0:
	.seh_endprologue
	movl	(%rcx), %r10d
	movl	(%rdx), %r9d
	movl	(%r8), %eax
	movl	%r10d, (%rdx)
	movl	%r9d, (%r8)
	movl	%eax, (%rcx)
	ret
	.seh_endproc
	.ident	"GCC: (tdm64-1) 4.9.2"
