

#ifndef GUARD_gl_encoder_context_t
#define GUARD_gl_encoder_context_t

#import "IOStream.h"
#import "gl_client_context.h"
#import "glUtils.h"
#import "GLEncoderUtils.h"

struct gl_encoder_context_t : public gl_client_context_t {
	IOStream *m_stream;
	gl_encoder_context_t(IOStream *stream);
};

extern "C" {
	void glAlphaFunc_enc(void *self , GLenum func, GLclampf ref);
	void glClearColor_enc(void *self , GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
	void glClearDepthf_enc(void *self , GLclampf depth);
	void glClipPlanef_enc(void *self , GLenum plane, const GLfloat* equation);
	void glColor4f_enc(void *self , GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
	void glDepthRangef_enc(void *self , GLclampf zNear, GLclampf zFar);
	void glFogf_enc(void *self , GLenum pname, GLfloat param);
	void glFogfv_enc(void *self , GLenum pname, const GLfloat* params);
	void glFrustumf_enc(void *self , GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar);
	void glGetClipPlanef_enc(void *self , GLenum pname, GLfloat* eqn);
	void glGetFloatv_enc(void *self , GLenum pname, GLfloat* params);
	void glGetLightfv_enc(void *self , GLenum light, GLenum pname, GLfloat* params);
	void glGetMaterialfv_enc(void *self , GLenum face, GLenum pname, GLfloat* params);
	void glGetTexEnvfv_enc(void *self , GLenum env, GLenum pname, GLfloat* params);
	void glGetTexParameterfv_enc(void *self , GLenum target, GLenum pname, GLfloat* params);
	void glLightModelf_enc(void *self , GLenum pname, GLfloat param);
	void glLightModelfv_enc(void *self , GLenum pname, const GLfloat* params);
	void glLightf_enc(void *self , GLenum light, GLenum pname, GLfloat param);
	void glLightfv_enc(void *self , GLenum light, GLenum pname, const GLfloat* params);
	void glLineWidth_enc(void *self , GLfloat width);
	void glLoadMatrixf_enc(void *self , const GLfloat* m);
	void glMaterialf_enc(void *self , GLenum face, GLenum pname, GLfloat param);
	void glMaterialfv_enc(void *self , GLenum face, GLenum pname, const GLfloat* params);
	void glMultMatrixf_enc(void *self , const GLfloat* m);
	void glMultiTexCoord4f_enc(void *self , GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
	void glNormal3f_enc(void *self , GLfloat nx, GLfloat ny, GLfloat nz);
	void glOrthof_enc(void *self , GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar);
	void glPointParameterf_enc(void *self , GLenum pname, GLfloat param);
	void glPointParameterfv_enc(void *self , GLenum pname, const GLfloat* params);
	void glPointSize_enc(void *self , GLfloat size);
	void glPolygonOffset_enc(void *self , GLfloat factor, GLfloat units);
	void glRotatef_enc(void *self , GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
	void glScalef_enc(void *self , GLfloat x, GLfloat y, GLfloat z);
	void glTexEnvf_enc(void *self , GLenum target, GLenum pname, GLfloat param);
	void glTexEnvfv_enc(void *self , GLenum target, GLenum pname, const GLfloat* params);
	void glTexParameterf_enc(void *self , GLenum target, GLenum pname, GLfloat param);
	void glTexParameterfv_enc(void *self , GLenum target, GLenum pname, const GLfloat* params);
	void glTranslatef_enc(void *self , GLfloat x, GLfloat y, GLfloat z);
	void glActiveTexture_enc(void *self , GLenum texture);
	void glAlphaFuncx_enc(void *self , GLenum func, GLclampx ref);
	void glBindBuffer_enc(void *self , GLenum target, GLuint buffer);
	void glBindTexture_enc(void *self , GLenum target, GLuint texture);
	void glBlendFunc_enc(void *self , GLenum sfactor, GLenum dfactor);
	void glBufferData_enc(void *self , GLenum target, GLsizeiptr size, const GLvoid* data, GLenum usage);
	void glBufferSubData_enc(void *self , GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid* data);
	void glClear_enc(void *self , GLbitfield mask);
	void glClearColorx_enc(void *self , GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha);
	void glClearDepthx_enc(void *self , GLclampx depth);
	void glClearStencil_enc(void *self , GLint s);
	void glClientActiveTexture_enc(void *self , GLenum texture);
	void glColor4ub_enc(void *self , GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
	void glColor4x_enc(void *self , GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
	void glColorMask_enc(void *self , GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
	void glColorPointer_enc(void *self , GLint size, GLenum type, GLsizei stride, const GLvoid* pointer);
	void glCompressedTexImage2D_enc(void *self , GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid* data);
	void glCompressedTexSubImage2D_enc(void *self , GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid* data);
	void glCopyTexImage2D_enc(void *self , GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
	void glCopyTexSubImage2D_enc(void *self , GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
	void glCullFace_enc(void *self , GLenum mode);
	void glDeleteBuffers_enc(void *self , GLsizei n, const GLuint* buffers);
	void glDeleteTextures_enc(void *self , GLsizei n, const GLuint* textures);
	void glDepthFunc_enc(void *self , GLenum func);
	void glDepthMask_enc(void *self , GLboolean flag);
	void glDepthRangex_enc(void *self , GLclampx zNear, GLclampx zFar);
	void glDisable_enc(void *self , GLenum cap);
	void glDisableClientState_enc(void *self , GLenum array);
	void glDrawArrays_enc(void *self , GLenum mode, GLint first, GLsizei count);
	void glDrawElements_enc(void *self , GLenum mode, GLsizei count, GLenum type, const GLvoid* indices);
	void glEnable_enc(void *self , GLenum cap);
	void glEnableClientState_enc(void *self , GLenum array);
	void glFinish_enc(void *self );
	void glFlush_enc(void *self );
	void glFogx_enc(void *self , GLenum pname, GLfixed param);
	void glFogxv_enc(void *self , GLenum pname, const GLfixed* params);
	void glFrontFace_enc(void *self , GLenum mode);
	void glFrustumx_enc(void *self , GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar);
	void glGetBooleanv_enc(void *self , GLenum pname, GLboolean* params);
	void glGetBufferParameteriv_enc(void *self , GLenum target, GLenum pname, GLint* params);
	void glClipPlanex_enc(void *self , GLenum pname, const GLfixed* eqn);
	void glGenBuffers_enc(void *self , GLsizei n, GLuint* buffers);
	void glGenTextures_enc(void *self , GLsizei n, GLuint* textures);
	GLenum glGetError_enc(void *self );
	void glGetFixedv_enc(void *self , GLenum pname, GLfixed* params);
	void glGetIntegerv_enc(void *self , GLenum pname, GLint* params);
	void glGetLightxv_enc(void *self , GLenum light, GLenum pname, GLfixed* params);
	void glGetMaterialxv_enc(void *self , GLenum face, GLenum pname, GLfixed* params);
	void glGetPointerv_enc(void *self , GLenum pname, GLvoid** params);
	const GLubyte* glGetString_enc(void *self , GLenum name);
	void glGetTexEnviv_enc(void *self , GLenum env, GLenum pname, GLint* params);
	void glGetTexEnvxv_enc(void *self , GLenum env, GLenum pname, GLfixed* params);
	void glGetTexParameteriv_enc(void *self , GLenum target, GLenum pname, GLint* params);
	void glGetTexParameterxv_enc(void *self , GLenum target, GLenum pname, GLfixed* params);
	void glHint_enc(void *self , GLenum target, GLenum mode);
	GLboolean glIsBuffer_enc(void *self , GLuint buffer);
	GLboolean glIsEnabled_enc(void *self , GLenum cap);
	GLboolean glIsTexture_enc(void *self , GLuint texture);
	void glLightModelx_enc(void *self , GLenum pname, GLfixed param);
	void glLightModelxv_enc(void *self , GLenum pname, const GLfixed* params);
	void glLightx_enc(void *self , GLenum light, GLenum pname, GLfixed param);
	void glLightxv_enc(void *self , GLenum light, GLenum pname, const GLfixed* params);
	void glLineWidthx_enc(void *self , GLfixed width);
	void glLoadIdentity_enc(void *self );
	void glLoadMatrixx_enc(void *self , const GLfixed* m);
	void glLogicOp_enc(void *self , GLenum opcode);
	void glMaterialx_enc(void *self , GLenum face, GLenum pname, GLfixed param);
	void glMaterialxv_enc(void *self , GLenum face, GLenum pname, const GLfixed* params);
	void glMatrixMode_enc(void *self , GLenum mode);
	void glMultMatrixx_enc(void *self , const GLfixed* m);
	void glMultiTexCoord4x_enc(void *self , GLenum target, GLfixed s, GLfixed t, GLfixed r, GLfixed q);
	void glNormal3x_enc(void *self , GLfixed nx, GLfixed ny, GLfixed nz);
	void glNormalPointer_enc(void *self , GLenum type, GLsizei stride, const GLvoid* pointer);
	void glOrthox_enc(void *self , GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar);
	void glPixelStorei_enc(void *self , GLenum pname, GLint param);
	void glPointParameterx_enc(void *self , GLenum pname, GLfixed param);
	void glPointParameterxv_enc(void *self , GLenum pname, const GLfixed* params);
	void glPointSizex_enc(void *self , GLfixed size);
	void glPolygonOffsetx_enc(void *self , GLfixed factor, GLfixed units);
	void glPopMatrix_enc(void *self );
	void glPushMatrix_enc(void *self );
	void glReadPixels_enc(void *self , GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid* pixels);
	void glRotatex_enc(void *self , GLfixed angle, GLfixed x, GLfixed y, GLfixed z);
	void glSampleCoverage_enc(void *self , GLclampf value, GLboolean invert);
	void glSampleCoveragex_enc(void *self , GLclampx value, GLboolean invert);
	void glScalex_enc(void *self , GLfixed x, GLfixed y, GLfixed z);
	void glScissor_enc(void *self , GLint x, GLint y, GLsizei width, GLsizei height);
	void glShadeModel_enc(void *self , GLenum mode);
	void glStencilFunc_enc(void *self , GLenum func, GLint ref, GLuint mask);
	void glStencilMask_enc(void *self , GLuint mask);
	void glStencilOp_enc(void *self , GLenum fail, GLenum zfail, GLenum zpass);
	void glTexCoordPointer_enc(void *self , GLint size, GLenum type, GLsizei stride, const GLvoid* pointer);
	void glTexEnvi_enc(void *self , GLenum target, GLenum pname, GLint param);
	void glTexEnvx_enc(void *self , GLenum target, GLenum pname, GLfixed param);
	void glTexEnviv_enc(void *self , GLenum target, GLenum pname, const GLint* params);
	void glTexEnvxv_enc(void *self , GLenum target, GLenum pname, const GLfixed* params);
	void glTexImage2D_enc(void *self , GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid* pixels);
	void glTexParameteri_enc(void *self , GLenum target, GLenum pname, GLint param);
	void glTexParameterx_enc(void *self , GLenum target, GLenum pname, GLfixed param);
	void glTexParameteriv_enc(void *self , GLenum target, GLenum pname, const GLint* params);
	void glTexParameterxv_enc(void *self , GLenum target, GLenum pname, const GLfixed* params);
	void glTexSubImage2D_enc(void *self , GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels);
	void glTranslatex_enc(void *self , GLfixed x, GLfixed y, GLfixed z);
	void glVertexPointer_enc(void *self , GLint size, GLenum type, GLsizei stride, const GLvoid* pointer);
	void glViewport_enc(void *self , GLint x, GLint y, GLsizei width, GLsizei height);
	void glPointSizePointerOES_enc(void *self , GLenum type, GLsizei stride, const GLvoid* pointer);
	void glVertexPointerOffset_enc(void *self , GLint size, GLenum type, GLsizei stride, GLuint offset);
	void glColorPointerOffset_enc(void *self , GLint size, GLenum type, GLsizei stride, GLuint offset);
	void glNormalPointerOffset_enc(void *self , GLenum type, GLsizei stride, GLuint offset);
	void glPointSizePointerOffset_enc(void *self , GLenum type, GLsizei stride, GLuint offset);
	void glTexCoordPointerOffset_enc(void *self , GLint size, GLenum type, GLsizei stride, GLuint offset);
	void glWeightPointerOffset_enc(void *self , GLint size, GLenum type, GLsizei stride, GLuint offset);
	void glMatrixIndexPointerOffset_enc(void *self , GLint size, GLenum type, GLsizei stride, GLuint offset);
	void glVertexPointerData_enc(void *self , GLint size, GLenum type, GLsizei stride, void* data, GLuint datalen);
	void glColorPointerData_enc(void *self , GLint size, GLenum type, GLsizei stride, void* data, GLuint datalen);
	void glNormalPointerData_enc(void *self , GLenum type, GLsizei stride, void* data, GLuint datalen);
	void glTexCoordPointerData_enc(void *self , GLint unit, GLint size, GLenum type, GLsizei stride, void* data, GLuint datalen);
	void glPointSizePointerData_enc(void *self , GLenum type, GLsizei stride, void* data, GLuint datalen);
	void glWeightPointerData_enc(void *self , GLint size, GLenum type, GLsizei stride, void* data, GLuint datalen);
	void glMatrixIndexPointerData_enc(void *self , GLint size, GLenum type, GLsizei stride, void* data, GLuint datalen);
	void glDrawElementsOffset_enc(void *self , GLenum mode, GLsizei count, GLenum type, GLuint offset);
	void glDrawElementsData_enc(void *self , GLenum mode, GLsizei count, GLenum type, void* data, GLuint datalen);
	void glGetCompressedTextureFormats_enc(void *self , int count, GLint* formats);
	int glFinishRoundTrip_enc(void *self );
	void glBlendEquationSeparateOES_enc(void *self , GLenum modeRGB, GLenum modeAlpha);
	void glBlendFuncSeparateOES_enc(void *self , GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
	void glBlendEquationOES_enc(void *self , GLenum mode);
	void glDrawTexsOES_enc(void *self , GLshort x, GLshort y, GLshort z, GLshort width, GLshort height);
	void glDrawTexiOES_enc(void *self , GLint x, GLint y, GLint z, GLint width, GLint height);
	void glDrawTexxOES_enc(void *self , GLfixed x, GLfixed y, GLfixed z, GLfixed width, GLfixed height);
	void glDrawTexsvOES_enc(void *self , const GLshort* coords);
	void glDrawTexivOES_enc(void *self , const GLint* coords);
	void glDrawTexxvOES_enc(void *self , const GLfixed* coords);
	void glDrawTexfOES_enc(void *self , GLfloat x, GLfloat y, GLfloat z, GLfloat width, GLfloat height);
	void glDrawTexfvOES_enc(void *self , const GLfloat* coords);
	void glEGLImageTargetTexture2DOES_enc(void *self , GLenum target, GLeglImageOES image);
	void glEGLImageTargetRenderbufferStorageOES_enc(void *self , GLenum target, GLeglImageOES image);
	void glAlphaFuncxOES_enc(void *self , GLenum func, GLclampx ref);
	void glClearColorxOES_enc(void *self , GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha);
	void glClearDepthxOES_enc(void *self , GLclampx depth);
	void glClipPlanexOES_enc(void *self , GLenum plane, const GLfixed* equation);
	void glClipPlanexIMG_enc(void *self , GLenum plane, const GLfixed* equation);
	void glColor4xOES_enc(void *self , GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
	void glDepthRangexOES_enc(void *self , GLclampx zNear, GLclampx zFar);
	void glFogxOES_enc(void *self , GLenum pname, GLfixed param);
	void glFogxvOES_enc(void *self , GLenum pname, const GLfixed* params);
	void glFrustumxOES_enc(void *self , GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar);
	void glGetClipPlanexOES_enc(void *self , GLenum pname, GLfixed* eqn);
	void glGetClipPlanex_enc(void *self , GLenum pname, GLfixed* eqn);
	void glGetFixedvOES_enc(void *self , GLenum pname, GLfixed* params);
	void glGetLightxvOES_enc(void *self , GLenum light, GLenum pname, GLfixed* params);
	void glGetMaterialxvOES_enc(void *self , GLenum face, GLenum pname, GLfixed* params);
	void glGetTexEnvxvOES_enc(void *self , GLenum env, GLenum pname, GLfixed* params);
	void glGetTexParameterxvOES_enc(void *self , GLenum target, GLenum pname, GLfixed* params);
	void glLightModelxOES_enc(void *self , GLenum pname, GLfixed param);
	void glLightModelxvOES_enc(void *self , GLenum pname, const GLfixed* params);
	void glLightxOES_enc(void *self , GLenum light, GLenum pname, GLfixed param);
	void glLightxvOES_enc(void *self , GLenum light, GLenum pname, const GLfixed* params);
	void glLineWidthxOES_enc(void *self , GLfixed width);
	void glLoadMatrixxOES_enc(void *self , const GLfixed* m);
	void glMaterialxOES_enc(void *self , GLenum face, GLenum pname, GLfixed param);
	void glMaterialxvOES_enc(void *self , GLenum face, GLenum pname, const GLfixed* params);
	void glMultMatrixxOES_enc(void *self , const GLfixed* m);
	void glMultiTexCoord4xOES_enc(void *self , GLenum target, GLfixed s, GLfixed t, GLfixed r, GLfixed q);
	void glNormal3xOES_enc(void *self , GLfixed nx, GLfixed ny, GLfixed nz);
	void glOrthoxOES_enc(void *self , GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar);
	void glPointParameterxOES_enc(void *self , GLenum pname, GLfixed param);
	void glPointParameterxvOES_enc(void *self , GLenum pname, const GLfixed* params);
	void glPointSizexOES_enc(void *self , GLfixed size);
	void glPolygonOffsetxOES_enc(void *self , GLfixed factor, GLfixed units);
	void glRotatexOES_enc(void *self , GLfixed angle, GLfixed x, GLfixed y, GLfixed z);
	void glSampleCoveragexOES_enc(void *self , GLclampx value, GLboolean invert);
	void glScalexOES_enc(void *self , GLfixed x, GLfixed y, GLfixed z);
	void glTexEnvxOES_enc(void *self , GLenum target, GLenum pname, GLfixed param);
	void glTexEnvxvOES_enc(void *self , GLenum target, GLenum pname, const GLfixed* params);
	void glTexParameterxOES_enc(void *self , GLenum target, GLenum pname, GLfixed param);
	void glTexParameterxvOES_enc(void *self , GLenum target, GLenum pname, const GLfixed* params);
	void glTranslatexOES_enc(void *self , GLfixed x, GLfixed y, GLfixed z);
	GLboolean glIsRenderbufferOES_enc(void *self , GLuint renderbuffer);
	void glBindRenderbufferOES_enc(void *self , GLenum target, GLuint renderbuffer);
	void glDeleteRenderbuffersOES_enc(void *self , GLsizei n, const GLuint* renderbuffers);
	void glGenRenderbuffersOES_enc(void *self , GLsizei n, GLuint* renderbuffers);
	void glRenderbufferStorageOES_enc(void *self , GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
	void glGetRenderbufferParameterivOES_enc(void *self , GLenum target, GLenum pname, GLint* params);
	GLboolean glIsFramebufferOES_enc(void *self , GLuint framebuffer);
	void glBindFramebufferOES_enc(void *self , GLenum target, GLuint framebuffer);
	void glDeleteFramebuffersOES_enc(void *self , GLsizei n, const GLuint* framebuffers);
	void glGenFramebuffersOES_enc(void *self , GLsizei n, GLuint* framebuffers);
	GLenum glCheckFramebufferStatusOES_enc(void *self , GLenum target);
	void glFramebufferRenderbufferOES_enc(void *self , GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
	void glFramebufferTexture2DOES_enc(void *self , GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
	void glGetFramebufferAttachmentParameterivOES_enc(void *self , GLenum target, GLenum attachment, GLenum pname, GLint* params);
	void glGenerateMipmapOES_enc(void *self , GLenum target);
	void* glMapBufferOES_enc(void *self , GLenum target, GLenum access);
	GLboolean glUnmapBufferOES_enc(void *self , GLenum target);
	void glGetBufferPointervOES_enc(void *self , GLenum target, GLenum pname, GLvoid** params);
	void glCurrentPaletteMatrixOES_enc(void *self , GLuint matrixpaletteindex);
	void glLoadPaletteFromModelViewMatrixOES_enc(void *self );
	void glMatrixIndexPointerOES_enc(void *self , GLint size, GLenum type, GLsizei stride, const GLvoid* pointer);
	void glWeightPointerOES_enc(void *self , GLint size, GLenum type, GLsizei stride, const GLvoid* pointer);
	GLbitfield glQueryMatrixxOES_enc(void *self , GLfixed* mantissa, GLint* exponent);
	void glDepthRangefOES_enc(void *self , GLclampf zNear, GLclampf zFar);
	void glFrustumfOES_enc(void *self , GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar);
	void glOrthofOES_enc(void *self , GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar);
	void glClipPlanefOES_enc(void *self , GLenum plane, const GLfloat* equation);
	void glClipPlanefIMG_enc(void *self , GLenum plane, const GLfloat* equation);
	void glGetClipPlanefOES_enc(void *self , GLenum pname, GLfloat* eqn);
	void glClearDepthfOES_enc(void *self , GLclampf depth);
	void glTexGenfOES_enc(void *self , GLenum coord, GLenum pname, GLfloat param);
	void glTexGenfvOES_enc(void *self , GLenum coord, GLenum pname, const GLfloat* params);
	void glTexGeniOES_enc(void *self , GLenum coord, GLenum pname, GLint param);
	void glTexGenivOES_enc(void *self , GLenum coord, GLenum pname, const GLint* params);
	void glTexGenxOES_enc(void *self , GLenum coord, GLenum pname, GLfixed param);
	void glTexGenxvOES_enc(void *self , GLenum coord, GLenum pname, const GLfixed* params);
	void glGetTexGenfvOES_enc(void *self , GLenum coord, GLenum pname, GLfloat* params);
	void glGetTexGenivOES_enc(void *self , GLenum coord, GLenum pname, GLint* params);
	void glGetTexGenxvOES_enc(void *self , GLenum coord, GLenum pname, GLfixed* params);
	void glBindVertexArrayOES_enc(void *self , GLuint array);
	void glDeleteVertexArraysOES_enc(void *self , GLsizei n, const GLuint* arrays);
	void glGenVertexArraysOES_enc(void *self , GLsizei n, GLuint* arrays);
	GLboolean glIsVertexArrayOES_enc(void *self , GLuint array);
	void glDiscardFramebufferEXT_enc(void *self , GLenum target, GLsizei numAttachments, const GLenum* attachments);
	void glMultiDrawArraysEXT_enc(void *self , GLenum mode, GLint* first, GLsizei* count, GLsizei primcount);
	void glMultiDrawElementsEXT_enc(void *self , GLenum mode, const GLsizei* count, GLenum type, const GLvoid** indices, GLsizei primcount);
	void glMultiDrawArraysSUN_enc(void *self , GLenum mode, GLint* first, GLsizei* count, GLsizei primcount);
	void glMultiDrawElementsSUN_enc(void *self , GLenum mode, const GLsizei* count, GLenum type, const GLvoid** indices, GLsizei primcount);
	void glRenderbufferStorageMultisampleIMG_enc(void *self , GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
	void glFramebufferTexture2DMultisampleIMG_enc(void *self , GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples);
	void glDeleteFencesNV_enc(void *self , GLsizei n, const GLuint* fences);
	void glGenFencesNV_enc(void *self , GLsizei n, GLuint* fences);
	GLboolean glIsFenceNV_enc(void *self , GLuint fence);
	GLboolean glTestFenceNV_enc(void *self , GLuint fence);
	void glGetFenceivNV_enc(void *self , GLuint fence, GLenum pname, GLint* params);
	void glFinishFenceNV_enc(void *self , GLuint fence);
	void glSetFenceNV_enc(void *self , GLuint fence, GLenum condition);
	void glGetDriverControlsQCOM_enc(void *self , GLint* num, GLsizei size, GLuint* driverControls);
	void glGetDriverControlStringQCOM_enc(void *self , GLuint driverControl, GLsizei bufSize, GLsizei* length, GLchar* driverControlString);
	void glEnableDriverControlQCOM_enc(void *self , GLuint driverControl);
	void glDisableDriverControlQCOM_enc(void *self , GLuint driverControl);
	void glExtGetTexturesQCOM_enc(void *self , GLuint* textures, GLint maxTextures, GLint* numTextures);
	void glExtGetBuffersQCOM_enc(void *self , GLuint* buffers, GLint maxBuffers, GLint* numBuffers);
	void glExtGetRenderbuffersQCOM_enc(void *self , GLuint* renderbuffers, GLint maxRenderbuffers, GLint* numRenderbuffers);
	void glExtGetFramebuffersQCOM_enc(void *self , GLuint* framebuffers, GLint maxFramebuffers, GLint* numFramebuffers);
	void glExtGetTexLevelParameterivQCOM_enc(void *self , GLuint texture, GLenum face, GLint level, GLenum pname, GLint* params);
	void glExtTexObjectStateOverrideiQCOM_enc(void *self , GLenum target, GLenum pname, GLint param);
	void glExtGetTexSubImageQCOM_enc(void *self , GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLvoid* texels);
	void glExtGetBufferPointervQCOM_enc(void *self , GLenum target, GLvoid** params);
	void glExtGetShadersQCOM_enc(void *self , GLuint* shaders, GLint maxShaders, GLint* numShaders);
	void glExtGetProgramsQCOM_enc(void *self , GLuint* programs, GLint maxPrograms, GLint* numPrograms);
	GLboolean glExtIsProgramBinaryQCOM_enc(void *self , GLuint program);
	void glExtGetProgramBinarySourceQCOM_enc(void *self , GLuint program, GLenum shadertype, GLchar* source, GLint* length);
	void glStartTilingQCOM_enc(void *self , GLuint x, GLuint y, GLuint width, GLuint height, GLbitfield preserveMask);
	void glEndTilingQCOM_enc(void *self , GLbitfield preserveMask);
};
#endif
