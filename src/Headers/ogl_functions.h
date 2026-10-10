#pragma once

#include <SDL3/SDL_opengl.h>

#if __EMSCRIPTEN__
// On the web, call gl4es directly (SDL_GL_GetProcAddress would bypass gl4es).
// gl4es only exports the core names of these functions.
#undef glActiveTextureARB
#undef glClientActiveTextureARB
#define glActiveTextureARB					glActiveTexture
#define glClientActiveTextureARB			glClientActiveTexture
#else
extern PFNGLACTIVETEXTUREARBPROC			procptr_glActiveTextureARB;
extern PFNGLCLIENTACTIVETEXTUREARBPROC		procptr_glClientActiveTextureARB;

#define glActiveTextureARB					procptr_glActiveTextureARB
#define glClientActiveTextureARB			procptr_glClientActiveTextureARB
#endif

void OGL_InitFunctions(void);
