#pragma once
#include "DirectX12.h"

class Renderer {
public:
    Renderer();
    ~Renderer();

    void Init(HWND hwnd);
    void Render();
    void Cleanup();

private:
    DirectX12 dx12;
};
