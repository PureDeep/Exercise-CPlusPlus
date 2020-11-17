	.file	"156csapp3-16.cpp"
	.text
	.globl	_Z4condlPl
	.def	_Z4condlPl;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z4condlPl
_Z4condlPl:
.LFB0:
	.seh_endprologue
	testq	%rdx, %rdx
	je	.L1
	cmpl	%ecx, (%rdx)
	jge	.L1
	movl	%ecx, (%rdx)
.L1:
	rep ret
	.seh_endproc
	.ident	"GCC: (tdm64-1) 4.9.2"
