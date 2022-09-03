
#define TOSTRING_(arg) #arg
#define TOSTRING(arg) TOSTRING_(arg)

#define VERSION_MAJOR 1
#define VERSION_MINOR 20
#define VERSION_PATCH 3
#define VERSION_BUILD 65536

#define VERSION_VER VERSION_MAJOR, VERSION_MINOR, VERSION_PATCH, VERSION_BUILD
#define VERSION_NAME TOSTRING(VERSION_MAJOR) "." TOSTRING(VERSION_MINOR) "." TOSTRING(VERSION_PATCH)
#define VERSION_NAME_FULL VERSION_NAME "." TOSTRING(VERSION_BUILD)

#define RELEASE_VERSION true
#define SIGNATURE_CHECK false
