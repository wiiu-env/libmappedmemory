#pragma once

#ifdef __cplusplus
extern "C"
{
#endif

#include <cstdint>

extern void MemoryMappingFree(void* ptr);

extern void* MemoryMappingAlloc(uint32_t size, uint32_t align);

extern uint32_t MemoryMappingEffectiveToPhysical(uint32_t address);

extern uint32_t MemoryMappingPhysicalToEffective(uint32_t address);

#ifdef __cplusplus
} // extern "C"
#endif