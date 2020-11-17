	.file	"158csapp3-17.cpp"
	.text
	.globl	_Z10absdiff_sell
	.def	_Z10absdiff_sell;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z10absdiff_sell
_Z10absdiff_sell:
.LFB0:
	.seh_endprologue
	cmpl	%ecx, %edx
	je	.L2
.L3:
	addl	$1, ge_cnt(%rip)
	movl	%ecx, %eax
	subl	%edx, %eax
	ret
.L2:
	addl	$1, lt_cnt(%rip)
	movl	%edx, %eax
	subl	%ecx, %eax
	ret
	.seh_endproc
	.globl	ge_cnt
	.bss
	.align 4
ge_cnt:
	.space 4
	.globl	lt_cnt
	.align 4
lt_cnt:
	.space 4
	.ident	"GCC: (tdm64-1) 4.9.2"
