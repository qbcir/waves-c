#ifndef LIBBASE58_H
#define LIBBASE58_H

#include <stdbool.h>
#include <stddef.h>
#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif

extern bool (*b58_sha256_impl)(void *, const void *, size_t);

extern ssize_t b58tobin(void *bin, size_t *binsz, const char *b58, size_t b58sz);
extern int b58check(const void *bin, size_t binsz, const char *b58);

extern bool b58enc(char *b58, size_t *b58sz, const void *bin, size_t binsz);
extern bool b58check_enc(char *b58c, size_t *b58c_sz, uint8_t ver, const void *data, size_t datasz);

extern int b58_length_from_bytes(int byteArrayLength);
extern int bytes_length_from_b58(int base58Length);

#ifdef __cplusplus
}
#endif

#endif
