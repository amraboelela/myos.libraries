

#ifdef ANDROID

#import <android/log.h>

#ifdef DEBUG
#define printf(...) __android_log_print(ANDROID_LOG_DEBUG, "fontconfig", __VA_ARGS__);
#define fprintf(stderr,...) __android_log_print(ANDROID_LOG_ERROR, "FC Error", __VA_ARGS__);
#define vfprintf(stderr, ...) __android_log_print(ANDROID_LOG_ERROR, "FC Error", __VA_ARGS__);
#else
#define printf(...)
#define fprintf(stderr,...)
#define vfprintf(stderr, ...)
#endif

#endif
