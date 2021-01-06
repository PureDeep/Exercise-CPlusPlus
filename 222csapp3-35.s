	.file	"222csapp3-35.cpp"
	.text
	.globl	_Z4rfunm
	.def	_Z4rfunm;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z4rfunm
_Z4rfunm:
.LFB0:
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	testl	%ecx, %ecx
	jne	.L2
	movl	%ecx, %eax
	jmp	.L3
.L2:
	movl	%ecx, %ebx
	shrl	$2, %ecx
	call	_Z4rfunm
	addl	%ebx, %eax
.L3:
	addq	$32, %rsp
	popq	%rbx
	ret
	.seh_endproc
	.ident	"GCC: (tdm64-1) 4.9.2"
