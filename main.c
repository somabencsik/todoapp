#include <stdio.h>
#include "todo.h"

int main()
{
	TodoManager todoManager = createTodoManager();
	
	for (int i = 0; i < 125; ++i)
	{
		createTodo(&todoManager, "asd");
	}

	for (int i = 0; i < todoManager.size; ++i)
	{
		printf("%d.: %s\n", i, todoManager.todoList[i].message);
	}

	return 0;
}
