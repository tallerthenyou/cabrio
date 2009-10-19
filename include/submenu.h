#ifndef _SUBMENU_H_
#define _SUBMENU_H_ 1

#include "menu.h"

int submenu_create( int menu_type );
void submenu_advance( void );
void submenu_retreat( void );
int submenu_items( void );
void submenu_pause( void );
int submenu_resume( void );
void submenu_free( void );
void submenu_draw( void );
int submenu_do_filter( void );

#endif
