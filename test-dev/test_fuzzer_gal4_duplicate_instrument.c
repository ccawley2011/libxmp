#include "test.h"

/* This input caused memory leaks in the Galaxy 4.0 loader
 * due to containing duplicate chunks for an instrument.
 */

TEST(test_fuzzer_gal4_duplicate_instrument)
{
	xmp_context opaque;
	int ret;

	opaque = xmp_create_context();
	ret = xmp_load_module(opaque, "data/f/load_gal4_duplicate_instrument");
	fail_unless(ret == -XMP_ERROR_LOAD, "module load");

	xmp_free_context(opaque);
}
END_TEST
