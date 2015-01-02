// singletonthing.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "singletonthing.h"
#include "DbgHelp.h"
#include "utilcode.h"
#include "singlevina1.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// The one and only application object

CWinApp theApp;

using namespace std;

void printStack( void );
void AppCode();

int _tmain(int argc, TCHAR* argv[], TCHAR* envp[])
{
	int nRetCode = 0;

	// initialize MFC and print and error on failure
	if (!AfxWinInit(::GetModuleHandle(NULL), NULL, ::GetCommandLine(), 0))
	{
		// TODO: change error code to suit your needs
		_tprintf(_T("Fatal Error: MFC initialization failed\n"));
		nRetCode = 1;
	}
	else
	{
		AppCode();
	}

	return nRetCode;
}

void AppCode()
{
	//printStack();
	singlevina1 *obj1;

	obj1 = singlevina1::getInstance();

	obj1->Add();
}