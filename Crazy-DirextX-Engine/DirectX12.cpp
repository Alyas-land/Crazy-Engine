#include "DirectX12.h"
#include <iostream>

DirectX12::DirectX12() {}

DirectX12::~DirectX12() {
    Shutdown();
}

void DirectX12::Initialize(HWND hwnd) {
    HRESULT hr = D3D12CreateDevice(nullptr, D3D_FEATURE_LEVEL_12_0, IID_PPV_ARGS(&device));
    if (FAILED(hr)) {
        std::cerr << "Failed to initialize DirectX 12!" << std::endl;
        return;
    }
    std::cout << "DirectX 12 Initialized!" << std::endl;
}

void DirectX12::Render() {
    std::cout << "Rendering frame..." << std::endl;
}

void DirectX12::Shutdown() {
    if (device) device->Release();
}
