#pragma once
#include <stdio.h>
#include <windows.h>

struct team_server {
	int id;
	int watermark;
	int sleeptime;
	wchar_t* fqdn;
	wchar_t* spawnto;
	wchar_t* type;
	wchar_t* ip;
	bool cracked;
};