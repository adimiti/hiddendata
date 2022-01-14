/* moduleData.c */
#include <stddef.h>

#include "module.h"

struct moduleData {
    int id;
	size_t sz;
	void *pData;
};

/*
 * The caller will handle allocation.
 * Provide the required information only
 */

size_t module_size(void) {
    return sizeof(struct moduleData);
}

void module_setid(struct moduleData *o, int i) {
    o->id = i;
}

int module_getid(struct moduleData *o) {
    return o->id;
}
