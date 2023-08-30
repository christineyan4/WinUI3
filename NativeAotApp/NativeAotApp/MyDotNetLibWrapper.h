#pragma once


namespace NativeAotApp::Wrappers
{
	struct MyDotNetLibWrapper : std::enable_shared_from_this<MyDotNetLibWrapper>
	{
		MyDotNetLibWrapper();

		int GetValue();
		winrt::hstring GetName();
		winrt::hstring GetNameFromList();

		bool Initialize();

	private:
		HINSTANCE m_hInstance;

		int FileExists(TCHAR* file);
	};
}
