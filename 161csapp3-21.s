	.file	"161csapp3-21.cpp"
	.text
	.globl	_Z4testll
	.def	_Z4testll;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z4testll
_Z4testll:
.LFB0:
	.seh_endprologue
	leal	0(,%rcx,8), %eax
	testl	%edx, %edx
	jle	.L2
	cmpl	%edx, %ecx
	jge	.L3
	movl	%edx, %eax
	subl	%ecx, %eax
	ret
.L3:
	movl	%ecx, %eax
	andl	%edx, %eax
	ret
.L2:
	cmpl	$-1, %edx
	jge	.L4
	leal	(%rcx,%rdx), %eax
.L4:
	rep ret
	.seh_endproc
	.ident	"GCC: (tdm64-1) 4.9.2"
