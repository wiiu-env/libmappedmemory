#pragma once

#ifdef __cplusplus
extern "C"
{
#endif

#include <cstdint>

extern uint32_t MemoryMappingEffectiveToPhysical(uint32_t address);

extern uint32_t MemoryMappingPhysicalToEffective(uint32_t address);

extern void *(*MEMAllocFromMappedMemory)(uint32_t size);
extern void *(*MEMAllocFromMappedMemoryEx)(uint32_t size, int32_t alignment);
extern void (*MEMFreeToMappedMemory)(void *ptr);

#ifdef __cplusplus
} // extern "C"
#endif