#pragma once
#include"includes.h"

typedef HRESULT(APIENTRY* tEndScene)(LPDIRECT3DDEVICE9 pDevice);


bool GetD3D9Device(void** pTable, size_t size);

static  HWND window;

HWND GetProcessWindow();

extern int windowHeigh, windowWidth;

extern LPDIRECT3DDEVICE9 pDevice;

