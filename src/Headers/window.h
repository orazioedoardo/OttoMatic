//
// windows.h
//

extern void	InitWindowStuff(void);
ObjNode* MakeFadeEvent(Boolean fadeIn, float fadeSpeed);

void OGL_FadeOutScene(void (*drawCall)(void), void (*moveCall)(void));

void Enter2D(void);
void Exit2D(void);

void GetDefaultWindowSize(SDL_DisplayID display, int* width, int* height);
int GetNumDisplays(void);
void MoveToPreferredDisplay(void);
void SetFullscreenMode(bool enforceDisplayPref);
void SwapGameWindow(void);

#if __EMSCRIPTEN__
extern double	gAnimationFrameTime;
extern uint32_t	gAnimationFrameCount;
#endif
