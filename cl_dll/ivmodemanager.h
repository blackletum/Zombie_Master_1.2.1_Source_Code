//========= Copyright � 1996-2005, Valve Corporation, All rights reserved. ============//
//
// Purpose: 
//
// $Workfile:     $
// $Date: 2006-10-26 18:02:06 $
//
//-----------------------------------------------------------------------------
// $Log: ivmodemanager.h,v $
// Revision 1.2  2006-10-26 18:02:06  Angry_Lawyer
// *** empty log message ***
//
//
// $NoKeywords: $
//=============================================================================//
#if !defined( IVMODEMANAGER_H )
#define IVMODEMANAGER_H
#ifdef _WIN32
#pragma once
#endif

abstract_class IVModeManager
{
public:
	virtual void	Init( void ) = 0;
	virtual void	SwitchMode( bool commander, bool force ) = 0;
	virtual void	LevelInit( const char *newmap ) = 0;
	virtual void	LevelShutdown( void ) = 0;
};

extern IVModeManager *modemanager;

#endif // IVMODEMANAGER_H