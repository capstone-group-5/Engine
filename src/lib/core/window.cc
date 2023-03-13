#include "src/lib/core/base_export.h"
#include "src/lib/core/window.h"

#ifdef MAJKT_PLATFORM_WINDOWS
    #include "src/lib/platform/windows/windows_window.h"
#endif
#ifdef MAJKT_PLATFORM_MACOS
    #include "src/lib/platform/windows/windows_window.h"
    // TODO: Implement macOSWindow
    // #include "src/lib/platform/macOS/macOS_window.h"
#endif

#include <glog/logging.h>
#include "glog/stl_logging.h"
#include <iostream>

namespace majkt {

	std::unique_ptr<Window> Window::Create(const WindowProps& props)
	{
        #ifdef MAJKT_PLATFORM_WINDOWS
            return std::make_unique<WindowsWindow>(props);
        #endif
        #ifdef MAJKT_PLATFORM_MACOS
            return std::make_unique<WindowsWindow>(props);
            // TODO: Implement macOSWindow
            // return std::make_unique<macOSWindow>(props);
        #else
            LOG(WARNING) << "MAJKT does not run on this platform!";
            return nullptr;
        #endif
	}

} // namespace majkt
