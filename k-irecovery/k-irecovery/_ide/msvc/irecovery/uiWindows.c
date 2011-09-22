/* This UI code is Copyright 2011 KryptonX */

#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <io.h>

int exploit_int = 1;

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
 HANDLE BTN;

int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance,
					LPSTR lpCmdLine, int nCmdShow)
{
  MSG  msg ;    
  WNDCLASS wc = {0};
  wc.lpszClassName = TEXT( "winterra1n" );
  wc.hInstance     = hInstance ;
  wc.hbrBackground = GetSysColorBrush(COLOR_3DSHADOW );
  wc.lpfnWndProc   = WndProc ;
  wc.hCursor       = LoadCursor(0, IDC_ARROW);
  wc.hIcon   = LoadIcon(wc.hInstance, MAKEINTRESOURCE ("../krypton1te/icon.ico"));
  
  
  
  RegisterClass(&wc);
  CreateWindow( wc.lpszClassName, TEXT("winterra1n"),
                 WS_SYSMENU | WS_BORDER | WS_CAPTION | WS_VISIBLE,
                150, 150, 342, 100, 0, 0, hInstance, 0);
 

  while( GetMessage(&msg, NULL, 0, 0)) {
    TranslateMessage(&msg);
    DispatchMessage(&msg);
  }
  return (int) msg.wParam;
}

LRESULT CALLBACK WndProc( HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam )
{	    
  switch(msg)  
  {
	case WM_CREATE:
	{
		
		
		BTN = CreateWindow(TEXT("button"), TEXT("Jailbreak"),    
		             WS_VISIBLE | WS_CHILD,
					 /* First 2 Integers are location; last 2 are size */
		             76, 18, 182, 30,        
		             hwnd, (HMENU) 2, NULL, NULL);   
	    break;
		}
			

      case WM_COMMAND:
      {
	   
	   if (LOWORD(wParam) == 2) {	

           ShowWindow(BTN, SW_HIDE);  
		   EnableWindow(BTN, FALSE);
		  			BTN = BTN = CreateWindow(TEXT("button"), TEXT("Jailbreaking..."),    
		             WS_VISIBLE | WS_CHILD,
					 /* First 2 Integers are location; last 2 are size */
		             76, 18, 182, 30,               
		             hwnd, (HMENU) 3, NULL, NULL);
						  
			ShowWindow(BTN,FALSE);
		
			system("run.js");
		//	return system("run.js");

			ShowWindow(BTN, FALSE);

			BTN = BTN = CreateWindow(TEXT("button"), TEXT("Quit"),    
		             WS_VISIBLE | WS_CHILD,
					 // First 2 Integers are location; last 2 are size 
		             76, 18, 182, 30,              
		             hwnd, (HMENU) 3, NULL, NULL);
						  
			EnableWindow(BTN,TRUE);

			

			/* Show ending message */

					   
         break;
	   }   
	   
	   else {
		    if (LOWORD(wParam) == 3) {
				PostQuitMessage(0);			
				}
	   }

	   break;
       }

      case WM_DESTROY:
      {
         PostQuitMessage(0);
      }
  }
  return DefWindowProc(hwnd, msg, wParam, lParam);
}	





