#include<Windows.h>
bool running = true;
void* buffer_memory;
int buffer_width;
int buffer_height;
LRESULT CALLBACK window_callback(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam){

	LRESULT result = 0;
	switch (uMsg) {
		case WM_CLOSE:
		case WM_DESTROY: {
			running = false;
		}break;

		case WM_SIZE: {
			RECT rect;
			GetClientRect(hwnd, &rect);
			buffer_width = rect.right - rect.left;
			buffer_width = rect.bottom - rect.top;

			if (buffer_memory) VirtualFree(buffer_memory, 0, MEM_RELEASE);
			int buffer_size = buffer_width * buffer_width * sizeof(unsigned int);
			buffer_memory = VirtualAlloc(0, buffer_size, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
		}break;

		default: {
				result = DefWindowProc(hwnd, uMsg, wParam, lParam);
		}
	}
	return result;
}
int WinMain(HINSTANCE hInstance, HINSTANCE hprevInstacne, LPSTR lpCmdLine, int nShowCmd)
{
	//Create a Window class
	WNDCLASS window_class = {};
	window_class.style = CS_HREDRAW | CS_VREDRAW;
	window_class.lpszClassName = "Game window class";
	window_class.lpfnWndProc = window_callback;


	//Register Class
	RegisterClass(&window_class);

	// Create Window
	HWND window = CreateWindowA(window_class.lpszClassName, "MY FIRST GAME!", WS_OVERLAPPEDWINDOW | WS_VISIBLE, CW_USEDEFAULT, CW_USEDEFAULT, 1200, 720, 0, 0, hInstance, 0);
	HDC hdc = GetDC(window);


	while (running) {
		//Input
		MSG message;
		while (PeekMessage(&message, window, 0, 0, PM_REMOVE)) {
			TranslateMessage(&message);
			DispatchMessage(&message);
		}
		//Stimulate

		//Render
		StretchDIBits(hdc, 0, 0, buffer_width, buffer_height, buffer_memory, )
	}
}