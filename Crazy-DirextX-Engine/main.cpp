#include <windows.h>
#include <d3d12.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    ID3D12Device* device = nullptr;
    HRESULT hr = D3D12CreateDevice(nullptr, D3D_FEATURE_LEVEL_11_0, __uuidof(ID3D12Device), (void**)&device);

    if (SUCCEEDED(hr)) {
        MessageBox(nullptr, L"DirectX 12 is working!", L"Success", MB_OK);
    }
    else {
        MessageBox(nullptr, L"DirectX 12 failed!", L"Error", MB_OK);
    }

    if (device) device->Release();
    return 0;
}
