#include "json_fuzz.h"
#include <stdint.h>
#include <stdlib.h>

int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
    if (size < 1) return 0;

    json_settings settings = {0};
    json_value* value = json_parse_ex(&settings, (const json_char*)data, size, NULL);

    if (value) {
        json_value_free(value);
    }

    return 0;
}
