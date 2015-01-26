
#ifndef __renderControl_client_proc_t_h
#define __renderControl_client_proc_t_h

#include "renderControl_types.h"
#ifndef renderControl_APIENTRY
#define renderControl_APIENTRY 
#endif
typedef GLint (renderControl_APIENTRY *rcGetRendererVersion_client_proc_t) (void * ctx);
typedef EGLint (renderControl_APIENTRY *rcGetEGLVersion_client_proc_t) (void * ctx, EGLint*, EGLint*);
typedef EGLint (renderControl_APIENTRY *rcQueryEGLString_client_proc_t) (void * ctx, EGLenum, void*, EGLint);
typedef EGLint (renderControl_APIENTRY *rcGetGLString_client_proc_t) (void * ctx, EGLenum, void*, EGLint);
typedef EGLint (renderControl_APIENTRY *rcGetNumConfigs_client_proc_t) (void * ctx, uint32_t*);
typedef EGLint (renderControl_APIENTRY *rcGetConfigs_client_proc_t) (void * ctx, uint32_t, GLuint*);
typedef EGLint (renderControl_APIENTRY *rcChooseConfig_client_proc_t) (void * ctx, EGLint*, uint32_t, uint32_t*, uint32_t);
typedef EGLint (renderControl_APIENTRY *rcGetFBParam_client_proc_t) (void * ctx, EGLint);
typedef uint32_t (renderControl_APIENTRY *rcCreateContext_client_proc_t) (void * ctx, uint32_t, uint32_t, uint32_t);
typedef void (renderControl_APIENTRY *rcDestroyContext_client_proc_t) (void * ctx, uint32_t);
typedef uint32_t (renderControl_APIENTRY *rcCreateWindowSurface_client_proc_t) (void * ctx, uint32_t, uint32_t, uint32_t);
typedef void (renderControl_APIENTRY *rcDestroyWindowSurface_client_proc_t) (void * ctx, uint32_t);
typedef uint32_t (renderControl_APIENTRY *rcCreateColorBuffer_client_proc_t) (void * ctx, uint32_t, uint32_t, GLenum);
typedef void (renderControl_APIENTRY *rcOpenColorBuffer_client_proc_t) (void * ctx, uint32_t);
typedef void (renderControl_APIENTRY *rcCloseColorBuffer_client_proc_t) (void * ctx, uint32_t);
typedef void (renderControl_APIENTRY *rcSetWindowColorBuffer_client_proc_t) (void * ctx, uint32_t, uint32_t);
typedef int (renderControl_APIENTRY *rcFlushWindowColorBuffer_client_proc_t) (void * ctx, uint32_t);
typedef EGLint (renderControl_APIENTRY *rcMakeCurrent_client_proc_t) (void * ctx, uint32_t, uint32_t, uint32_t);
typedef void (renderControl_APIENTRY *rcFBPost_client_proc_t) (void * ctx, uint32_t);
typedef void (renderControl_APIENTRY *rcFBSetSwapInterval_client_proc_t) (void * ctx, EGLint);
typedef void (renderControl_APIENTRY *rcBindTexture_client_proc_t) (void * ctx, uint32_t);
typedef void (renderControl_APIENTRY *rcBindRenderbuffer_client_proc_t) (void * ctx, uint32_t);
typedef EGLint (renderControl_APIENTRY *rcColorBufferCacheFlush_client_proc_t) (void * ctx, uint32_t, EGLint, int);
typedef void (renderControl_APIENTRY *rcReadColorBuffer_client_proc_t) (void * ctx, uint32_t, GLint, GLint, GLint, GLint, GLenum, GLenum, void*);
typedef int (renderControl_APIENTRY *rcUpdateColorBuffer_client_proc_t) (void * ctx, uint32_t, GLint, GLint, GLint, GLint, GLenum, GLenum, void*);


#endif
