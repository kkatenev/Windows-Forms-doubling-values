#include "pch.h"
#include "MyForm1.h" 
#include <Windows.h> 
using namespace ConsoleApplication2; // �������� ������� 

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm1);
	return 0;
}
