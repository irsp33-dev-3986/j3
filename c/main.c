#include <string.h>
#include <stdbool.h>
#include "func.h"

char team_server_array[];
int counter = 0;
int global_counter = 0;

struct team_server build_team_server(int watermark, int sleeptime, wchar_t *fqdn, wchar_t *spawnto, wchar_t *ip)
{
	struct team_server team_server_item = {
		counter,
		watermark,
		sleeptime,
		fqdn,
		spawnto,
		L"cobalt_strike",
		ip,
		NULL
	};
	counter++;
	return team_server_item;
}

char build_team_server_array(char team_server_item)
{
	char team_server_array[] = {
		global_counter,
		team_server_item
	};
	global_counter++;
	return team_server_array;
}

struct team_server is_cracked(struct team_server team_server_instance)
{
	if (team_server_instance.watermark != 0)
	{
		team_server_instance.cracked = TRUE;
	}
	else
	{
		team_server_instance.cracked = FALSE;
	}
	return team_server_instance;
}

int main(void)
{
	//int watermark = 987654321;
	int watermark = 0;
	int sleeptime = 62248;
	wchar_t *fqdn = L"v10.5.org";
	wchar_t *spawnto = L"%windir%\\sysnative\\dllhost.exe -o enable";
	wchar_t *ip = L"94.232.46.229";
	struct team_server ts = build_team_server(watermark, sleeptime, fqdn, spawnto, ip);
	is_cracked(ts);
	//printf("%s", ts);
	printf("%d\n", ts.cracked);
	printf("L'hote est numero %i, son IP est %ls et le FQDN associe est %ls. Il heberge %ls. Sa watermark est %i et il est configure pour utiliser %ls. Cracked ? : %s.\n", ts.id, ts.ip, ts.fqdn, ts.type, ts.watermark, ts.spawnto, ts.cracked ? "true" : "false");
	return 0;
}

//build_team_server(987654321, 62248, "v10.5.org", "%windir%\sysnative\dllhost.exe -o enable","94.232.46.229")

/*
struct team_server_array f(int id, struct team_server team_server_instance)
{
	struct team_server_array team_server_array_instance = { counter, team_server_instance };
	return team_server_array_instance;
}

struct team_server_array {
	int id;
	struct team_server team_server_instance;
};
*/