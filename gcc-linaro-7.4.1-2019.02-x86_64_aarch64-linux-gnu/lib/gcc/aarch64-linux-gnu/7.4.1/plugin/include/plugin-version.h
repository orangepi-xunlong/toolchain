#include "configargs.h"

#define GCCPLUGIN_VERSION_MAJOR   7
#define GCCPLUGIN_VERSION_MINOR   4
#define GCCPLUGIN_VERSION_PATCHLEVEL   1
#define GCCPLUGIN_VERSION  (GCCPLUGIN_VERSION_MAJOR*1000 + GCCPLUGIN_VERSION_MINOR)

static char basever[] = "7.4.1";
static char datestamp[] = "20181213";
static char devphase[] = "";
static char revision[] = "[linaro-7.4-2019.02 revision 56ec6f6b99cc167ff0c2f8e1a2eed33b1edc85d4]";

/* FIXME plugins: We should make the version information more precise.
   One way to do is to add a checksum. */

static struct plugin_gcc_version gcc_version = {basever, datestamp,
						devphase, revision,
						configuration_arguments};
