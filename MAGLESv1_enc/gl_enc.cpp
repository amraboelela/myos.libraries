
#import <string.h>
#import "gl_opcodes.h"
#import "gl_enc.h"
#import <stdio.h>
#import <utils/Log.h>

static void enc_unsupported()
{
	LOGE("Function is unsupported\n");
}

void glAlphaFunc_enc(void *self , GLenum func, GLclampf ref)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glAlphaFunc;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &func, 4); ptr += 4;
		memcpy(ptr, &ref, 4); ptr += 4;
}

void glClearColor_enc(void *self , GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
{
    //ALOGD("glClearColor_enc");
	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;
    
    unsigned char *ptr;
    const size_t packetSize = 8 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glClearColor;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;
    memcpy(ptr, &red, 4); ptr += 4;
    memcpy(ptr, &green, 4); ptr += 4;
    memcpy(ptr, &blue, 4); ptr += 4;
    memcpy(ptr, &alpha, 4); ptr += 4;
}

void glClearDepthf_enc(void *self , GLclampf depth)
{
	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;
    
    unsigned char *ptr;
    const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glClearDepthf;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;
    memcpy(ptr, &depth, 4); ptr += 4;
}

void glClipPlanef_enc(void *self , GLenum plane, const GLfloat* equation)
{
	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;
    
	const unsigned int __size_equation =  (4 * sizeof(float));
    unsigned char *ptr;
    const size_t packetSize = 8 + 4 + __size_equation + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glClipPlanef;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;
    memcpy(ptr, &plane, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_equation; ptr += 4;
	memcpy(ptr, equation, __size_equation);ptr += __size_equation;
}

void glColor4f_enc(void *self , GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    
	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;
    
    unsigned char *ptr;
    const size_t packetSize = 8 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glColor4f;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;
    memcpy(ptr, &red, 4); ptr += 4;
    memcpy(ptr, &green, 4); ptr += 4;
    memcpy(ptr, &blue, 4); ptr += 4;
    memcpy(ptr, &alpha, 4); ptr += 4;
}

void glDepthRangef_enc(void *self , GLclampf zNear, GLclampf zFar)
{
	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;
    
    unsigned char *ptr;
    const size_t packetSize = 8 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glDepthRangef;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;
    memcpy(ptr, &zNear, 4); ptr += 4;
    memcpy(ptr, &zFar, 4); ptr += 4;
}

void glFogf_enc(void *self , GLenum pname, GLfloat param)
{
    
	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;
    
    unsigned char *ptr;
    const size_t packetSize = 8 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glFogf;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;
    memcpy(ptr, &pname, 4); ptr += 4;
    memcpy(ptr, &param, 4); ptr += 4;
}

void glFogfv_enc(void *self , GLenum pname, const GLfloat* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfloat));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glFogfv;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	memcpy(ptr, params, __size_params);ptr += __size_params;
}

void glFrustumf_enc(void *self , GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glFrustumf;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &left, 4); ptr += 4;
		memcpy(ptr, &right, 4); ptr += 4;
		memcpy(ptr, &bottom, 4); ptr += 4;
		memcpy(ptr, &top, 4); ptr += 4;
		memcpy(ptr, &zNear, 4); ptr += 4;
		memcpy(ptr, &zFar, 4); ptr += 4;
}

void glGetClipPlanef_enc(void *self , GLenum pname, GLfloat* eqn)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_eqn =  (4 * sizeof(GLfloat));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + __size_eqn + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGetClipPlanef;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_eqn; ptr += 4;
	stream->readback(eqn, __size_eqn);
}

void glGetFloatv_enc(void *self , GLenum pname, GLfloat* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfloat));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGetFloatv;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	stream->readback(params, __size_params);
}

void glGetLightfv_enc(void *self , GLenum light, GLenum pname, GLfloat* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfloat));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGetLightfv;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &light, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	stream->readback(params, __size_params);
}

void glGetMaterialfv_enc(void *self , GLenum face, GLenum pname, GLfloat* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfloat));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGetMaterialfv;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &face, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	stream->readback(params, __size_params);
}

void glGetTexEnvfv_enc(void *self , GLenum env, GLenum pname, GLfloat* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfloat));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGetTexEnvfv;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &env, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	stream->readback(params, __size_params);
}

void glGetTexParameterfv_enc(void *self , GLenum target, GLenum pname, GLfloat* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfloat));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGetTexParameterfv;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	stream->readback(params, __size_params);
}

void glLightModelf_enc(void *self , GLenum pname, GLfloat param)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glLightModelf;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &pname, 4); ptr += 4;
		memcpy(ptr, &param, 4); ptr += 4;
}

void glLightModelfv_enc(void *self , GLenum pname, const GLfloat* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfloat));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glLightModelfv;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	memcpy(ptr, params, __size_params);ptr += __size_params;
}

void glLightf_enc(void *self , GLenum light, GLenum pname, GLfloat param)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glLightf;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &light, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
		memcpy(ptr, &param, 4); ptr += 4;
}

void glLightfv_enc(void *self , GLenum light, GLenum pname, const GLfloat* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfloat));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glLightfv;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &light, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	memcpy(ptr, params, __size_params);ptr += __size_params;
}

void glLineWidth_enc(void *self , GLfloat width)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glLineWidth;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &width, 4); ptr += 4;
}

void glLoadMatrixf_enc(void *self , const GLfloat* m)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_m =  (16 * sizeof(GLfloat));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + __size_m + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glLoadMatrixf;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

	*(unsigned int *)(ptr) = __size_m; ptr += 4;
	memcpy(ptr, m, __size_m);ptr += __size_m;
}

void glMaterialf_enc(void *self , GLenum face, GLenum pname, GLfloat param)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glMaterialf;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &face, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
		memcpy(ptr, &param, 4); ptr += 4;
}

void glMaterialfv_enc(void *self , GLenum face, GLenum pname, const GLfloat* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfloat));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glMaterialfv;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &face, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	memcpy(ptr, params, __size_params);ptr += __size_params;
}

void glMultMatrixf_enc(void *self , const GLfloat* m)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_m =  (16 * sizeof(GLfloat));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + __size_m + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glMultMatrixf;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

	*(unsigned int *)(ptr) = __size_m; ptr += 4;
	memcpy(ptr, m, __size_m);ptr += __size_m;
}

void glMultiTexCoord4f_enc(void *self , GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glMultiTexCoord4f;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &s, 4); ptr += 4;
		memcpy(ptr, &t, 4); ptr += 4;
		memcpy(ptr, &r, 4); ptr += 4;
		memcpy(ptr, &q, 4); ptr += 4;
}

void glNormal3f_enc(void *self , GLfloat nx, GLfloat ny, GLfloat nz)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glNormal3f;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &nx, 4); ptr += 4;
		memcpy(ptr, &ny, 4); ptr += 4;
		memcpy(ptr, &nz, 4); ptr += 4;
}

void glOrthof_enc(void *self , GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glOrthof;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &left, 4); ptr += 4;
		memcpy(ptr, &right, 4); ptr += 4;
		memcpy(ptr, &bottom, 4); ptr += 4;
		memcpy(ptr, &top, 4); ptr += 4;
		memcpy(ptr, &zNear, 4); ptr += 4;
		memcpy(ptr, &zFar, 4); ptr += 4;
}

void glPointParameterf_enc(void *self , GLenum pname, GLfloat param)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glPointParameterf;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &pname, 4); ptr += 4;
		memcpy(ptr, &param, 4); ptr += 4;
}

void glPointParameterfv_enc(void *self , GLenum pname, const GLfloat* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfloat));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glPointParameterfv;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	memcpy(ptr, params, __size_params);ptr += __size_params;
}

void glPointSize_enc(void *self , GLfloat size)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glPointSize;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &size, 4); ptr += 4;
}

void glPolygonOffset_enc(void *self , GLfloat factor, GLfloat units)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glPolygonOffset;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &factor, 4); ptr += 4;
		memcpy(ptr, &units, 4); ptr += 4;
}

void glRotatef_enc(void *self , GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glRotatef;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &angle, 4); ptr += 4;
		memcpy(ptr, &x, 4); ptr += 4;
		memcpy(ptr, &y, 4); ptr += 4;
		memcpy(ptr, &z, 4); ptr += 4;
}

void glScalef_enc(void *self , GLfloat x, GLfloat y, GLfloat z)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glScalef;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &x, 4); ptr += 4;
		memcpy(ptr, &y, 4); ptr += 4;
		memcpy(ptr, &z, 4); ptr += 4;
}

void glTexEnvf_enc(void *self , GLenum target, GLenum pname, GLfloat param)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glTexEnvf;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
		memcpy(ptr, &param, 4); ptr += 4;
}

void glTexEnvfv_enc(void *self , GLenum target, GLenum pname, const GLfloat* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfloat));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glTexEnvfv;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	memcpy(ptr, params, __size_params);ptr += __size_params;
}

void glTexParameterf_enc(void *self , GLenum target, GLenum pname, GLfloat param)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glTexParameterf;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
		memcpy(ptr, &param, 4); ptr += 4;
}

void glTexParameterfv_enc(void *self , GLenum target, GLenum pname, const GLfloat* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfloat));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glTexParameterfv;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	memcpy(ptr, params, __size_params);ptr += __size_params;
}

void glTranslatef_enc(void *self , GLfloat x, GLfloat y, GLfloat z)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glTranslatef;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &x, 4); ptr += 4;
		memcpy(ptr, &y, 4); ptr += 4;
		memcpy(ptr, &z, 4); ptr += 4;
}

void glActiveTexture_enc(void *self , GLenum texture)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glActiveTexture;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &texture, 4); ptr += 4;
}

void glAlphaFuncx_enc(void *self , GLenum func, GLclampx ref)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glAlphaFuncx;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &func, 4); ptr += 4;
		memcpy(ptr, &ref, 4); ptr += 4;
}

void glBindBuffer_enc(void *self , GLenum target, GLuint buffer)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glBindBuffer;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &buffer, 4); ptr += 4;
}

void glBindTexture_enc(void *self , GLenum target, GLuint texture)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glBindTexture;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &texture, 4); ptr += 4;
}

void glBlendFunc_enc(void *self , GLenum sfactor, GLenum dfactor)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glBlendFunc;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &sfactor, 4); ptr += 4;
		memcpy(ptr, &dfactor, 4); ptr += 4;
}

void glBufferData_enc(void *self , GLenum target, GLsizeiptr size, const GLvoid* data, GLenum usage)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_data =  size;
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + __size_data + 4 + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glBufferData;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &size, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_data; ptr += 4;
	memcpy(ptr, data, __size_data);ptr += __size_data;
		memcpy(ptr, &usage, 4); ptr += 4;
}

void glBufferSubData_enc(void *self , GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid* data)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_data =  size;
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + __size_data + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glBufferSubData;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &offset, 4); ptr += 4;
		memcpy(ptr, &size, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_data; ptr += 4;
	memcpy(ptr, data, __size_data);ptr += __size_data;
}

void glClear_enc(void *self , GLbitfield mask)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glClear;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &mask, 4); ptr += 4;
}

void glClearColorx_enc(void *self , GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glClearColorx;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &red, 4); ptr += 4;
		memcpy(ptr, &green, 4); ptr += 4;
		memcpy(ptr, &blue, 4); ptr += 4;
		memcpy(ptr, &alpha, 4); ptr += 4;
}

void glClearDepthx_enc(void *self , GLclampx depth)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glClearDepthx;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &depth, 4); ptr += 4;
}

void glClearStencil_enc(void *self , GLint s)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glClearStencil;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &s, 4); ptr += 4;
}

void glClientActiveTexture_enc(void *self , GLenum texture)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glClientActiveTexture;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &texture, 4); ptr += 4;
}

void glColor4ub_enc(void *self , GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 1 + 1 + 1 + 1;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glColor4ub;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &red, 1); ptr += 1;
		memcpy(ptr, &green, 1); ptr += 1;
		memcpy(ptr, &blue, 1); ptr += 1;
		memcpy(ptr, &alpha, 1); ptr += 1;
}

void glColor4x_enc(void *self , GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glColor4x;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &red, 4); ptr += 4;
		memcpy(ptr, &green, 4); ptr += 4;
		memcpy(ptr, &blue, 4); ptr += 4;
		memcpy(ptr, &alpha, 4); ptr += 4;
}

void glColorMask_enc(void *self , GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 1 + 1 + 1 + 1;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glColorMask;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &red, 1); ptr += 1;
		memcpy(ptr, &green, 1); ptr += 1;
		memcpy(ptr, &blue, 1); ptr += 1;
		memcpy(ptr, &alpha, 1); ptr += 1;
}

void glCompressedTexImage2D_enc(void *self , GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid* data)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_data = ((data != NULL) ?  imageSize : 0);
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + __size_data + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glCompressedTexImage2D;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &level, 4); ptr += 4;
		memcpy(ptr, &internalformat, 4); ptr += 4;
		memcpy(ptr, &width, 4); ptr += 4;
		memcpy(ptr, &height, 4); ptr += 4;
		memcpy(ptr, &border, 4); ptr += 4;
		memcpy(ptr, &imageSize, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_data; ptr += 4;
	if (data != NULL) memcpy(ptr, data, __size_data);ptr += __size_data;
}

void glCompressedTexSubImage2D_enc(void *self , GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid* data)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_data =  imageSize;
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + __size_data + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glCompressedTexSubImage2D;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &level, 4); ptr += 4;
		memcpy(ptr, &xoffset, 4); ptr += 4;
		memcpy(ptr, &yoffset, 4); ptr += 4;
		memcpy(ptr, &width, 4); ptr += 4;
		memcpy(ptr, &height, 4); ptr += 4;
		memcpy(ptr, &format, 4); ptr += 4;
		memcpy(ptr, &imageSize, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_data; ptr += 4;
	memcpy(ptr, data, __size_data);ptr += __size_data;
}

void glCopyTexImage2D_enc(void *self , GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glCopyTexImage2D;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &level, 4); ptr += 4;
		memcpy(ptr, &internalformat, 4); ptr += 4;
		memcpy(ptr, &x, 4); ptr += 4;
		memcpy(ptr, &y, 4); ptr += 4;
		memcpy(ptr, &width, 4); ptr += 4;
		memcpy(ptr, &height, 4); ptr += 4;
		memcpy(ptr, &border, 4); ptr += 4;
}

void glCopyTexSubImage2D_enc(void *self , GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glCopyTexSubImage2D;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &level, 4); ptr += 4;
		memcpy(ptr, &xoffset, 4); ptr += 4;
		memcpy(ptr, &yoffset, 4); ptr += 4;
		memcpy(ptr, &x, 4); ptr += 4;
		memcpy(ptr, &y, 4); ptr += 4;
		memcpy(ptr, &width, 4); ptr += 4;
		memcpy(ptr, &height, 4); ptr += 4;
}

void glCullFace_enc(void *self , GLenum mode)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glCullFace;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &mode, 4); ptr += 4;
}

void glDeleteBuffers_enc(void *self , GLsizei n, const GLuint* buffers)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_buffers =  (n * sizeof(GLuint));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + __size_buffers + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glDeleteBuffers;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &n, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_buffers; ptr += 4;
	memcpy(ptr, buffers, __size_buffers);ptr += __size_buffers;
}

void glDeleteTextures_enc(void *self , GLsizei n, const GLuint* textures)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_textures =  (n * sizeof(GLuint));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + __size_textures + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glDeleteTextures;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &n, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_textures; ptr += 4;
	memcpy(ptr, textures, __size_textures);ptr += __size_textures;
}

void glDepthFunc_enc(void *self , GLenum func)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glDepthFunc;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &func, 4); ptr += 4;
}

void glDepthMask_enc(void *self , GLboolean flag)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 1;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glDepthMask;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &flag, 1); ptr += 1;
}

void glDepthRangex_enc(void *self , GLclampx zNear, GLclampx zFar)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glDepthRangex;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &zNear, 4); ptr += 4;
		memcpy(ptr, &zFar, 4); ptr += 4;
}

void glDisable_enc(void *self , GLenum cap)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glDisable;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &cap, 4); ptr += 4;
}

void glDisableClientState_enc(void *self , GLenum array)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glDisableClientState;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &array, 4); ptr += 4;
}

void glDrawArrays_enc(void *self , GLenum mode, GLint first, GLsizei count)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glDrawArrays;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &mode, 4); ptr += 4;
		memcpy(ptr, &first, 4); ptr += 4;
		memcpy(ptr, &count, 4); ptr += 4;
}

void glEnable_enc(void *self , GLenum cap)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glEnable;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &cap, 4); ptr += 4;
}

void glEnableClientState_enc(void *self , GLenum array)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glEnableClientState;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &array, 4); ptr += 4;
}

void glFinish_enc(void *self )
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 0;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glFinish;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

}

void glFlush_enc(void *self )
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 0;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glFlush;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

}

void glFogx_enc(void *self , GLenum pname, GLfixed param)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glFogx;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &pname, 4); ptr += 4;
		memcpy(ptr, &param, 4); ptr += 4;
}

void glFogxv_enc(void *self , GLenum pname, const GLfixed* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfixed));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glFogxv;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	memcpy(ptr, params, __size_params);ptr += __size_params;
}

void glFrontFace_enc(void *self , GLenum mode)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glFrontFace;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &mode, 4); ptr += 4;
}

void glFrustumx_enc(void *self , GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glFrustumx;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &left, 4); ptr += 4;
		memcpy(ptr, &right, 4); ptr += 4;
		memcpy(ptr, &bottom, 4); ptr += 4;
		memcpy(ptr, &top, 4); ptr += 4;
		memcpy(ptr, &zNear, 4); ptr += 4;
		memcpy(ptr, &zFar, 4); ptr += 4;
}

void glGetBooleanv_enc(void *self , GLenum pname, GLboolean* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLboolean));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGetBooleanv;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	stream->readback(params, __size_params);
}

void glGetBufferParameteriv_enc(void *self , GLenum target, GLenum pname, GLint* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (sizeof(GLint));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGetBufferParameteriv;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	stream->readback(params, __size_params);
}

void glClipPlanex_enc(void *self , GLenum pname, const GLfixed* eqn)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_eqn =  (4 * sizeof(GLfixed));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + __size_eqn + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glClipPlanex;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_eqn; ptr += 4;
	memcpy(ptr, eqn, __size_eqn);ptr += __size_eqn;
}

void glGenBuffers_enc(void *self , GLsizei n, GLuint* buffers)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_buffers =  (n * sizeof(GLuint));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + __size_buffers + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGenBuffers;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &n, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_buffers; ptr += 4;
	stream->readback(buffers, __size_buffers);
}

void glGenTextures_enc(void *self , GLsizei n, GLuint* textures)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_textures =  (n * sizeof(GLuint));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + __size_textures + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGenTextures;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &n, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_textures; ptr += 4;
	stream->readback(textures, __size_textures);
}

GLenum glGetError_enc(void *self )
{
	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;
    
    unsigned char *ptr;
    const size_t packetSize = 8 + 0;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGetError;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;
    
    
	GLenum retval;
	stream->readback(&retval, 4);
	return retval;
}

void glGetFixedv_enc(void *self , GLenum pname, GLfixed* params)
{
	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;
    
	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfixed));
    unsigned char *ptr;
    const size_t packetSize = 8 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGetFixedv;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;
    
    memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	stream->readback(params, __size_params);
}

void glGetIntegerv_enc(void *self , GLenum pname, GLint* params)
{
	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;
    
	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLint));
    unsigned char *ptr;
    const size_t packetSize = 8 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGetIntegerv;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;
    
    memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	stream->readback(params, __size_params);
}

void glGetLightxv_enc(void *self , GLenum light, GLenum pname, GLfixed* params)
{
	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;
    
	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfixed));
    unsigned char *ptr;
    const size_t packetSize = 8 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGetLightxv;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;
    
    memcpy(ptr, &light, 4); ptr += 4;
    memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	stream->readback(params, __size_params);
}

void glGetMaterialxv_enc(void *self , GLenum face, GLenum pname, GLfixed* params)
{
	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;
    
	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfixed));
    unsigned char *ptr;
    const size_t packetSize = 8 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGetMaterialxv;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;
    
    memcpy(ptr, &face, 4); ptr += 4;
    memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	stream->readback(params, __size_params);
}

void glGetTexEnviv_enc(void *self , GLenum env, GLenum pname, GLint* params)
{
	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;
    
	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLint));
    unsigned char *ptr;
    const size_t packetSize = 8 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGetTexEnviv;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;
    
    memcpy(ptr, &env, 4); ptr += 4;
    memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	stream->readback(params, __size_params);
}

void glGetTexEnvxv_enc(void *self , GLenum env, GLenum pname, GLfixed* params)
{
	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;
    
	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfixed));
    unsigned char *ptr;
    const size_t packetSize = 8 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGetTexEnvxv;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;
    
    memcpy(ptr, &env, 4); ptr += 4;
    memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	stream->readback(params, __size_params);
}

void glGetTexParameteriv_enc(void *self , GLenum target, GLenum pname, GLint* params)
{
	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;
    
	const unsigned int __size_params =  (sizeof(GLint));
    unsigned char *ptr;
    const size_t packetSize = 8 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGetTexParameteriv;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;
    
    memcpy(ptr, &target, 4); ptr += 4;
    memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	stream->readback(params, __size_params);
}

void glGetTexParameterxv_enc(void *self , GLenum target, GLenum pname, GLfixed* params)
{
	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;
    
	const unsigned int __size_params =  (sizeof(GLfixed));
    unsigned char *ptr;
    const size_t packetSize = 8 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGetTexParameterxv;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;
    
    memcpy(ptr, &target, 4); ptr += 4;
    memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	stream->readback(params, __size_params);
}

void glHint_enc(void *self , GLenum target, GLenum mode)
{
	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;
    
    unsigned char *ptr;
    const size_t packetSize = 8 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glHint;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;
    
    memcpy(ptr, &target, 4); ptr += 4;
    memcpy(ptr, &mode, 4); ptr += 4;
}

GLboolean glIsBuffer_enc(void *self , GLuint buffer)
{
	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;
    
    unsigned char *ptr;
    const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glIsBuffer;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;
    
    memcpy(ptr, &buffer, 4); ptr += 4;
    
	GLboolean retval;
	stream->readback(&retval, 1);
	return retval;
}

GLboolean glIsEnabled_enc(void *self , GLenum cap)
{
	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;
    
    unsigned char *ptr;
    const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glIsEnabled;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;
    
    memcpy(ptr, &cap, 4); ptr += 4;
    
	GLboolean retval;
	stream->readback(&retval, 1);
	return retval;
}

GLboolean glIsTexture_enc(void *self , GLuint texture)
{
	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;
    
    unsigned char *ptr;
    const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glIsTexture;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;
    
    memcpy(ptr, &texture, 4); ptr += 4;
    
	GLboolean retval;
	stream->readback(&retval, 1);
	return retval;
}

void glLightModelx_enc(void *self , GLenum pname, GLfixed param)
{
	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;
    
    unsigned char *ptr;
    const size_t packetSize = 8 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glLightModelx;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;
    
    memcpy(ptr, &pname, 4); ptr += 4;
    memcpy(ptr, &param, 4); ptr += 4;
}

void glLightModelxv_enc(void *self , GLenum pname, const GLfixed* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfixed));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glLightModelxv;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	memcpy(ptr, params, __size_params);ptr += __size_params;
}

void glLightx_enc(void *self , GLenum light, GLenum pname, GLfixed param)
{
	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;
    
    unsigned char *ptr;
    const size_t packetSize = 8 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glLightx;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;
    
    memcpy(ptr, &light, 4); ptr += 4;
    memcpy(ptr, &pname, 4); ptr += 4;
    memcpy(ptr, &param, 4); ptr += 4;
}

void glLightxv_enc(void *self , GLenum light, GLenum pname, const GLfixed* params)
{
	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;
    
	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfixed));
    unsigned char *ptr;
    const size_t packetSize = 8 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glLightxv;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;
    
    memcpy(ptr, &light, 4); ptr += 4;
    memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	memcpy(ptr, params, __size_params);ptr += __size_params;
}

void glLineWidthx_enc(void *self , GLfixed width)
{
	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;
    
    unsigned char *ptr;
    const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glLineWidthx;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;
    
    memcpy(ptr, &width, 4); ptr += 4;
}

void glLoadIdentity_enc(void *self )
{
	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 0;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glLoadIdentity;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

}

void glLoadMatrixx_enc(void *self , const GLfixed* m)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_m =  (16 * sizeof(GLfixed));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + __size_m + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glLoadMatrixx;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

	*(unsigned int *)(ptr) = __size_m; ptr += 4;
	memcpy(ptr, m, __size_m);ptr += __size_m;
}

void glLogicOp_enc(void *self , GLenum opcode)
{
    
	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;
    
    unsigned char *ptr;
    const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glLogicOp;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;
    
    memcpy(ptr, &opcode, 4); ptr += 4;
}

void glMaterialx_enc(void *self , GLenum face, GLenum pname, GLfixed param)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glMaterialx;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &face, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
		memcpy(ptr, &param, 4); ptr += 4;
}

void glMaterialxv_enc(void *self , GLenum face, GLenum pname, const GLfixed* params)
{
    
	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;
    
	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfixed));
    unsigned char *ptr;
    const size_t packetSize = 8 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glMaterialxv;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;
    
    memcpy(ptr, &face, 4); ptr += 4;
    memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	memcpy(ptr, params, __size_params);ptr += __size_params;
}

void glMatrixMode_enc(void *self , GLenum mode)
{
    LOGE("glMatrixMode_enc 1");
	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;
    LOGE("glMatrixMode_enc 2");
    unsigned char *ptr;
    const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
    //ALOGE("glMatrixMode_enc 3");
	int tmp = OP_glMatrixMode;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;
    memcpy(ptr, &mode, 4); ptr += 4;
    //ALOGE("glMatrixMode_enc 4");
}

void glMultMatrixx_enc(void *self , const GLfixed* m)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_m =  (16 * sizeof(GLfixed));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + __size_m + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glMultMatrixx;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

	*(unsigned int *)(ptr) = __size_m; ptr += 4;
	memcpy(ptr, m, __size_m);ptr += __size_m;
}

void glMultiTexCoord4x_enc(void *self , GLenum target, GLfixed s, GLfixed t, GLfixed r, GLfixed q)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glMultiTexCoord4x;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &s, 4); ptr += 4;
		memcpy(ptr, &t, 4); ptr += 4;
		memcpy(ptr, &r, 4); ptr += 4;
		memcpy(ptr, &q, 4); ptr += 4;
}

void glNormal3x_enc(void *self , GLfixed nx, GLfixed ny, GLfixed nz)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glNormal3x;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &nx, 4); ptr += 4;
		memcpy(ptr, &ny, 4); ptr += 4;
		memcpy(ptr, &nz, 4); ptr += 4;
}

void glOrthox_enc(void *self , GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glOrthox;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &left, 4); ptr += 4;
		memcpy(ptr, &right, 4); ptr += 4;
		memcpy(ptr, &bottom, 4); ptr += 4;
		memcpy(ptr, &top, 4); ptr += 4;
		memcpy(ptr, &zNear, 4); ptr += 4;
		memcpy(ptr, &zFar, 4); ptr += 4;
}

void glPixelStorei_enc(void *self , GLenum pname, GLint param)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glPixelStorei;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &pname, 4); ptr += 4;
		memcpy(ptr, &param, 4); ptr += 4;
}

void glPointParameterx_enc(void *self , GLenum pname, GLfixed param)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glPointParameterx;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &pname, 4); ptr += 4;
		memcpy(ptr, &param, 4); ptr += 4;
}

void glPointParameterxv_enc(void *self , GLenum pname, const GLfixed* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfixed));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glPointParameterxv;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	memcpy(ptr, params, __size_params);ptr += __size_params;
}

void glPointSizex_enc(void *self , GLfixed size)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glPointSizex;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &size, 4); ptr += 4;
}

void glPolygonOffsetx_enc(void *self , GLfixed factor, GLfixed units)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glPolygonOffsetx;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &factor, 4); ptr += 4;
		memcpy(ptr, &units, 4); ptr += 4;
}

void glPopMatrix_enc(void *self )
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 0;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glPopMatrix;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

}

void glPushMatrix_enc(void *self )
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 0;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glPushMatrix;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

}

void glReadPixels_enc(void *self , GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid* pixels)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_pixels =  pixelDataSize(self, width, height, format, type, 1);
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4 + 4 + 4 + __size_pixels + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glReadPixels;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &x, 4); ptr += 4;
		memcpy(ptr, &y, 4); ptr += 4;
		memcpy(ptr, &width, 4); ptr += 4;
		memcpy(ptr, &height, 4); ptr += 4;
		memcpy(ptr, &format, 4); ptr += 4;
		memcpy(ptr, &type, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_pixels; ptr += 4;
	stream->readback(pixels, __size_pixels);
}

void glRotatex_enc(void *self , GLfixed angle, GLfixed x, GLfixed y, GLfixed z)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glRotatex;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &angle, 4); ptr += 4;
		memcpy(ptr, &x, 4); ptr += 4;
		memcpy(ptr, &y, 4); ptr += 4;
		memcpy(ptr, &z, 4); ptr += 4;
}

void glSampleCoverage_enc(void *self , GLclampf value, GLboolean invert)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 1;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glSampleCoverage;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &value, 4); ptr += 4;
		memcpy(ptr, &invert, 1); ptr += 1;
}

void glSampleCoveragex_enc(void *self , GLclampx value, GLboolean invert)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 1;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glSampleCoveragex;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &value, 4); ptr += 4;
		memcpy(ptr, &invert, 1); ptr += 1;
}

void glScalex_enc(void *self , GLfixed x, GLfixed y, GLfixed z)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glScalex;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &x, 4); ptr += 4;
		memcpy(ptr, &y, 4); ptr += 4;
		memcpy(ptr, &z, 4); ptr += 4;
}

void glScissor_enc(void *self , GLint x, GLint y, GLsizei width, GLsizei height)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glScissor;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &x, 4); ptr += 4;
		memcpy(ptr, &y, 4); ptr += 4;
		memcpy(ptr, &width, 4); ptr += 4;
		memcpy(ptr, &height, 4); ptr += 4;
}

void glShadeModel_enc(void *self , GLenum mode)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glShadeModel;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &mode, 4); ptr += 4;
}

void glStencilFunc_enc(void *self , GLenum func, GLint ref, GLuint mask)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glStencilFunc;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &func, 4); ptr += 4;
		memcpy(ptr, &ref, 4); ptr += 4;
		memcpy(ptr, &mask, 4); ptr += 4;
}

void glStencilMask_enc(void *self , GLuint mask)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glStencilMask;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &mask, 4); ptr += 4;
}

void glStencilOp_enc(void *self , GLenum fail, GLenum zfail, GLenum zpass)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glStencilOp;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &fail, 4); ptr += 4;
		memcpy(ptr, &zfail, 4); ptr += 4;
		memcpy(ptr, &zpass, 4); ptr += 4;
}

void glTexEnvi_enc(void *self , GLenum target, GLenum pname, GLint param)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glTexEnvi;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
		memcpy(ptr, &param, 4); ptr += 4;
}

void glTexEnvx_enc(void *self , GLenum target, GLenum pname, GLfixed param)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glTexEnvx;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
		memcpy(ptr, &param, 4); ptr += 4;
}

void glTexEnviv_enc(void *self , GLenum target, GLenum pname, const GLint* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLint));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glTexEnviv;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	memcpy(ptr, params, __size_params);ptr += __size_params;
}

void glTexEnvxv_enc(void *self , GLenum target, GLenum pname, const GLfixed* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfixed));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glTexEnvxv;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	memcpy(ptr, params, __size_params);ptr += __size_params;
}

void glTexImage2D_enc(void *self , GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid* pixels)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_pixels = ((pixels != NULL) ?  pixelDataSize(self, width, height, format, type, 0) : 0);
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + __size_pixels + 1*4;
	ptr = stream->alloc(8 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4);
	int tmp = OP_glTexImage2D;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &level, 4); ptr += 4;
		memcpy(ptr, &internalformat, 4); ptr += 4;
		memcpy(ptr, &width, 4); ptr += 4;
		memcpy(ptr, &height, 4); ptr += 4;
		memcpy(ptr, &border, 4); ptr += 4;
		memcpy(ptr, &format, 4); ptr += 4;
		memcpy(ptr, &type, 4); ptr += 4;
	stream->flush();
	stream->writeFully(&__size_pixels,4);
	if (pixels != NULL) stream->writeFully(pixels, __size_pixels);
}

void glTexParameteri_enc(void *self , GLenum target, GLenum pname, GLint param)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glTexParameteri;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
		memcpy(ptr, &param, 4); ptr += 4;
}

void glTexParameterx_enc(void *self , GLenum target, GLenum pname, GLfixed param)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glTexParameterx;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
		memcpy(ptr, &param, 4); ptr += 4;
}

void glTexParameteriv_enc(void *self , GLenum target, GLenum pname, const GLint* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLint));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glTexParameteriv;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	memcpy(ptr, params, __size_params);ptr += __size_params;
}

void glTexParameterxv_enc(void *self , GLenum target, GLenum pname, const GLfixed* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfixed));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glTexParameterxv;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	memcpy(ptr, params, __size_params);ptr += __size_params;
}

void glTexSubImage2D_enc(void *self , GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_pixels =  pixelDataSize(self, width, height, format, type, 0);
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + __size_pixels + 1*4;
	ptr = stream->alloc(8 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4);
	int tmp = OP_glTexSubImage2D;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &level, 4); ptr += 4;
		memcpy(ptr, &xoffset, 4); ptr += 4;
		memcpy(ptr, &yoffset, 4); ptr += 4;
		memcpy(ptr, &width, 4); ptr += 4;
		memcpy(ptr, &height, 4); ptr += 4;
		memcpy(ptr, &format, 4); ptr += 4;
		memcpy(ptr, &type, 4); ptr += 4;
	stream->flush();
	stream->writeFully(&__size_pixels,4);
	stream->writeFully(pixels, __size_pixels);
}

void glTranslatex_enc(void *self , GLfixed x, GLfixed y, GLfixed z)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glTranslatex;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &x, 4); ptr += 4;
		memcpy(ptr, &y, 4); ptr += 4;
		memcpy(ptr, &z, 4); ptr += 4;
}

void glViewport_enc(void *self , GLint x, GLint y, GLsizei width, GLsizei height)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glViewport;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &x, 4); ptr += 4;
		memcpy(ptr, &y, 4); ptr += 4;
		memcpy(ptr, &width, 4); ptr += 4;
		memcpy(ptr, &height, 4); ptr += 4;
}

void glVertexPointerOffset_enc(void *self , GLint size, GLenum type, GLsizei stride, GLuint offset)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glVertexPointerOffset;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &size, 4); ptr += 4;
		memcpy(ptr, &type, 4); ptr += 4;
		memcpy(ptr, &stride, 4); ptr += 4;
		memcpy(ptr, &offset, 4); ptr += 4;
}

void glColorPointerOffset_enc(void *self , GLint size, GLenum type, GLsizei stride, GLuint offset)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glColorPointerOffset;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &size, 4); ptr += 4;
		memcpy(ptr, &type, 4); ptr += 4;
		memcpy(ptr, &stride, 4); ptr += 4;
		memcpy(ptr, &offset, 4); ptr += 4;
}

void glNormalPointerOffset_enc(void *self , GLenum type, GLsizei stride, GLuint offset)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glNormalPointerOffset;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &type, 4); ptr += 4;
		memcpy(ptr, &stride, 4); ptr += 4;
		memcpy(ptr, &offset, 4); ptr += 4;
}

void glPointSizePointerOffset_enc(void *self , GLenum type, GLsizei stride, GLuint offset)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glPointSizePointerOffset;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &type, 4); ptr += 4;
		memcpy(ptr, &stride, 4); ptr += 4;
		memcpy(ptr, &offset, 4); ptr += 4;
}

void glTexCoordPointerOffset_enc(void *self , GLint size, GLenum type, GLsizei stride, GLuint offset)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glTexCoordPointerOffset;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &size, 4); ptr += 4;
		memcpy(ptr, &type, 4); ptr += 4;
		memcpy(ptr, &stride, 4); ptr += 4;
		memcpy(ptr, &offset, 4); ptr += 4;
}

void glWeightPointerOffset_enc(void *self , GLint size, GLenum type, GLsizei stride, GLuint offset)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glWeightPointerOffset;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &size, 4); ptr += 4;
		memcpy(ptr, &type, 4); ptr += 4;
		memcpy(ptr, &stride, 4); ptr += 4;
		memcpy(ptr, &offset, 4); ptr += 4;
}

void glMatrixIndexPointerOffset_enc(void *self , GLint size, GLenum type, GLsizei stride, GLuint offset)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glMatrixIndexPointerOffset;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &size, 4); ptr += 4;
		memcpy(ptr, &type, 4); ptr += 4;
		memcpy(ptr, &stride, 4); ptr += 4;
		memcpy(ptr, &offset, 4); ptr += 4;
}

void glVertexPointerData_enc(void *self , GLint size, GLenum type, GLsizei stride, void* data, GLuint datalen)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_data =  datalen;
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + __size_data + 4 + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glVertexPointerData;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &size, 4); ptr += 4;
		memcpy(ptr, &type, 4); ptr += 4;
		memcpy(ptr, &stride, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_data; ptr += 4;
	 glUtilsPackPointerData((unsigned char *)ptr, (unsigned char *)data, size, type, stride, datalen);ptr += __size_data;
		memcpy(ptr, &datalen, 4); ptr += 4;
}

void glColorPointerData_enc(void *self , GLint size, GLenum type, GLsizei stride, void* data, GLuint datalen)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_data =  datalen;
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + __size_data + 4 + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glColorPointerData;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &size, 4); ptr += 4;
		memcpy(ptr, &type, 4); ptr += 4;
		memcpy(ptr, &stride, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_data; ptr += 4;
	 glUtilsPackPointerData((unsigned char *)ptr, (unsigned char *)data, size, type, stride, datalen);ptr += __size_data;
		memcpy(ptr, &datalen, 4); ptr += 4;
}

void glNormalPointerData_enc(void *self , GLenum type, GLsizei stride, void* data, GLuint datalen)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_data =  datalen;
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + __size_data + 4 + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glNormalPointerData;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &type, 4); ptr += 4;
		memcpy(ptr, &stride, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_data; ptr += 4;
	 glUtilsPackPointerData((unsigned char *)ptr, (unsigned char *)data, 3, type, stride, datalen);ptr += __size_data;
		memcpy(ptr, &datalen, 4); ptr += 4;
}

void glTexCoordPointerData_enc(void *self , GLint unit, GLint size, GLenum type, GLsizei stride, void* data, GLuint datalen)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_data =  datalen;
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4 + __size_data + 4 + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glTexCoordPointerData;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &unit, 4); ptr += 4;
		memcpy(ptr, &size, 4); ptr += 4;
		memcpy(ptr, &type, 4); ptr += 4;
		memcpy(ptr, &stride, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_data; ptr += 4;
	 glUtilsPackPointerData((unsigned char *)ptr, (unsigned char *)data, size, type, stride, datalen);ptr += __size_data;
		memcpy(ptr, &datalen, 4); ptr += 4;
}

void glPointSizePointerData_enc(void *self , GLenum type, GLsizei stride, void* data, GLuint datalen)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_data =  datalen;
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + __size_data + 4 + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glPointSizePointerData;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &type, 4); ptr += 4;
		memcpy(ptr, &stride, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_data; ptr += 4;
	 glUtilsPackPointerData((unsigned char *)ptr, (unsigned char *)data, 1, type, stride, datalen);ptr += __size_data;
		memcpy(ptr, &datalen, 4); ptr += 4;
}

void glWeightPointerData_enc(void *self , GLint size, GLenum type, GLsizei stride, void* data, GLuint datalen)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_data =  datalen;
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + __size_data + 4 + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glWeightPointerData;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &size, 4); ptr += 4;
		memcpy(ptr, &type, 4); ptr += 4;
		memcpy(ptr, &stride, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_data; ptr += 4;
	 glUtilsPackPointerData((unsigned char *)ptr, (unsigned char*)data, size, type, stride, datalen);ptr += __size_data;
		memcpy(ptr, &datalen, 4); ptr += 4;
}

void glMatrixIndexPointerData_enc(void *self , GLint size, GLenum type, GLsizei stride, void* data, GLuint datalen)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_data =  datalen;
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + __size_data + 4 + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glMatrixIndexPointerData;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &size, 4); ptr += 4;
		memcpy(ptr, &type, 4); ptr += 4;
		memcpy(ptr, &stride, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_data; ptr += 4;
	 glUtilsPackPointerData((unsigned char *)ptr, (unsigned char*)data, size, type, stride, datalen);ptr += __size_data;
		memcpy(ptr, &datalen, 4); ptr += 4;
}

void glDrawElementsOffset_enc(void *self , GLenum mode, GLsizei count, GLenum type, GLuint offset)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glDrawElementsOffset;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &mode, 4); ptr += 4;
		memcpy(ptr, &count, 4); ptr += 4;
		memcpy(ptr, &type, 4); ptr += 4;
		memcpy(ptr, &offset, 4); ptr += 4;
}

void glDrawElementsData_enc(void *self , GLenum mode, GLsizei count, GLenum type, void* data, GLuint datalen)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_data =  datalen;
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + __size_data + 4 + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glDrawElementsData;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &mode, 4); ptr += 4;
		memcpy(ptr, &count, 4); ptr += 4;
		memcpy(ptr, &type, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_data; ptr += 4;
	memcpy(ptr, data, __size_data);ptr += __size_data;
		memcpy(ptr, &datalen, 4); ptr += 4;
}

void glGetCompressedTextureFormats_enc(void *self , int count, GLint* formats)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_formats =  (count * sizeof(GLint));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + __size_formats + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGetCompressedTextureFormats;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &count, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_formats; ptr += 4;
	stream->readback(formats, __size_formats);
}

int glFinishRoundTrip_enc(void *self )
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 0;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glFinishRoundTrip;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;


	int retval;
	stream->readback(&retval, 4);
	return retval;
}

void glBlendEquationSeparateOES_enc(void *self , GLenum modeRGB, GLenum modeAlpha)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glBlendEquationSeparateOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &modeRGB, 4); ptr += 4;
		memcpy(ptr, &modeAlpha, 4); ptr += 4;
}

void glBlendFuncSeparateOES_enc(void *self , GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glBlendFuncSeparateOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &srcRGB, 4); ptr += 4;
		memcpy(ptr, &dstRGB, 4); ptr += 4;
		memcpy(ptr, &srcAlpha, 4); ptr += 4;
		memcpy(ptr, &dstAlpha, 4); ptr += 4;
}

void glBlendEquationOES_enc(void *self , GLenum mode)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glBlendEquationOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &mode, 4); ptr += 4;
}

void glDrawTexsOES_enc(void *self , GLshort x, GLshort y, GLshort z, GLshort width, GLshort height)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 2 + 2 + 2 + 2 + 2;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glDrawTexsOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &x, 2); ptr += 2;
		memcpy(ptr, &y, 2); ptr += 2;
		memcpy(ptr, &z, 2); ptr += 2;
		memcpy(ptr, &width, 2); ptr += 2;
		memcpy(ptr, &height, 2); ptr += 2;
}

void glDrawTexiOES_enc(void *self , GLint x, GLint y, GLint z, GLint width, GLint height)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glDrawTexiOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &x, 4); ptr += 4;
		memcpy(ptr, &y, 4); ptr += 4;
		memcpy(ptr, &z, 4); ptr += 4;
		memcpy(ptr, &width, 4); ptr += 4;
		memcpy(ptr, &height, 4); ptr += 4;
}

void glDrawTexxOES_enc(void *self , GLfixed x, GLfixed y, GLfixed z, GLfixed width, GLfixed height)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glDrawTexxOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &x, 4); ptr += 4;
		memcpy(ptr, &y, 4); ptr += 4;
		memcpy(ptr, &z, 4); ptr += 4;
		memcpy(ptr, &width, 4); ptr += 4;
		memcpy(ptr, &height, 4); ptr += 4;
}

void glDrawTexsvOES_enc(void *self , const GLshort* coords)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_coords =  (5 * sizeof(GLshort));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + __size_coords + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glDrawTexsvOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

	*(unsigned int *)(ptr) = __size_coords; ptr += 4;
	memcpy(ptr, coords, __size_coords);ptr += __size_coords;
}

void glDrawTexivOES_enc(void *self , const GLint* coords)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_coords =  (5 * sizeof(GLint));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + __size_coords + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glDrawTexivOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

	*(unsigned int *)(ptr) = __size_coords; ptr += 4;
	memcpy(ptr, coords, __size_coords);ptr += __size_coords;
}

void glDrawTexxvOES_enc(void *self , const GLfixed* coords)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_coords =  (5 * sizeof(GLfixed));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + __size_coords + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glDrawTexxvOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

	*(unsigned int *)(ptr) = __size_coords; ptr += 4;
	memcpy(ptr, coords, __size_coords);ptr += __size_coords;
}

void glDrawTexfOES_enc(void *self , GLfloat x, GLfloat y, GLfloat z, GLfloat width, GLfloat height)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glDrawTexfOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &x, 4); ptr += 4;
		memcpy(ptr, &y, 4); ptr += 4;
		memcpy(ptr, &z, 4); ptr += 4;
		memcpy(ptr, &width, 4); ptr += 4;
		memcpy(ptr, &height, 4); ptr += 4;
}

void glDrawTexfvOES_enc(void *self , const GLfloat* coords)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_coords =  (5 * sizeof(GLfloat));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + __size_coords + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glDrawTexfvOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

	*(unsigned int *)(ptr) = __size_coords; ptr += 4;
	memcpy(ptr, coords, __size_coords);ptr += __size_coords;
}

void glEGLImageTargetTexture2DOES_enc(void *self , GLenum target, GLeglImageOES image)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glEGLImageTargetTexture2DOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &image, 4); ptr += 4;
}

void glEGLImageTargetRenderbufferStorageOES_enc(void *self , GLenum target, GLeglImageOES image)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glEGLImageTargetRenderbufferStorageOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &image, 4); ptr += 4;
}

void glAlphaFuncxOES_enc(void *self , GLenum func, GLclampx ref)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glAlphaFuncxOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &func, 4); ptr += 4;
		memcpy(ptr, &ref, 4); ptr += 4;
}

void glClearColorxOES_enc(void *self , GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glClearColorxOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &red, 4); ptr += 4;
		memcpy(ptr, &green, 4); ptr += 4;
		memcpy(ptr, &blue, 4); ptr += 4;
		memcpy(ptr, &alpha, 4); ptr += 4;
}

void glClearDepthxOES_enc(void *self , GLclampx depth)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glClearDepthxOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &depth, 4); ptr += 4;
}

void glClipPlanexOES_enc(void *self , GLenum plane, const GLfixed* equation)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_equation =  (4 * sizeof(GLfixed));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + __size_equation + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glClipPlanexOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &plane, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_equation; ptr += 4;
	memcpy(ptr, equation, __size_equation);ptr += __size_equation;
}

void glClipPlanexIMG_enc(void *self , GLenum plane, const GLfixed* equation)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_equation =  (4 * sizeof(GLfixed));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + __size_equation + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glClipPlanexIMG;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &plane, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_equation; ptr += 4;
	memcpy(ptr, equation, __size_equation);ptr += __size_equation;
}

void glColor4xOES_enc(void *self , GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glColor4xOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &red, 4); ptr += 4;
		memcpy(ptr, &green, 4); ptr += 4;
		memcpy(ptr, &blue, 4); ptr += 4;
		memcpy(ptr, &alpha, 4); ptr += 4;
}

void glDepthRangexOES_enc(void *self , GLclampx zNear, GLclampx zFar)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glDepthRangexOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &zNear, 4); ptr += 4;
		memcpy(ptr, &zFar, 4); ptr += 4;
}

void glFogxOES_enc(void *self , GLenum pname, GLfixed param)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glFogxOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &pname, 4); ptr += 4;
		memcpy(ptr, &param, 4); ptr += 4;
}

void glFogxvOES_enc(void *self , GLenum pname, const GLfixed* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfixed));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glFogxvOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	memcpy(ptr, params, __size_params);ptr += __size_params;
}

void glFrustumxOES_enc(void *self , GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glFrustumxOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &left, 4); ptr += 4;
		memcpy(ptr, &right, 4); ptr += 4;
		memcpy(ptr, &bottom, 4); ptr += 4;
		memcpy(ptr, &top, 4); ptr += 4;
		memcpy(ptr, &zNear, 4); ptr += 4;
		memcpy(ptr, &zFar, 4); ptr += 4;
}

void glGetClipPlanexOES_enc(void *self , GLenum pname, GLfixed* eqn)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_eqn =  (4 * sizeof(GLfixed));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + __size_eqn + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGetClipPlanexOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_eqn; ptr += 4;
	stream->readback(eqn, __size_eqn);
}

void glGetClipPlanex_enc(void *self , GLenum pname, GLfixed* eqn)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_eqn =  (4 * sizeof(GLfixed));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + __size_eqn + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGetClipPlanex;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_eqn; ptr += 4;
	stream->readback(eqn, __size_eqn);
}

void glGetFixedvOES_enc(void *self , GLenum pname, GLfixed* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfixed));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGetFixedvOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	stream->readback(params, __size_params);
}

void glGetLightxvOES_enc(void *self , GLenum light, GLenum pname, GLfixed* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfixed));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGetLightxvOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &light, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	stream->readback(params, __size_params);
}

void glGetMaterialxvOES_enc(void *self , GLenum face, GLenum pname, GLfixed* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfixed));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGetMaterialxvOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &face, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	stream->readback(params, __size_params);
}

void glGetTexEnvxvOES_enc(void *self , GLenum env, GLenum pname, GLfixed* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfixed));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGetTexEnvxvOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &env, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	stream->readback(params, __size_params);
}

void glGetTexParameterxvOES_enc(void *self , GLenum target, GLenum pname, GLfixed* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfixed));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGetTexParameterxvOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	stream->readback(params, __size_params);
}

void glLightModelxOES_enc(void *self , GLenum pname, GLfixed param)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glLightModelxOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &pname, 4); ptr += 4;
		memcpy(ptr, &param, 4); ptr += 4;
}

void glLightModelxvOES_enc(void *self , GLenum pname, const GLfixed* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfixed));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glLightModelxvOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	memcpy(ptr, params, __size_params);ptr += __size_params;
}

void glLightxOES_enc(void *self , GLenum light, GLenum pname, GLfixed param)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glLightxOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &light, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
		memcpy(ptr, &param, 4); ptr += 4;
}

void glLightxvOES_enc(void *self , GLenum light, GLenum pname, const GLfixed* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfixed));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glLightxvOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &light, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	memcpy(ptr, params, __size_params);ptr += __size_params;
}

void glLineWidthxOES_enc(void *self , GLfixed width)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glLineWidthxOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &width, 4); ptr += 4;
}

void glLoadMatrixxOES_enc(void *self , const GLfixed* m)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_m =  (16 * sizeof(GLfixed));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + __size_m + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glLoadMatrixxOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

	*(unsigned int *)(ptr) = __size_m; ptr += 4;
	memcpy(ptr, m, __size_m);ptr += __size_m;
}

void glMaterialxOES_enc(void *self , GLenum face, GLenum pname, GLfixed param)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glMaterialxOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &face, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
		memcpy(ptr, &param, 4); ptr += 4;
}

void glMaterialxvOES_enc(void *self , GLenum face, GLenum pname, const GLfixed* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfixed));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glMaterialxvOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &face, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	memcpy(ptr, params, __size_params);ptr += __size_params;
}

void glMultMatrixxOES_enc(void *self , const GLfixed* m)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_m =  (16 * sizeof(GLfixed));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + __size_m + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glMultMatrixxOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

	*(unsigned int *)(ptr) = __size_m; ptr += 4;
	memcpy(ptr, m, __size_m);ptr += __size_m;
}

void glMultiTexCoord4xOES_enc(void *self , GLenum target, GLfixed s, GLfixed t, GLfixed r, GLfixed q)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glMultiTexCoord4xOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &s, 4); ptr += 4;
		memcpy(ptr, &t, 4); ptr += 4;
		memcpy(ptr, &r, 4); ptr += 4;
		memcpy(ptr, &q, 4); ptr += 4;
}

void glNormal3xOES_enc(void *self , GLfixed nx, GLfixed ny, GLfixed nz)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glNormal3xOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &nx, 4); ptr += 4;
		memcpy(ptr, &ny, 4); ptr += 4;
		memcpy(ptr, &nz, 4); ptr += 4;
}

void glOrthoxOES_enc(void *self , GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glOrthoxOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &left, 4); ptr += 4;
		memcpy(ptr, &right, 4); ptr += 4;
		memcpy(ptr, &bottom, 4); ptr += 4;
		memcpy(ptr, &top, 4); ptr += 4;
		memcpy(ptr, &zNear, 4); ptr += 4;
		memcpy(ptr, &zFar, 4); ptr += 4;
}

void glPointParameterxOES_enc(void *self , GLenum pname, GLfixed param)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glPointParameterxOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &pname, 4); ptr += 4;
		memcpy(ptr, &param, 4); ptr += 4;
}

void glPointParameterxvOES_enc(void *self , GLenum pname, const GLfixed* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfixed));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glPointParameterxvOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	memcpy(ptr, params, __size_params);ptr += __size_params;
}

void glPointSizexOES_enc(void *self , GLfixed size)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glPointSizexOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &size, 4); ptr += 4;
}

void glPolygonOffsetxOES_enc(void *self , GLfixed factor, GLfixed units)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glPolygonOffsetxOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &factor, 4); ptr += 4;
		memcpy(ptr, &units, 4); ptr += 4;
}

void glRotatexOES_enc(void *self , GLfixed angle, GLfixed x, GLfixed y, GLfixed z)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glRotatexOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &angle, 4); ptr += 4;
		memcpy(ptr, &x, 4); ptr += 4;
		memcpy(ptr, &y, 4); ptr += 4;
		memcpy(ptr, &z, 4); ptr += 4;
}

void glSampleCoveragexOES_enc(void *self , GLclampx value, GLboolean invert)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 1;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glSampleCoveragexOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &value, 4); ptr += 4;
		memcpy(ptr, &invert, 1); ptr += 1;
}

void glScalexOES_enc(void *self , GLfixed x, GLfixed y, GLfixed z)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glScalexOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &x, 4); ptr += 4;
		memcpy(ptr, &y, 4); ptr += 4;
		memcpy(ptr, &z, 4); ptr += 4;
}

void glTexEnvxOES_enc(void *self , GLenum target, GLenum pname, GLfixed param)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glTexEnvxOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
		memcpy(ptr, &param, 4); ptr += 4;
}

void glTexEnvxvOES_enc(void *self , GLenum target, GLenum pname, const GLfixed* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfixed));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glTexEnvxvOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	memcpy(ptr, params, __size_params);ptr += __size_params;
}

void glTexParameterxOES_enc(void *self , GLenum target, GLenum pname, GLfixed param)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glTexParameterxOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
		memcpy(ptr, &param, 4); ptr += 4;
}

void glTexParameterxvOES_enc(void *self , GLenum target, GLenum pname, const GLfixed* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfixed));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glTexParameterxvOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	memcpy(ptr, params, __size_params);ptr += __size_params;
}

void glTranslatexOES_enc(void *self , GLfixed x, GLfixed y, GLfixed z)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glTranslatexOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &x, 4); ptr += 4;
		memcpy(ptr, &y, 4); ptr += 4;
		memcpy(ptr, &z, 4); ptr += 4;
}

GLboolean glIsRenderbufferOES_enc(void *self , GLuint renderbuffer)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glIsRenderbufferOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &renderbuffer, 4); ptr += 4;

	GLboolean retval;
	stream->readback(&retval, 1);
	return retval;
}

void glBindRenderbufferOES_enc(void *self , GLenum target, GLuint renderbuffer)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glBindRenderbufferOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &renderbuffer, 4); ptr += 4;
}

void glDeleteRenderbuffersOES_enc(void *self , GLsizei n, const GLuint* renderbuffers)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_renderbuffers =  (n * sizeof(GLuint));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + __size_renderbuffers + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glDeleteRenderbuffersOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &n, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_renderbuffers; ptr += 4;
	memcpy(ptr, renderbuffers, __size_renderbuffers);ptr += __size_renderbuffers;
}

void glGenRenderbuffersOES_enc(void *self , GLsizei n, GLuint* renderbuffers)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_renderbuffers =  (n * sizeof(GLuint));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + __size_renderbuffers + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGenRenderbuffersOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &n, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_renderbuffers; ptr += 4;
	stream->readback(renderbuffers, __size_renderbuffers);
}

void glRenderbufferStorageOES_enc(void *self , GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glRenderbufferStorageOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &internalformat, 4); ptr += 4;
		memcpy(ptr, &width, 4); ptr += 4;
		memcpy(ptr, &height, 4); ptr += 4;
}

void glGetRenderbufferParameterivOES_enc(void *self , GLenum target, GLenum pname, GLint* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLint));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGetRenderbufferParameterivOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	stream->readback(params, __size_params);
}

GLboolean glIsFramebufferOES_enc(void *self , GLuint framebuffer)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glIsFramebufferOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &framebuffer, 4); ptr += 4;

	GLboolean retval;
	stream->readback(&retval, 1);
	return retval;
}

void glBindFramebufferOES_enc(void *self , GLenum target, GLuint framebuffer)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glBindFramebufferOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &framebuffer, 4); ptr += 4;
}

void glDeleteFramebuffersOES_enc(void *self , GLsizei n, const GLuint* framebuffers)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_framebuffers =  (n * sizeof(GLuint));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + __size_framebuffers + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glDeleteFramebuffersOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &n, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_framebuffers; ptr += 4;
	memcpy(ptr, framebuffers, __size_framebuffers);ptr += __size_framebuffers;
}

void glGenFramebuffersOES_enc(void *self , GLsizei n, GLuint* framebuffers)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_framebuffers =  (n * sizeof(GLuint));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + __size_framebuffers + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGenFramebuffersOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &n, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_framebuffers; ptr += 4;
	stream->readback(framebuffers, __size_framebuffers);
}

GLenum glCheckFramebufferStatusOES_enc(void *self , GLenum target)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glCheckFramebufferStatusOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;

	GLenum retval;
	stream->readback(&retval, 4);
	return retval;
}

void glFramebufferRenderbufferOES_enc(void *self , GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glFramebufferRenderbufferOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &attachment, 4); ptr += 4;
		memcpy(ptr, &renderbuffertarget, 4); ptr += 4;
		memcpy(ptr, &renderbuffer, 4); ptr += 4;
}

void glFramebufferTexture2DOES_enc(void *self , GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glFramebufferTexture2DOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &attachment, 4); ptr += 4;
		memcpy(ptr, &textarget, 4); ptr += 4;
		memcpy(ptr, &texture, 4); ptr += 4;
		memcpy(ptr, &level, 4); ptr += 4;
}

void glGetFramebufferAttachmentParameterivOES_enc(void *self , GLenum target, GLenum attachment, GLenum pname, GLint* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLint));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGetFramebufferAttachmentParameterivOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &attachment, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	stream->readback(params, __size_params);
}

void glGenerateMipmapOES_enc(void *self , GLenum target)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGenerateMipmapOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
}

GLboolean glUnmapBufferOES_enc(void *self , GLenum target)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glUnmapBufferOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;

	GLboolean retval;
	stream->readback(&retval, 1);
	return retval;
}

void glCurrentPaletteMatrixOES_enc(void *self , GLuint matrixpaletteindex)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glCurrentPaletteMatrixOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &matrixpaletteindex, 4); ptr += 4;
}

void glLoadPaletteFromModelViewMatrixOES_enc(void *self )
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 0;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glLoadPaletteFromModelViewMatrixOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

}

GLbitfield glQueryMatrixxOES_enc(void *self , GLfixed* mantissa, GLint* exponent)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_mantissa =  (16 * sizeof(GLfixed));
	const unsigned int __size_exponent =  (16 * sizeof(GLfixed));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + __size_mantissa + __size_exponent + 2*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glQueryMatrixxOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

	*(unsigned int *)(ptr) = __size_mantissa; ptr += 4;
	*(unsigned int *)(ptr) = __size_exponent; ptr += 4;
	stream->readback(mantissa, __size_mantissa);
	stream->readback(exponent, __size_exponent);

	GLbitfield retval;
	stream->readback(&retval, 4);
	return retval;
}

void glDepthRangefOES_enc(void *self , GLclampf zNear, GLclampf zFar)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glDepthRangefOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &zNear, 4); ptr += 4;
		memcpy(ptr, &zFar, 4); ptr += 4;
}

void glFrustumfOES_enc(void *self , GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glFrustumfOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &left, 4); ptr += 4;
		memcpy(ptr, &right, 4); ptr += 4;
		memcpy(ptr, &bottom, 4); ptr += 4;
		memcpy(ptr, &top, 4); ptr += 4;
		memcpy(ptr, &zNear, 4); ptr += 4;
		memcpy(ptr, &zFar, 4); ptr += 4;
}

void glOrthofOES_enc(void *self , GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glOrthofOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &left, 4); ptr += 4;
		memcpy(ptr, &right, 4); ptr += 4;
		memcpy(ptr, &bottom, 4); ptr += 4;
		memcpy(ptr, &top, 4); ptr += 4;
		memcpy(ptr, &zNear, 4); ptr += 4;
		memcpy(ptr, &zFar, 4); ptr += 4;
}

void glClipPlanefOES_enc(void *self , GLenum plane, const GLfloat* equation)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_equation =  (4 * sizeof(GLfloat));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + __size_equation + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glClipPlanefOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &plane, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_equation; ptr += 4;
	memcpy(ptr, equation, __size_equation);ptr += __size_equation;
}

void glClipPlanefIMG_enc(void *self , GLenum plane, const GLfloat* equation)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_equation =  (4 * sizeof(GLfloat));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + __size_equation + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glClipPlanefIMG;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &plane, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_equation; ptr += 4;
	memcpy(ptr, equation, __size_equation);ptr += __size_equation;
}

void glGetClipPlanefOES_enc(void *self , GLenum pname, GLfloat* eqn)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_eqn =  (4 * sizeof(GLfloat));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + __size_eqn + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGetClipPlanefOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_eqn; ptr += 4;
	stream->readback(eqn, __size_eqn);
}

void glClearDepthfOES_enc(void *self , GLclampf depth)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glClearDepthfOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &depth, 4); ptr += 4;
}

void glTexGenfOES_enc(void *self , GLenum coord, GLenum pname, GLfloat param)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glTexGenfOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &coord, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
		memcpy(ptr, &param, 4); ptr += 4;
}

void glTexGenfvOES_enc(void *self , GLenum coord, GLenum pname, const GLfloat* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfloat));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glTexGenfvOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &coord, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	memcpy(ptr, params, __size_params);ptr += __size_params;
}

void glTexGeniOES_enc(void *self , GLenum coord, GLenum pname, GLint param)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glTexGeniOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &coord, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
		memcpy(ptr, &param, 4); ptr += 4;
}

void glTexGenivOES_enc(void *self , GLenum coord, GLenum pname, const GLint* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLint));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glTexGenivOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &coord, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	memcpy(ptr, params, __size_params);ptr += __size_params;
}

void glTexGenxOES_enc(void *self , GLenum coord, GLenum pname, GLfixed param)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glTexGenxOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &coord, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
		memcpy(ptr, &param, 4); ptr += 4;
}

void glTexGenxvOES_enc(void *self , GLenum coord, GLenum pname, const GLfixed* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfixed));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glTexGenxvOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &coord, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	memcpy(ptr, params, __size_params);ptr += __size_params;
}

void glGetTexGenfvOES_enc(void *self , GLenum coord, GLenum pname, GLfloat* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfloat));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGetTexGenfvOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &coord, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	memcpy(ptr, params, __size_params);ptr += __size_params;
}

void glGetTexGenivOES_enc(void *self , GLenum coord, GLenum pname, GLint* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLint));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGetTexGenivOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &coord, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	memcpy(ptr, params, __size_params);ptr += __size_params;
}

void glGetTexGenxvOES_enc(void *self , GLenum coord, GLenum pname, GLfixed* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLfixed));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGetTexGenxvOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &coord, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	memcpy(ptr, params, __size_params);ptr += __size_params;
}

void glBindVertexArrayOES_enc(void *self , GLuint array)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glBindVertexArrayOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &array, 4); ptr += 4;
}

void glDeleteVertexArraysOES_enc(void *self , GLsizei n, const GLuint* arrays)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_arrays =  (n * sizeof(GLuint));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + __size_arrays + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glDeleteVertexArraysOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &n, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_arrays; ptr += 4;
	memcpy(ptr, arrays, __size_arrays);ptr += __size_arrays;
}

void glGenVertexArraysOES_enc(void *self , GLsizei n, GLuint* arrays)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_arrays =  (n * sizeof(GLuint));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + __size_arrays + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGenVertexArraysOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &n, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_arrays; ptr += 4;
	stream->readback(arrays, __size_arrays);
}

GLboolean glIsVertexArrayOES_enc(void *self , GLuint array)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glIsVertexArrayOES;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &array, 4); ptr += 4;

	GLboolean retval;
	stream->readback(&retval, 1);
	return retval;
}

void glDiscardFramebufferEXT_enc(void *self , GLenum target, GLsizei numAttachments, const GLenum* attachments)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_attachments =  (numAttachments * sizeof(const GLenum));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + __size_attachments + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glDiscardFramebufferEXT;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &numAttachments, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_attachments; ptr += 4;
	memcpy(ptr, attachments, __size_attachments);ptr += __size_attachments;
}

void glRenderbufferStorageMultisampleIMG_enc(void *self , GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glRenderbufferStorageMultisampleIMG;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &samples, 4); ptr += 4;
		memcpy(ptr, &internalformat, 4); ptr += 4;
		memcpy(ptr, &width, 4); ptr += 4;
		memcpy(ptr, &height, 4); ptr += 4;
}

void glFramebufferTexture2DMultisampleIMG_enc(void *self , GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glFramebufferTexture2DMultisampleIMG;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &attachment, 4); ptr += 4;
		memcpy(ptr, &textarget, 4); ptr += 4;
		memcpy(ptr, &texture, 4); ptr += 4;
		memcpy(ptr, &level, 4); ptr += 4;
		memcpy(ptr, &samples, 4); ptr += 4;
}

void glDeleteFencesNV_enc(void *self , GLsizei n, const GLuint* fences)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_fences =  (n * sizeof(GLuint));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + __size_fences + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glDeleteFencesNV;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &n, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_fences; ptr += 4;
	memcpy(ptr, fences, __size_fences);ptr += __size_fences;
}

void glGenFencesNV_enc(void *self , GLsizei n, GLuint* fences)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_fences =  (n * sizeof(GLuint));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + __size_fences + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGenFencesNV;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &n, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_fences; ptr += 4;
	memcpy(ptr, fences, __size_fences);ptr += __size_fences;
}

GLboolean glIsFenceNV_enc(void *self , GLuint fence)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glIsFenceNV;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &fence, 4); ptr += 4;

	GLboolean retval;
	stream->readback(&retval, 1);
	return retval;
}

GLboolean glTestFenceNV_enc(void *self , GLuint fence)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glTestFenceNV;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &fence, 4); ptr += 4;

	GLboolean retval;
	stream->readback(&retval, 1);
	return retval;
}

void glGetFenceivNV_enc(void *self , GLuint fence, GLenum pname, GLint* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLint));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGetFenceivNV;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &fence, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	stream->readback(params, __size_params);
}

void glFinishFenceNV_enc(void *self , GLuint fence)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glFinishFenceNV;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &fence, 4); ptr += 4;
}

void glSetFenceNV_enc(void *self , GLuint fence, GLenum condition)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glSetFenceNV;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &fence, 4); ptr += 4;
		memcpy(ptr, &condition, 4); ptr += 4;
}

void glGetDriverControlsQCOM_enc(void *self , GLint* num, GLsizei size, GLuint* driverControls)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_num =  (1 * sizeof(GLint));
	const unsigned int __size_driverControls =  (size * sizeof(GLuint));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + __size_num + 4 + __size_driverControls + 2*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGetDriverControlsQCOM;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

	*(unsigned int *)(ptr) = __size_num; ptr += 4;
		memcpy(ptr, &size, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_driverControls; ptr += 4;
	stream->readback(num, __size_num);
	stream->readback(driverControls, __size_driverControls);
}

void glGetDriverControlStringQCOM_enc(void *self , GLuint driverControl, GLsizei bufSize, GLsizei* length, GLchar* driverControlString)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_length =  (1 * sizeof(GLsizei));
	const unsigned int __size_driverControlString =  (1 * sizeof(GLchar));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + __size_length + __size_driverControlString + 2*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glGetDriverControlStringQCOM;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &driverControl, 4); ptr += 4;
		memcpy(ptr, &bufSize, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_length; ptr += 4;
	*(unsigned int *)(ptr) = __size_driverControlString; ptr += 4;
	stream->readback(length, __size_length);
	stream->readback(driverControlString, __size_driverControlString);
}

void glEnableDriverControlQCOM_enc(void *self , GLuint driverControl)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glEnableDriverControlQCOM;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &driverControl, 4); ptr += 4;
}

void glDisableDriverControlQCOM_enc(void *self , GLuint driverControl)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glDisableDriverControlQCOM;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &driverControl, 4); ptr += 4;
}

void glExtGetTexturesQCOM_enc(void *self , GLuint* textures, GLint maxTextures, GLint* numTextures)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_textures =  (maxTextures * sizeof(GLuint));
	const unsigned int __size_numTextures =  (1 * sizeof(GLint));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + __size_textures + 4 + __size_numTextures + 2*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glExtGetTexturesQCOM;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

	*(unsigned int *)(ptr) = __size_textures; ptr += 4;
		memcpy(ptr, &maxTextures, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_numTextures; ptr += 4;
	stream->readback(textures, __size_textures);
	stream->readback(numTextures, __size_numTextures);
}

void glExtGetBuffersQCOM_enc(void *self , GLuint* buffers, GLint maxBuffers, GLint* numBuffers)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_buffers =  (maxBuffers * sizeof(GLuint));
	const unsigned int __size_numBuffers =  (1 * sizeof(GLint));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + __size_buffers + 4 + __size_numBuffers + 2*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glExtGetBuffersQCOM;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

	*(unsigned int *)(ptr) = __size_buffers; ptr += 4;
		memcpy(ptr, &maxBuffers, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_numBuffers; ptr += 4;
	stream->readback(buffers, __size_buffers);
	stream->readback(numBuffers, __size_numBuffers);
}

void glExtGetRenderbuffersQCOM_enc(void *self , GLuint* renderbuffers, GLint maxRenderbuffers, GLint* numRenderbuffers)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_renderbuffers =  (maxRenderbuffers * sizeof(GLuint));
	const unsigned int __size_numRenderbuffers =  (1 * sizeof(GLint));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + __size_renderbuffers + 4 + __size_numRenderbuffers + 2*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glExtGetRenderbuffersQCOM;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

	*(unsigned int *)(ptr) = __size_renderbuffers; ptr += 4;
		memcpy(ptr, &maxRenderbuffers, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_numRenderbuffers; ptr += 4;
	stream->readback(renderbuffers, __size_renderbuffers);
	stream->readback(numRenderbuffers, __size_numRenderbuffers);
}

void glExtGetFramebuffersQCOM_enc(void *self , GLuint* framebuffers, GLint maxFramebuffers, GLint* numFramebuffers)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_framebuffers =  (maxFramebuffers * sizeof(GLuint));
	const unsigned int __size_numFramebuffers =  (1 * sizeof(GLint));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + __size_framebuffers + 4 + __size_numFramebuffers + 2*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glExtGetFramebuffersQCOM;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

	*(unsigned int *)(ptr) = __size_framebuffers; ptr += 4;
		memcpy(ptr, &maxFramebuffers, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_numFramebuffers; ptr += 4;
	stream->readback(framebuffers, __size_framebuffers);
	stream->readback(numFramebuffers, __size_numFramebuffers);
}

void glExtGetTexLevelParameterivQCOM_enc(void *self , GLuint texture, GLenum face, GLint level, GLenum pname, GLint* params)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_params =  (glUtilsParamSize(pname) * sizeof(GLint));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4 + __size_params + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glExtGetTexLevelParameterivQCOM;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &texture, 4); ptr += 4;
		memcpy(ptr, &face, 4); ptr += 4;
		memcpy(ptr, &level, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_params; ptr += 4;
	stream->readback(params, __size_params);
}

void glExtTexObjectStateOverrideiQCOM_enc(void *self , GLenum target, GLenum pname, GLint param)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glExtTexObjectStateOverrideiQCOM;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &pname, 4); ptr += 4;
		memcpy(ptr, &param, 4); ptr += 4;
}

void glExtGetTexSubImageQCOM_enc(void *self , GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLvoid* texels)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_texels =  (depth * pixelDataSize(self, width, height, format, type, 0));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + __size_texels + 1*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glExtGetTexSubImageQCOM;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &target, 4); ptr += 4;
		memcpy(ptr, &level, 4); ptr += 4;
		memcpy(ptr, &xoffset, 4); ptr += 4;
		memcpy(ptr, &yoffset, 4); ptr += 4;
		memcpy(ptr, &zoffset, 4); ptr += 4;
		memcpy(ptr, &width, 4); ptr += 4;
		memcpy(ptr, &height, 4); ptr += 4;
		memcpy(ptr, &depth, 4); ptr += 4;
		memcpy(ptr, &format, 4); ptr += 4;
		memcpy(ptr, &type, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_texels; ptr += 4;
	stream->readback(texels, __size_texels);
}

void glExtGetShadersQCOM_enc(void *self , GLuint* shaders, GLint maxShaders, GLint* numShaders)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_shaders =  (maxShaders * sizeof(GLuint));
	const unsigned int __size_numShaders =  (1 * sizeof(GLint));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + __size_shaders + 4 + __size_numShaders + 2*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glExtGetShadersQCOM;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

	*(unsigned int *)(ptr) = __size_shaders; ptr += 4;
		memcpy(ptr, &maxShaders, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_numShaders; ptr += 4;
	stream->readback(shaders, __size_shaders);
	stream->readback(numShaders, __size_numShaders);
}

void glExtGetProgramsQCOM_enc(void *self , GLuint* programs, GLint maxPrograms, GLint* numPrograms)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	const unsigned int __size_programs =  (maxPrograms * sizeof(GLuint));
	const unsigned int __size_numPrograms =  (1 * sizeof(GLint));
	 unsigned char *ptr;
	 const size_t packetSize = 8 + __size_programs + 4 + __size_numPrograms + 2*4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glExtGetProgramsQCOM;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

	*(unsigned int *)(ptr) = __size_programs; ptr += 4;
		memcpy(ptr, &maxPrograms, 4); ptr += 4;
	*(unsigned int *)(ptr) = __size_numPrograms; ptr += 4;
	stream->readback(programs, __size_programs);
	stream->readback(numPrograms, __size_numPrograms);
}

GLboolean glExtIsProgramBinaryQCOM_enc(void *self , GLuint program)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glExtIsProgramBinaryQCOM;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &program, 4); ptr += 4;

	GLboolean retval;
	stream->readback(&retval, 1);
	return retval;
}

void glStartTilingQCOM_enc(void *self , GLuint x, GLuint y, GLuint width, GLuint height, GLbitfield preserveMask)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4 + 4 + 4 + 4 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glStartTilingQCOM;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &x, 4); ptr += 4;
		memcpy(ptr, &y, 4); ptr += 4;
		memcpy(ptr, &width, 4); ptr += 4;
		memcpy(ptr, &height, 4); ptr += 4;
		memcpy(ptr, &preserveMask, 4); ptr += 4;
}

void glEndTilingQCOM_enc(void *self , GLbitfield preserveMask)
{

	gl_encoder_context_t *ctx = (gl_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;

	 unsigned char *ptr;
	 const size_t packetSize = 8 + 4;
	ptr = stream->alloc(packetSize);
	int tmp = OP_glEndTilingQCOM;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &packetSize, 4);  ptr += 4;

		memcpy(ptr, &preserveMask, 4); ptr += 4;
}

gl_encoder_context_t::gl_encoder_context_t(IOStream *stream)
{
    LOGE("gl_encoder_context_t::gl_encoder_context_t");
	m_stream = stream;

	set_glAlphaFunc(glAlphaFunc_enc);
	set_glClearColor(glClearColor_enc);
	set_glClearDepthf(glClearDepthf_enc);
	set_glClipPlanef(glClipPlanef_enc);
	set_glColor4f(glColor4f_enc);
	set_glDepthRangef(glDepthRangef_enc);
	set_glFogf(glFogf_enc);
	set_glFogfv(glFogfv_enc);
	set_glFrustumf(glFrustumf_enc);
	set_glGetClipPlanef(glGetClipPlanef_enc);
	set_glGetFloatv(glGetFloatv_enc);
	set_glGetLightfv(glGetLightfv_enc);
	set_glGetMaterialfv(glGetMaterialfv_enc);
	set_glGetTexEnvfv(glGetTexEnvfv_enc);
	set_glGetTexParameterfv(glGetTexParameterfv_enc);
	set_glLightModelf(glLightModelf_enc);
	set_glLightModelfv(glLightModelfv_enc);
	set_glLightf(glLightf_enc);
	set_glLightfv(glLightfv_enc);
	set_glLineWidth(glLineWidth_enc);
	set_glLoadMatrixf(glLoadMatrixf_enc);
	set_glMaterialf(glMaterialf_enc);
	set_glMaterialfv(glMaterialfv_enc);
	set_glMultMatrixf(glMultMatrixf_enc);
	set_glMultiTexCoord4f(glMultiTexCoord4f_enc);
	set_glNormal3f(glNormal3f_enc);
	set_glOrthof(glOrthof_enc);
	set_glPointParameterf(glPointParameterf_enc);
	set_glPointParameterfv(glPointParameterfv_enc);
	set_glPointSize(glPointSize_enc);
	set_glPolygonOffset(glPolygonOffset_enc);
	set_glRotatef(glRotatef_enc);
	set_glScalef(glScalef_enc);
	set_glTexEnvf(glTexEnvf_enc);
	set_glTexEnvfv(glTexEnvfv_enc);
	set_glTexParameterf(glTexParameterf_enc);
	set_glTexParameterfv(glTexParameterfv_enc);
	set_glTranslatef(glTranslatef_enc);
	set_glActiveTexture(glActiveTexture_enc);
	set_glAlphaFuncx(glAlphaFuncx_enc);
	set_glBindBuffer(glBindBuffer_enc);
	set_glBindTexture(glBindTexture_enc);
	set_glBlendFunc(glBlendFunc_enc);
	set_glBufferData(glBufferData_enc);
	set_glBufferSubData(glBufferSubData_enc);
	set_glClear(glClear_enc);
	set_glClearColorx(glClearColorx_enc);
	set_glClearDepthx(glClearDepthx_enc);
	set_glClearStencil(glClearStencil_enc);
	set_glClientActiveTexture(glClientActiveTexture_enc);
	set_glColor4ub(glColor4ub_enc);
	set_glColor4x(glColor4x_enc);
	set_glColorMask(glColorMask_enc);
	set_glColorPointer((glColorPointer_client_proc_t)(enc_unsupported));
	set_glCompressedTexImage2D(glCompressedTexImage2D_enc);
	set_glCompressedTexSubImage2D(glCompressedTexSubImage2D_enc);
	set_glCopyTexImage2D(glCopyTexImage2D_enc);
	set_glCopyTexSubImage2D(glCopyTexSubImage2D_enc);
	set_glCullFace(glCullFace_enc);
	set_glDeleteBuffers(glDeleteBuffers_enc);
	set_glDeleteTextures(glDeleteTextures_enc);
	set_glDepthFunc(glDepthFunc_enc);
	set_glDepthMask(glDepthMask_enc);
	set_glDepthRangex(glDepthRangex_enc);
	set_glDisable(glDisable_enc);
	set_glDisableClientState(glDisableClientState_enc);
	set_glDrawArrays(glDrawArrays_enc);
	set_glDrawElements((glDrawElements_client_proc_t)(enc_unsupported));
	set_glEnable(glEnable_enc);
	set_glEnableClientState(glEnableClientState_enc);
	set_glFinish(glFinish_enc);
	set_glFlush(glFlush_enc);
	set_glFogx(glFogx_enc);
	set_glFogxv(glFogxv_enc);
	set_glFrontFace(glFrontFace_enc);
	set_glFrustumx(glFrustumx_enc);
	set_glGetBooleanv(glGetBooleanv_enc);
	set_glGetBufferParameteriv(glGetBufferParameteriv_enc);
	set_glClipPlanex(glClipPlanex_enc);
	set_glGenBuffers(glGenBuffers_enc);
	set_glGenTextures(glGenTextures_enc);
	set_glGetError(glGetError_enc);
	set_glGetFixedv(glGetFixedv_enc);
	set_glGetIntegerv(glGetIntegerv_enc);
	set_glGetLightxv(glGetLightxv_enc);
	set_glGetMaterialxv(glGetMaterialxv_enc);
	set_glGetPointerv((glGetPointerv_client_proc_t)(enc_unsupported));
	set_glGetString((glGetString_client_proc_t)(enc_unsupported));
	set_glGetTexEnviv(glGetTexEnviv_enc);
	set_glGetTexEnvxv(glGetTexEnvxv_enc);
	set_glGetTexParameteriv(glGetTexParameteriv_enc);
	set_glGetTexParameterxv(glGetTexParameterxv_enc);
	set_glHint(glHint_enc);
	set_glIsBuffer(glIsBuffer_enc);
	set_glIsEnabled(glIsEnabled_enc);
	set_glIsTexture(glIsTexture_enc);
	set_glLightModelx(glLightModelx_enc);
	set_glLightModelxv(glLightModelxv_enc);
	set_glLightx(glLightx_enc);
	set_glLightxv(glLightxv_enc);
	set_glLineWidthx(glLineWidthx_enc);
	set_glLoadIdentity(glLoadIdentity_enc);
	set_glLoadMatrixx(glLoadMatrixx_enc);
	set_glLogicOp(glLogicOp_enc);
	set_glMaterialx(glMaterialx_enc);
	set_glMaterialxv(glMaterialxv_enc);
	set_glMatrixMode(glMatrixMode_enc);
	set_glMultMatrixx(glMultMatrixx_enc);
	set_glMultiTexCoord4x(glMultiTexCoord4x_enc);
	set_glNormal3x(glNormal3x_enc);
	set_glNormalPointer((glNormalPointer_client_proc_t)(enc_unsupported));
	set_glOrthox(glOrthox_enc);
	set_glPixelStorei(glPixelStorei_enc);
	set_glPointParameterx(glPointParameterx_enc);
	set_glPointParameterxv(glPointParameterxv_enc);
	set_glPointSizex(glPointSizex_enc);
	set_glPolygonOffsetx(glPolygonOffsetx_enc);
	set_glPopMatrix(glPopMatrix_enc);
	set_glPushMatrix(glPushMatrix_enc);
	set_glReadPixels(glReadPixels_enc);
	set_glRotatex(glRotatex_enc);
	set_glSampleCoverage(glSampleCoverage_enc);
	set_glSampleCoveragex(glSampleCoveragex_enc);
	set_glScalex(glScalex_enc);
	set_glScissor(glScissor_enc);
	set_glShadeModel(glShadeModel_enc);
	set_glStencilFunc(glStencilFunc_enc);
	set_glStencilMask(glStencilMask_enc);
	set_glStencilOp(glStencilOp_enc);
	set_glTexCoordPointer((glTexCoordPointer_client_proc_t)(enc_unsupported));
	set_glTexEnvi(glTexEnvi_enc);
	set_glTexEnvx(glTexEnvx_enc);
	set_glTexEnviv(glTexEnviv_enc);
	set_glTexEnvxv(glTexEnvxv_enc);
	set_glTexImage2D(glTexImage2D_enc);
	set_glTexParameteri(glTexParameteri_enc);
	set_glTexParameterx(glTexParameterx_enc);
	set_glTexParameteriv(glTexParameteriv_enc);
	set_glTexParameterxv(glTexParameterxv_enc);
	set_glTexSubImage2D(glTexSubImage2D_enc);
	set_glTranslatex(glTranslatex_enc);
	set_glVertexPointer((glVertexPointer_client_proc_t)(enc_unsupported));
	set_glViewport(glViewport_enc);
	set_glPointSizePointerOES((glPointSizePointerOES_client_proc_t)(enc_unsupported));
	set_glVertexPointerOffset(glVertexPointerOffset_enc);
	set_glColorPointerOffset(glColorPointerOffset_enc);
	set_glNormalPointerOffset(glNormalPointerOffset_enc);
	set_glPointSizePointerOffset(glPointSizePointerOffset_enc);
	set_glTexCoordPointerOffset(glTexCoordPointerOffset_enc);
	set_glWeightPointerOffset(glWeightPointerOffset_enc);
	set_glMatrixIndexPointerOffset(glMatrixIndexPointerOffset_enc);
	set_glVertexPointerData(glVertexPointerData_enc);
	set_glColorPointerData(glColorPointerData_enc);
	set_glNormalPointerData(glNormalPointerData_enc);
	set_glTexCoordPointerData(glTexCoordPointerData_enc);
	set_glPointSizePointerData(glPointSizePointerData_enc);
	set_glWeightPointerData(glWeightPointerData_enc);
	set_glMatrixIndexPointerData(glMatrixIndexPointerData_enc);
	set_glDrawElementsOffset(glDrawElementsOffset_enc);
	set_glDrawElementsData(glDrawElementsData_enc);
	set_glGetCompressedTextureFormats(glGetCompressedTextureFormats_enc);
	set_glFinishRoundTrip(glFinishRoundTrip_enc);
	set_glBlendEquationSeparateOES(glBlendEquationSeparateOES_enc);
	set_glBlendFuncSeparateOES(glBlendFuncSeparateOES_enc);
	set_glBlendEquationOES(glBlendEquationOES_enc);
	set_glDrawTexsOES(glDrawTexsOES_enc);
	set_glDrawTexiOES(glDrawTexiOES_enc);
	set_glDrawTexxOES(glDrawTexxOES_enc);
	set_glDrawTexsvOES(glDrawTexsvOES_enc);
	set_glDrawTexivOES(glDrawTexivOES_enc);
	set_glDrawTexxvOES(glDrawTexxvOES_enc);
	set_glDrawTexfOES(glDrawTexfOES_enc);
	set_glDrawTexfvOES(glDrawTexfvOES_enc);
	set_glEGLImageTargetTexture2DOES(glEGLImageTargetTexture2DOES_enc);
	set_glEGLImageTargetRenderbufferStorageOES(glEGLImageTargetRenderbufferStorageOES_enc);
	set_glAlphaFuncxOES(glAlphaFuncxOES_enc);
	set_glClearColorxOES(glClearColorxOES_enc);
	set_glClearDepthxOES(glClearDepthxOES_enc);
	set_glClipPlanexOES(glClipPlanexOES_enc);
	set_glClipPlanexIMG(glClipPlanexIMG_enc);
	set_glColor4xOES(glColor4xOES_enc);
	set_glDepthRangexOES(glDepthRangexOES_enc);
	set_glFogxOES(glFogxOES_enc);
	set_glFogxvOES(glFogxvOES_enc);
	set_glFrustumxOES(glFrustumxOES_enc);
	set_glGetClipPlanexOES(glGetClipPlanexOES_enc);
	set_glGetClipPlanex(glGetClipPlanex_enc);
	set_glGetFixedvOES(glGetFixedvOES_enc);
	set_glGetLightxvOES(glGetLightxvOES_enc);
	set_glGetMaterialxvOES(glGetMaterialxvOES_enc);
	set_glGetTexEnvxvOES(glGetTexEnvxvOES_enc);
	set_glGetTexParameterxvOES(glGetTexParameterxvOES_enc);
	set_glLightModelxOES(glLightModelxOES_enc);
	set_glLightModelxvOES(glLightModelxvOES_enc);
	set_glLightxOES(glLightxOES_enc);
	set_glLightxvOES(glLightxvOES_enc);
	set_glLineWidthxOES(glLineWidthxOES_enc);
	set_glLoadMatrixxOES(glLoadMatrixxOES_enc);
	set_glMaterialxOES(glMaterialxOES_enc);
	set_glMaterialxvOES(glMaterialxvOES_enc);
	set_glMultMatrixxOES(glMultMatrixxOES_enc);
	set_glMultiTexCoord4xOES(glMultiTexCoord4xOES_enc);
	set_glNormal3xOES(glNormal3xOES_enc);
	set_glOrthoxOES(glOrthoxOES_enc);
	set_glPointParameterxOES(glPointParameterxOES_enc);
	set_glPointParameterxvOES(glPointParameterxvOES_enc);
	set_glPointSizexOES(glPointSizexOES_enc);
	set_glPolygonOffsetxOES(glPolygonOffsetxOES_enc);
	set_glRotatexOES(glRotatexOES_enc);
	set_glSampleCoveragexOES(glSampleCoveragexOES_enc);
	set_glScalexOES(glScalexOES_enc);
	set_glTexEnvxOES(glTexEnvxOES_enc);
	set_glTexEnvxvOES(glTexEnvxvOES_enc);
	set_glTexParameterxOES(glTexParameterxOES_enc);
	set_glTexParameterxvOES(glTexParameterxvOES_enc);
	set_glTranslatexOES(glTranslatexOES_enc);
	set_glIsRenderbufferOES(glIsRenderbufferOES_enc);
	set_glBindRenderbufferOES(glBindRenderbufferOES_enc);
	set_glDeleteRenderbuffersOES(glDeleteRenderbuffersOES_enc);
	set_glGenRenderbuffersOES(glGenRenderbuffersOES_enc);
	set_glRenderbufferStorageOES(glRenderbufferStorageOES_enc);
	set_glGetRenderbufferParameterivOES(glGetRenderbufferParameterivOES_enc);
	set_glIsFramebufferOES(glIsFramebufferOES_enc);
	set_glBindFramebufferOES(glBindFramebufferOES_enc);
	set_glDeleteFramebuffersOES(glDeleteFramebuffersOES_enc);
	set_glGenFramebuffersOES(glGenFramebuffersOES_enc);
	set_glCheckFramebufferStatusOES(glCheckFramebufferStatusOES_enc);
	set_glFramebufferRenderbufferOES(glFramebufferRenderbufferOES_enc);
	set_glFramebufferTexture2DOES(glFramebufferTexture2DOES_enc);
	set_glGetFramebufferAttachmentParameterivOES(glGetFramebufferAttachmentParameterivOES_enc);
	set_glGenerateMipmapOES(glGenerateMipmapOES_enc);
	set_glMapBufferOES((glMapBufferOES_client_proc_t)(enc_unsupported));
	set_glUnmapBufferOES(glUnmapBufferOES_enc);
	set_glGetBufferPointervOES((glGetBufferPointervOES_client_proc_t)(enc_unsupported));
	set_glCurrentPaletteMatrixOES(glCurrentPaletteMatrixOES_enc);
	set_glLoadPaletteFromModelViewMatrixOES(glLoadPaletteFromModelViewMatrixOES_enc);
	set_glMatrixIndexPointerOES((glMatrixIndexPointerOES_client_proc_t)(enc_unsupported));
	set_glWeightPointerOES((glWeightPointerOES_client_proc_t)(enc_unsupported));
	set_glQueryMatrixxOES(glQueryMatrixxOES_enc);
	set_glDepthRangefOES(glDepthRangefOES_enc);
	set_glFrustumfOES(glFrustumfOES_enc);
	set_glOrthofOES(glOrthofOES_enc);
	set_glClipPlanefOES(glClipPlanefOES_enc);
	set_glClipPlanefIMG(glClipPlanefIMG_enc);
	set_glGetClipPlanefOES(glGetClipPlanefOES_enc);
	set_glClearDepthfOES(glClearDepthfOES_enc);
	set_glTexGenfOES(glTexGenfOES_enc);
	set_glTexGenfvOES(glTexGenfvOES_enc);
	set_glTexGeniOES(glTexGeniOES_enc);
	set_glTexGenivOES(glTexGenivOES_enc);
	set_glTexGenxOES(glTexGenxOES_enc);
	set_glTexGenxvOES(glTexGenxvOES_enc);
	set_glGetTexGenfvOES(glGetTexGenfvOES_enc);
	set_glGetTexGenivOES(glGetTexGenivOES_enc);
	set_glGetTexGenxvOES(glGetTexGenxvOES_enc);
	set_glBindVertexArrayOES(glBindVertexArrayOES_enc);
	set_glDeleteVertexArraysOES(glDeleteVertexArraysOES_enc);
	set_glGenVertexArraysOES(glGenVertexArraysOES_enc);
	set_glIsVertexArrayOES(glIsVertexArrayOES_enc);
	set_glDiscardFramebufferEXT(glDiscardFramebufferEXT_enc);
	set_glMultiDrawArraysEXT((glMultiDrawArraysEXT_client_proc_t)(enc_unsupported));
	set_glMultiDrawElementsEXT((glMultiDrawElementsEXT_client_proc_t)(enc_unsupported));
	set_glMultiDrawArraysSUN((glMultiDrawArraysSUN_client_proc_t)(enc_unsupported));
	set_glMultiDrawElementsSUN((glMultiDrawElementsSUN_client_proc_t)(enc_unsupported));
	set_glRenderbufferStorageMultisampleIMG(glRenderbufferStorageMultisampleIMG_enc);
	set_glFramebufferTexture2DMultisampleIMG(glFramebufferTexture2DMultisampleIMG_enc);
	set_glDeleteFencesNV(glDeleteFencesNV_enc);
	set_glGenFencesNV(glGenFencesNV_enc);
	set_glIsFenceNV(glIsFenceNV_enc);
	set_glTestFenceNV(glTestFenceNV_enc);
	set_glGetFenceivNV(glGetFenceivNV_enc);
	set_glFinishFenceNV(glFinishFenceNV_enc);
	set_glSetFenceNV(glSetFenceNV_enc);
	set_glGetDriverControlsQCOM(glGetDriverControlsQCOM_enc);
	set_glGetDriverControlStringQCOM(glGetDriverControlStringQCOM_enc);
	set_glEnableDriverControlQCOM(glEnableDriverControlQCOM_enc);
	set_glDisableDriverControlQCOM(glDisableDriverControlQCOM_enc);
	set_glExtGetTexturesQCOM(glExtGetTexturesQCOM_enc);
	set_glExtGetBuffersQCOM(glExtGetBuffersQCOM_enc);
	set_glExtGetRenderbuffersQCOM(glExtGetRenderbuffersQCOM_enc);
	set_glExtGetFramebuffersQCOM(glExtGetFramebuffersQCOM_enc);
	set_glExtGetTexLevelParameterivQCOM(glExtGetTexLevelParameterivQCOM_enc);
	set_glExtTexObjectStateOverrideiQCOM(glExtTexObjectStateOverrideiQCOM_enc);
	set_glExtGetTexSubImageQCOM(glExtGetTexSubImageQCOM_enc);
	set_glExtGetBufferPointervQCOM((glExtGetBufferPointervQCOM_client_proc_t)(enc_unsupported));
	set_glExtGetShadersQCOM(glExtGetShadersQCOM_enc);
	set_glExtGetProgramsQCOM(glExtGetProgramsQCOM_enc);
	set_glExtIsProgramBinaryQCOM(glExtIsProgramBinaryQCOM_enc);
	set_glExtGetProgramBinarySourceQCOM((glExtGetProgramBinarySourceQCOM_client_proc_t)(enc_unsupported));
	set_glStartTilingQCOM(glStartTilingQCOM_enc);
	set_glEndTilingQCOM(glEndTilingQCOM_enc);
}

