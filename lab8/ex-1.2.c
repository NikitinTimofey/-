#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct Coworker {
	char name[20];
	char surname[20];
	char middle_name[20];
	char job_title[30];
	int birth_year;
	int salary;
};

struct Coworker co[100], num;

int k = 0;

void Break() {
	int i;
	while (1) {
		system("cls");
		
		printf("Enter 0 to return: \n");
		scanf("%d", &i);
		if (i == 0) {
			return;
		}
	}
	
}

void doAddCoworker() {
	system("cls");
	printf("Enter name of coworker: ");
	scanf("%s", co[k].name);
	printf("Enter surname of coworker: ");
	scanf("%s", co[k].surname);
	printf("Enter middle name of coworker: ");
	scanf("%s", co[k].middle_name);
	printf("Enter job of coworker: ");
	scanf("%s", co[k].job_title);
	printf("Enter birth year of coworker: ");
	scanf("%d", &co[k].birth_year);
	printf("Enter salary of coworker: ");
	scanf("%d", &co[k].salary);
	k++;
	Break();
	
}

void doSortCoworkersList() {
	for (int i = 0; i < k - 1; i++) {
		for (int j = i + 1; j < k; j++) {
			if (strcmp(co[i].name, co[j].name) > 0) {
				num = co[i];
				co[i] = co[j];
				co[j] = num;
			}
		}
	}
	
	
}

void doOutputCoworkersList() {	
	
		for (int i = 0; i < k; i++) {
			printf("\n\n");
			printf("Name: %s\n", co[i].name);
			printf("Surname: %s\n", co[i].surname);
			printf("Middle name: %s\n", co[i].middle_name);
			printf("Job title: %s\n", co[i].job_title);
			printf("Birth year: %d\n", co[i].birth_year);
			printf("Salary: %d\n", co[i].salary);
		}
	
	printf("\nEnter 0 to return: ");
	int i;
	scanf("%d", &i);
	if (i == 0) {
		return;
	}
	
}

void doFindCoworker() {
	char searchName[20];
	printf("Enter the name of the coworker you want to find: ");
	scanf("%s", searchName);
	
	int found = 0;
	
	for (int i = 0; i < k; i++) {
		if (strcmp(searchName, co[i].name) == 0) {
			found = 1;
			printf("\n\n");
			printf("Name: %s\n", co[i].name);
			printf("Surname: %s\n", co[i].surname);
			printf("Middle name: %s\n", co[i].middle_name);
			printf("Job title: %s\n", co[i].job_title);
			printf("Birth year: %d\n", co[i].birth_year);
			printf("Salary: %d\n", co[i].salary);
		}
	}
	
	if (!found) {
		printf("\n\n");
		printf("Coworker with name %s not found!\n", searchName);
	}
	
	printf("\nEnter 0 to return: ");
	int i;
	scanf("%d", &i);
	if (i == 0) {
		return;
	}
	
}

void doEditCoworker() {
	char searchName[20];
	printf("Enter the name of the coworker you want to edit: ");
	scanf("%s", searchName);
	
	int found = 0;
	
	for (int i = 0; i < k; i++) {
		if (strcmp(searchName, co[i].name) == 0) {
			found = 1;
			printf("\n\nCurrent data of the coworker\n");
			printf("Name: %s\n", co[i].name);
			printf("Surname: %s\n", co[i].surname);
			printf("Middle name: %s\n", co[i].middle_name);
			printf("Job title: %s\n", co[i].job_title);
			printf("Birth year: %d\n", co[i].birth_year);
			printf("Salary: %d\n", co[i].salary);
			printf("\n\nEnter new data of the coworker:\n");
			printf("Enter name of coworker: ");
			scanf("%s", co[i].name);
			printf("Enter surname of coworker: ");
			scanf("%s", co[i].surname);
			printf("Enter middle name of coworker: ");
			scanf("%s", co[i].middle_name);
			printf("Enter job of coworker: ");
			scanf("%s", co[i].job_title);
			printf("Enter birth year of coworker: ");
			scanf("%d", &co[i].birth_year);
			printf("Enter salary of coworker: ");
			scanf("%d", &co[i].salary);
			printf("\n\nThe coworker has been updated!\n");
		}
	}
	
	if (!found) {
		printf("\n\n");
		printf("Coworker with name %s not found!\n", searchName);
	}
}

void doRemoveCoworker() {
	system("cls");
	printf("Enter the name of the coworker you want to remove: ");
	char name[20];
	scanf("%s", name);
	
	int index = -1;
	for (int i = 0; i < k; i++) {
		if (strcmp(co[i].name, name) == 0) {
			index = i;
			break;
		}
	}
	
	if (index == -1) {
		printf("Coworker not found.\n");
		return;
	}
	
	for (int i = index; i < k - 1; i++) {
		co[i] = co[i+1];
	}
	k--;
	printf("Coworker removed successfully.\n");
}

void doExit() {
	printf("Exiting program...\n");
	exit(0);
}

void Menu() {
	
	int choice;
	do {
		system("cls");
		printf("1. Add coworker\n");
		printf("2. Sort the coworkers\n");
		printf("3. Find coworker\n");
		printf("4. Edit list of coworkers\n");
		printf("5. Remove coworker\n");
		printf("6. List of the coworkers\n");
		printf("7. Exit\n");
		scanf("%d", &choice);
		switch (choice) {
		case 1:
			doAddCoworker();
			break;
		case 2:
			doSortCoworkersList();
			break;
		case 3:
			doFindCoworker();
			break;
		case 4:
			doEditCoworker();
			break;
		case 5:
			doRemoveCoworker();
			break;
		case 6:
			doOutputCoworkersList();
			break;
		case 7: 
			doExit();
			break;
		}
	} while(1);	
} 

int main() {
	Menu();
	getch();
	return 0;
}
