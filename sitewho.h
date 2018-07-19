#ifndef SITEWHO_H
#define SITEWHO_H

struct GROUP {
	char           *name;
	gid_t		id;
};

int check_path(char *);
unsigned long filesize(char *);
char *get_g_name(unsigned int);
int strplen(char *);
short int matchpath(char *, char *);
short int strcomp(char *, char *);
void showusers(int, int, char *, char);
short compareflags(char *, char *);
void readconfig(char *);
void show(char *);
void showtotals(char);
int buffer_groups(char *, int);
char *host2ip (char *userhost);
char *get_mmdb (char *ipaddr);

#endif

