//========= Copyright � 1996-2005, Valve Corporation, All rights reserved. ============//
//
// Purpose: 
//
//=============================================================================//

#ifndef C_PHYSICSPROP_H
#define C_PHYSICSPROP_H
#ifdef _WIN32
#pragma once
#endif

#include "c_breakableprop.h"
//-----------------------------------------------------------------------------
// Purpose: 
//-----------------------------------------------------------------------------
class C_PhysicsProp : public C_BreakableProp
{
	typedef C_BreakableProp BaseClass;
public:
	DECLARE_CLIENTCLASS();

	C_PhysicsProp();
	~C_PhysicsProp();

	int				InternalDrawModel( int flags );

	//TGB: virtual that can be overridden by clientside implementations to return the tooltip text
	//TGB: UNDONE: unnecessary
	//virtual const char*				GetZMTooltip() { return "An apparently movable object."; }

protected:
	// Networked vars.
	bool m_bAwake;
	bool m_bAwakeLastTime;
};

#endif // C_PHYSICSPROP_H 
