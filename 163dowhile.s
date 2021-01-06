	.file	"163dowhile.cpp"
	.text
	.globl	_Z7fact_dol
	.def	_Z7fact_dol;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z7fact_dol
_Z7fact_dol:
.LFB0:
	.seh_endprologue
	movl	$1, %eax
.L2:
	imull	%ecx, %eax
	subl	$1, %ecx
	cmpl	$1, %ecx
	jg	.L2
	ret
	.seh_endproc
	.ident	"GCC: (tdm64-1) 4.9.2"
