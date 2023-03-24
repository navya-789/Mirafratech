	.file	"const.c"
	.text
	.local	a
	.comm	a,4,4
	.section	.rodata
	.align 4
	.type	b, @object
	.size	b, 4
b:
	.long	10
	.comm	m,4,4
	.globl	n
	.align 4
	.type	n, @object
	.size	n, 4
n:
	.long	90
.LC0:
	.string	"value=%d %d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$90, -12(%rbp)
	leaq	a(%rip), %rax
	movq	%rax, -8(%rbp)
	movl	$0, %edx
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	-8(%rbp), %rax
	movl	$10, (%rax)
	movl	$0, %edx
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
