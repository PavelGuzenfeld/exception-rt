#pragma once
#include <cstdint> // size_t

extern "C"
{
    void *__cxa_allocate_exception(unsigned long) noexcept;
    void __cxa_free_exception(void *) noexcept;
    void *_sbrk(std::size_t);
}
