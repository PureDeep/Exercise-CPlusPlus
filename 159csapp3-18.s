	.file	"159csapp3-18.cpp"
	.text
	.globl	_Z4testlll
	.def	_Z4testlll;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z4testlll
_Z4testlll:
.LFB0:
	.seh_endprologue
	leal	(%rcx,%rdx), %r9d
	leal	(%r9,%r8), %eax
	cmpl	$-3, %ecx
	jl	.L2
	cmpl	$2, %ecx
	jg	.L1
	movl	%ecx, %eax
	imull	%r8d, %eax
	ret
.L2:
	cmpl	%r8d, %edx
	jl	.L4
	movl	%edx, %eax
	imull	%r8d, %eax
	ret
.L4:
.L1:
	rep ret
	.seh_endproc
	.ident	"GCC: (tdm64-1) 4.9.2"
