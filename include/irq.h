#ifndef __IRQ_H__
#define __IRQ_H__

#include <include/types.h>

typedef struct TrapFrame {
	uint32_t edi, esi, ebp, old_esp, ebx, edx, ecx, eax;
	int32_t irq;
	uint32_t error_code;
	uint32_t eip, cs, eflags;
	uint32_t esp, ss;
//	uint32_t gs, fs, es, ds;
} TrapFrame;

#endif
