#include <stdio.h>
#include <string.h>
#include <stdlib.h> // atoiを使用するため

size_t ft_strlcat(char *dst, const char *src, size_t dstsize) {
    size_t dst_len = strlen(dst);
    size_t src_len = strlen(src);
    size_t max_copy_len = dstsize > dst_len ? dstsize - dst_len - 1 : 0;
    size_t i = 0;

    if (dstsize <= dst_len) {
        return dstsize + src_len;
    }
    while (i < max_copy_len && src[i] != '\0') {
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len + i] = '\0';
    return dst_len + src_len;
}
int main(int argc, char **argv) {
    if (argc < 4) {
        printf("Usage: %s dst src size\n", argv[0]);
        return 1;
    }

    char dst[256]; // 適切なバッファを確保
    strncpy(dst, argv[1], sizeof(dst));
    dst[sizeof(dst) - 1] = '\0'; // 安全のためにnull終端

    size_t dstsize = atoi(argv[3]); // 文字列を数値に変換
    size_t result = ft_strlcat(dst, argv[2], dstsize);
    size_t test = strlcat(dst, argv[2], dstsize); // strlcatを正しく使用

    printf("%s, %zu\n", dst, result);
    printf("%s, %zu\n", dst, test);

    return 0;
}
