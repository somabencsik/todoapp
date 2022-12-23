#ifndef TODO_H
#define TODO_H

#include <stdlib.h>

typedef struct Todo_
{
	char* message;
} Todo;

typedef struct TodoManager_
{
	Todo* todoList;
	int size;
	int maxSize;
} TodoManager;

TodoManager createTodoManager()
{
	TodoManager new = {};
	new.size = 0;
	new.maxSize = 10;
	new.todoList = malloc(sizeof(Todo) * new.maxSize);
	return new;
}

void createTodo(TodoManager* td, char* message)
{
	Todo new = {message};
	if (td->size >= td->maxSize)
	{
		td->maxSize += 5;
		td->todoList = realloc(td->todoList, sizeof(Todo) * td->maxSize);
	}
	td->todoList[td->size] = new;
	++td->size;
}

#endif // TODO_H
