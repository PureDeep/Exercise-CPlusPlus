	.file	"165csapp3-25.cpp"
	.text
	.globl	_Z11loop_while2ll
	.def	_Z11loop_while2ll;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z11loop_while2ll
_Z11loop_while2ll:
.LFB0:
	.seh_endprologue
	testl	%edx, %edx
	jle	.L4
	movl	%edx, %eax
.L3:
	imull	%ecx, %eax
	subl	%ecx, %edx
	testl	%edx, %edx
	jg	.L3
	rep ret
.L4:
	movl	%edx, %eax
	ret
	.seh_endproc
	.ident	"GCC: (tdm64-1) 4.9.2"
