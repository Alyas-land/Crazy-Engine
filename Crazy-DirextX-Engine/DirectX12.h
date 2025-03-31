#pragma once
#include <d3d12.h>
#include <dxgi1_6.h>

class DirectX12 {
public:
    DirectX12();
    ~DirectX12();

    void Initialize(HWND hwnd);
    void Render();
    void Shutdown();

private:
    ID3D12Device* device = nullptr;
    IDXGISwapChain3* swapChain = nullptr;
    ID3D12CommandQueue* commandQueue = nullptr;
};
