#pragma once

#ifdef MX_PLATFORM_WINDOWS 

extern MaxEngine::Application* MaxEngine::createApplication();

int main(int argc, char** argv) {
	printf("---------------------- MaxEngine ----------------------\nCopyright: Max Playle Development 2023-current | All rights reserved.\n-----------------------------------------------------\n");
	printf("MaxEngine loaded into memory, commencing initialization.\n");
	
	MaxEngine::Log::Init();
	MX_CORE_WARN("If you can see this, the engine logging system initialized successfully.");
	MX_INFO("Messages that look like this, prefixed with [App] are not from MaxEngine. They are from the app which is using MaxEngine.");
	
	MX_CORE_INFO("Calling external createApplication()");
	auto app = MaxEngine::createApplication();
	MX_CORE_INFO("createApplication() returned. Calling run() from returned object....");
	app->run();

	MX_CORE_INFO("Application execution completed, no more code. Freeing up memory...");
	delete app;
}

#else
#error MaxEngine only supports Windows!
#endif