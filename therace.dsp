# Microsoft Developer Studio Project File - Name="therace" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=therace - Win32 Release
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "therace.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "therace.mak" CFG="therace - Win32 Release"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "therace - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "therace - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "therace - Win32 Release"

BSC32=bscmake.exe
LINK32=link.exe

!ELSEIF  "$(CFG)" == "therace - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /D "_DEBUG" /YX /FD /GZ /c
# ADD CPP /nologo /W3 /Gm /GX /ZI /Od /Op /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /D "_DEBUG" /YX /FD /GZ /c
# ADD BASE MTL /nologo /D "NDEBUG" /D "_DEBUG" /mktyplib203 /win32 /win32
# ADD MTL /nologo /D "NDEBUG" /D "_DEBUG" /mktyplib203 /win32 /win32
# ADD BASE RSC /l 0x409 /d "NDEBUG" /d "_DEBUG"
# ADD RSC /l 0x415 /d "NDEBUG" /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 opengl32.lib glu32.lib glaux.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib winmm.lib opengl32.lib glu32.lib glaux.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# SUBTRACT LINK32 /pdb:none

!ENDIF 

# Begin Target

# Name "therace - Win32 Release"
# Name "therace - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\therace.cpp

!IF  "$(CFG)" == "therace - Win32 Release"

!ELSEIF  "$(CFG)" == "therace - Win32 Debug"

!ENDIF 

# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\biblioteki\api_gry.h
# End Source File
# Begin Source File

SOURCE=.\biblioteki\fps.h
# End Source File
# Begin Source File

SOURCE=.\biblioteki\init_gry.h
# End Source File
# Begin Source File

SOURCE=.\biblioteki\loadbmp.h
# End Source File
# Begin Source File

SOURCE=.\biblioteki\procedury.h
# End Source File
# Begin Source File

SOURCE=.\biblioteki\zmienne.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\icon1.ico
# End Source File
# End Group
# End Target
# End Project
