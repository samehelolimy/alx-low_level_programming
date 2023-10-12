/**
 * array_iterator - executes a function given as a parameter on each element
 * @array: first
 * @size: sec
 * @action: function parameter
 * Return: success
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *i = (array + size - 1);

	if (array && size && action)
		while (array <= i)
		action(*array++);
}
