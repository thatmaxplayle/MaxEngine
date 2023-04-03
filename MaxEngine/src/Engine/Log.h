#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"

namespace MaxEngine {

	class MAXENGINE_API Log {
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }


	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger; 
	};

}


// Core logging macros
#define MX_CORE_TRACE(...)		::MaxEngine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define MX_CORE_INFO(...)		::MaxEngine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define MX_CORE_WARN(...)		::MaxEngine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define MX_CORE_ERROR(...)		::MaxEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define MX_CORE_FATAL(...)		::MaxEngine::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client logging macros
#define MX_TRACE(...)		::MaxEngine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define MX_INFO(...)			::MaxEngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define MX_WARN(...)			::MaxEngine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define MX_ERROR(...)		::MaxEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define MX_FATAL(...)		::MaxEngine::Log::GetClientLogger()->fatal(__VA_ARGS__)

