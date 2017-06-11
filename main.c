#include <stdio.h>

#include <openssl/crypto.h>

int main(int argc, char *argv[])
{
    if (!OPENSSL_init_crypto(OPENSSL_INIT_LOAD_CRYPTO_STRINGS, NULL)) {
        fprintf(stderr, "OPENSSL_init_crypto failed\n");
        return 1;
    }
    return 0;
}
