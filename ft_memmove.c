// void *ft_memmove(void *destination, const void *source, size_t num) {
//     unsigned char *d = (unsigned char *)destination;
//     const unsigned char *s = (const unsigned char *)source;

//     if (d == s) {
//         return d; // No need to do anything if source and destination are the same
//     }

//     if (d < s || d >= s + num) {
//         // Non-overlapping memory regions, use memcpy
//         while (num--) {
//             *d++ = *s++;
//         }
//     } else {
//         // Handle overlapping regions
//         d += num - 1;
//         s += num - 1;
//         while (num--) {
//             *d-- = *s--;
//         }
//     }

//     return destination;
// }                        this is chatGpt's code
// #include "libft.h"

// void  *ft_memmove(void *dst, const void *src, size_t len)
// {}