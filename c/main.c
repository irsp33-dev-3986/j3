#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdbool.h>

char team_server_array[];
int counter = 0;
int global_counter = 0;

struct team_server {
	int id;
	int watermark;
	int sleeptime;
	char fqdn;
	char spawnto;
	char type;
	char ip;
	BOOL is_cracked;
};

struct team_server build_team_server(int watermark, int sleeptime, char fqdn[], char spawnto[], char ip[])
{
	struct team_server team_server_item = {
		counter,
		watermark,
		sleeptime,
		fqdn,
		spawnto,
		"cobalt_strike",
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

int main(void)
{
	int watermark = 987654321;
	int sleeptime = 62248;
	char fqdn[] = "v10.5.org";
	char spawnto[] = "%windir%\sysnative\dllhost.exe -o enable";
	char ip[] = "94.232.46.229";
	struct team_server ts = build_team_server(watermark, sleeptime, fqdn, spawnto, ip);
	//is_cracked(ts);
	//printf("%s", ts);
	char test[] = "testesttest\n";
	printf("%s", test);
	printf("L'hote est numero %i, son IP est %s et le FQDN associe est %c. Il heberge %c. Sa watermark est %i et il est configurer pour utiliser %c. Cracked ? : %s.\n", ts.id, ts.ip, ts.fqdn, ts.type, ts.watermark, ts.spawnto, ts.is_cracked ? "true" : "false");
}

struct team_server is_cracked(struct team_server team_server_instance)
{
	if (team_server_instance.watermark != 0)
	{
		team_server_instance.is_cracked= FALSE;
	}
	else
	{
		team_server_instance.is_cracked = TRUE;
	}
	return team_server_instance;
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