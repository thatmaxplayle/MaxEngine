#pragma once

#ifdef MX_PLATFORM_WINDOWS
	#ifdef MX_BUILD_DLL
		#define MAXENGINE_API __declspec(dllexport)
	#else
		#define MAXENGINE_API __declspec(dllimport)
	#endif
#else 
	#error MaxEngine only supports windows.
#endif