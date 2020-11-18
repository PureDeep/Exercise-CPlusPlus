	.file	"164csapp3-24.cpp"
	.text
	.globl	_Z10loop_whilell
	.def	_Z10loop_whilell;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z10loop_whilell
_Z10loop_whilell:
.LFB0:
	.seh_endprologue
	cmpl	%edx, %ecx
	jge	.L4
	addl	%edx, %ecx
	addl	%edx, %edx
	movl	$1, %eax
.L3:
	imull	%ecx, %eax
	addl	$1, %ecx
	cmpl	%edx, %ecx
	jne	.L3
	rep ret
.L4:
	movl	$1, %eax
	ret
	.seh_endproc
	.ident	"GCC: (tdm64-1) 4.9.2"
