#pragma once

#include "Core.h"

namespace MaxEngine {

	class MAXENGINE_API Application {

	public:
		Application();
		virtual ~Application();

		void run();

	};

	// To be defined in CLIENT. 
	Application* createApplication();

}