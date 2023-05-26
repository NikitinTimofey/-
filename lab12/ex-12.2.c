#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TABLE_SIZE 10

// Структура для представления записи в хеш-таблице
typedef struct {
	int key;
	int value;
} Entry;

// Структура для представления хеш-таблицы
typedef struct {
	Entry** entries;
} HashTable;

// Создание новой записи
Entry* createEntry(int key, int value) {
	Entry* entry = (Entry*)malloc(sizeof(Entry));
	entry->key = key;
	entry->value = value;
	return entry;
}

// Удаление записи
void deleteEntry(Entry* entry) {
	free(entry);
}

// Создание хеш-таблицы
HashTable* createHashTable() {
	HashTable* table = (HashTable*)malloc(sizeof(HashTable));
	table->entries = (Entry**)malloc(TABLE_SIZE * sizeof(Entry*));
	for (int i = 0; i < TABLE_SIZE; i++) {
		table->entries[i] = NULL;
	}
	return table;
}

// Удаление хеш-таблицы
void deleteHashTable(HashTable* table) {
	for (int i = 0; i < TABLE_SIZE; i++) {
		Entry* entry = table->entries[i];
		if (entry != NULL) {
			deleteEntry(entry);
		}
	}
	free(table->entries);
	free(table);
}

// Хеш-функция
int hash(int key) {
	return key % TABLE_SIZE;
}

// Вставка записи в хеш-таблицу
void insert(HashTable* table, int key, int value) {
	int index = hash(key);
	Entry* entry = createEntry(key, value);
	table->entries[index] = entry;
}

// Удаление записи с четным ключом из хеш-таблицы
void removeEvenKeys(HashTable* table) {
	for (int i = 0; i < TABLE_SIZE; i++) {
		Entry* entry = table->entries[i];
		if (entry != NULL && entry->key % 2 == 0) {
			deleteEntry(entry);
			table->entries[i] = NULL;
		}
	}
}

// Вывод содержимого хеш-таблицы
void printHashTable(HashTable* table) {
	for (int i = 0; i < TABLE_SIZE; i++) {
		Entry* entry = table->entries[i];
		if (entry != NULL) {
			printf("Key: %d, Value: %d\n", entry->key, entry->value);
		}
	}
}

int main() {
	setlocale(LC_ALL, "Rus");
	// Создание хеш-таблицы
	HashTable* table = createHashTable();
	
	// Вставка записей со случайными ключами и значениями
	insert(table, 2, 10);
	insert(table, 5, 20);
	insert(table, 8, 30);
	insert(table, 10, 40);
	insert(table, 13, 50);
	
	// Вывод исходного состояния хеш-таблицы
	printf("Исходное состояние хеш-таблицы:\n");
	printHashTable(table);
	
	// Удаление записей с четными ключами
	removeEvenKeys(table);
	
	// Вывод состояния хеш-таблицы после удаления записей с четными ключами
	printf("\nСостояние хеш-таблицы после удаления записей с четными ключами:\n");
	printHashTable(table);
	
	// Удаление хеш-таблицы
	deleteHashTable(table);
	
	return 0;
}
