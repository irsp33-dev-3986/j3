#pragma once
#include "struct.h"

struct team_server build_team_server(int watermark, int sleeptime, wchar_t* fqdn, wchar_t* spawnto, wchar_t* ip);

char build_team_server_array(char team_server_item);

struct team_server is_cracked(struct team_server team_server_instance);