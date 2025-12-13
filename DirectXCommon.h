#pragma once
#include <d3d12.h>
#include <dxgi1_6.h>
#include <wrl.h>
#include "WinApp.h"
//#include "Logger.h"
#include <dxcapi.h>
#include<Windows.h>
#include <array>
#include <cassert>
#include <string>
//#include "StringUtility.h"
#include "externals/DirectXTex/d3dx12.h"
#include "externals/DirectXTex/DirectXTex.h"
#include "externals/imgui//imgui.h"
#include "externals/imgui/imgui_impl_dx12.h"
#include "externals/imgui/imgui_impl_win32.h"

extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
class DirectXCommon
{
public:
	void Initialize(WinApp* winApp);

	void Deviceinitialize();

	void CommandListInitialize();

	void SwapChainInitialize();

	/*Microsoft::WRL::ComPtr<ID3D12DescriptorHeap> DepthInitialize(Microsoft::WRL::ComPtr<ID3D12Device> device, D3D12_DESCRIPTOR_HEAP_TYPE heapType,
		UINT numDescriptors, bool shaderVisible);*/

	Microsoft::WRL::ComPtr<ID3D12DescriptorHeap> CreateDescriptorHeap(D3D12_DESCRIPTOR_HEAP_TYPE heapType, UINT numDescriptors, bool shaderVisible);


};

