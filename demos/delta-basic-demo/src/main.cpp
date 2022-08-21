#ifdef __WIN32
#include <Windows.h>
#endif

#include "../include/demo_list.h"


void runApp(void *instance, ysContextObject::DeviceAPI api) {
    delta_demo::DemoApplication::Demo demo =
            delta_demo::DemoApplication::Demo::DeltaBasicDemo;

    delta_demo::DemoApplication *app = delta_demo::CreateApplication(demo);
    app->Initialize(instance, api);
    app->Run();
    app->Destroy();
}


#ifdef __WIN32
int WINAPI WinMain(
    _In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPSTR lpCmdLine,
    _In_ int nCmdShow)
{
    (void)nCmdShow;
    (void)lpCmdLine;
    (void)hPrevInstance;

    ysContextObject::DeviceAPI api = ysContextObject::DeviceAPI::DirectX11;
    runApp((void *)&hInstance, api);

    return 0;
}
#else

int main() {

    ysContextObject::DeviceAPI api = ysContextObject::DeviceAPI::OpenGL4_0;

    runApp(nullptr, api);

    return EXIT_SUCCESS;
}

#endif