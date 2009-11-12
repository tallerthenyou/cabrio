#ifndef _GAME_H_
#define _GAME_H_ 1

#include "ogl.h"
#include "platform.h"
#include "config.h"

struct game_category {
	struct game_category *next;
	char *name;
	char *value;
};

struct game_image {
	struct game_image *next;
	char *type;
	char *file_name;
};

struct game {
	struct game *next;
	struct game *prev;
	struct game *all_next;
	struct game *all_prev;
	struct platform *platform;
	struct game_category *categories;
	struct texture *texture;
	struct config_param *params;
	struct game_image *images;
	char *name;
	char *rom_path;
};

struct game *game_first( void );

int game_list_create( void );
int game_list_filter_category( char *name, char *value );
int game_list_filter_platform( struct platform *platform );
int game_list_unfilter( void );
void game_list_pause( void );
int game_list_resume( void );
void game_list_free( void );
int game_load_texture( struct game *game );
void game_free_texture( struct game *game );
const char *game_image_get( struct game *game, const char *type );

#endif

