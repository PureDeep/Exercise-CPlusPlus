	.file	"168csapp3-60.cpp"
	.text
	.globl	_Z4loopli
	.def	_Z4loopli;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z4loopli
_Z4loopli:
.LFB0:
	.seh_endprologue
	movl	%ecx, %r10d
	movl	%edx, %ecx
	movl	$1, %r8d
	movl	$0, %eax
	jmp	.L2
.L3:
	movl	%r10d, %r9d
	andl	%r8d, %r9d
	orl	%r9d, %eax
	sall	%cl, %r8d
.L2:
	testl	%r8d, %r8d
	jne	.L3
	ret
	.seh_endproc
	.ident	"GCC: (tdm64-1) 4.9.2"
