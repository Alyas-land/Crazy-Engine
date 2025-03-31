#include "Renderer.h"

Renderer::Renderer() {}

Renderer::~Renderer() {
    Cleanup();
}

void Renderer::Init(HWND hwnd) {
    dx12.Initialize(hwnd);
}

void Renderer::Render() {
    dx12.Render();
}

void Renderer::Cleanup() {
    dx12.Shutdown();
}
