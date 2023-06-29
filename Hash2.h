#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

struct map_item;
struct hashmap;

struct hashmap* new_map(int capacity);
void del_map(struct hashmap* map);

struct map_item* map_set(struct hashmap* map, char* new_key, int new_val);
int map_get(struct hashmap* map, char* key);
int map_rem(struct hashmap* map, char* key);

int djb2(struct hashmap* map, char* key);
