/* Copyright (c) 2010 Wildfire Games
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

/*
 * interface to various AMD64 functions (written in asm)
 */

#ifndef INCLUDED_AMD64_ASM
#define INCLUDED_AMD64_ASM

#ifdef __cplusplus
extern "C" {
#endif

struct x86_x64_CpuidRegs;
extern void CALL_CONV amd64_asm_cpuid(x86_x64_CpuidRegs* reg);

extern intptr_t CALL_CONV amd64_CAS(volatile uintptr_t *location, uintptr_t expected, uintptr_t newValue);

extern void CALL_CONV amd64_AtomicAdd(volatile intptr_t *location, intptr_t increment);

#ifdef __cplusplus
}
#endif

#endif	// #ifndef INCLUDED_AMD64_ASM
