struct moduleData;

/*
 * The compiler considers struct moduleData an incomplete type. Incomplete types
 * can be used in declarations.
 */

size_t module_size(void);

void module_setid(struct moduleData *, int);

int module_getid(struct moduleData *);
