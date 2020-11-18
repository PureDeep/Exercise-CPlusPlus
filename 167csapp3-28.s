	.file	"167csapp3-28.cpp"
	.text
	.globl	_Z5fun_bm
	.def	_Z5fun_bm;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z5fun_bm
_Z5fun_bm:
.LFB0:
	.seh_endprologue
	movl	$64, %edx
	movl	$0, %eax
.L2:
	movl	%ecx, %r8d
	andl	$1, %r8d
	addl	%eax, %eax
	orl	%r8d, %eax
	shrl	%ecx
	subl	$1, %edx
	jne	.L2
	ret
	.seh_endproc
	.ident	"GCC: (tdm64-1) 4.9.2"
